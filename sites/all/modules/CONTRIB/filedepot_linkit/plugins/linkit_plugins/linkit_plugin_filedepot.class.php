<?php


/**
 * @file
 * Define Linkit file plugin class.
 */
class LinkitPluginFiledepot extends LinkitPluginEntity {

  /**
   * Set the plugin ui title.
   */
  function ui_title() {
    return t('Filedepot files');
  }

  /**
   * Set the plugin ui description.
   */
  function ui_description() {
    return t('Extend Linkit with filedepot support (Managed files).');
  }

  /**
   * Build an URL based in the path and the options.
   */
  function buildPath($entity, $options = array()) {
    $res = db_query("SELECT cid,fid FROM {filedepot_files} WHERE drupal_fid=:fid",
      array(
        ':fid' => $entity->fid,
      ));
    if ($res->rowCount() > 0) {
      list($cid, $fid) = array_values($res->fetchAssoc());
      $uri = "filedepot_download/{$cid}/{$fid}";
      return file_create_url($uri);
    }

  }

  /**
   * Build the search row description.
   *
   * If there is a "result_description", run it thro token_replace.
   *
   * @param object $data
   *   An entity object that will be used in the token_place function.
   *
   * @see token_replace()
   */
  function buildDescription($entity) {
    $description = '';
    $query = db_query("SELECT description FROM {filedepot_files} WHERE drupal_fid=:fid",
      array(
        ':fid' => $entity->fid,
      ));
    if ($query->rowCount() > 0) {
      list($file_description) = array_values($query->fetchAssoc());
      $description_array = array();
      //Get image info.
      $imageinfo = image_get_info($entity->uri);

      if ($this->conf['filedepot_show_image_extra_info']['thumbnail']) {
        $image = $imageinfo ? theme_image_style(array(
            'width' => $imageinfo['width'],
            'height' => $imageinfo['height'],
            'style_name' => 'linkit_thumb',
            'path' => $entity->uri,
          )) : '';
      }

      $description_array[] = t('Filedepot File');
      if (!empty($file_description)) $description_array[] = $file_description;
      if ($this->conf['filedepot_show_image_extra_info']['dimensions'] && !empty($imageinfo)) {
        $description_array[] = $imageinfo['width'] . 'x' . $imageinfo['height'] . 'px';
      }

      if ($this->conf['show_scheme']) {
        $description_array[] = file_uri_scheme($entity->uri) . '://';
      }

      $description = (isset($image) ? $image : '') . implode('<br />' , $description_array);
    }

    return $description;
  }

  /**
   * Start a new EntityFieldQuery instance.
   */
  function getQueryInstance() {
    // Call the parent getQueryInstance method.
    parent::getQueryInstance();
    // We only what permanent files and filedepot files
    $this->query->propertyCondition('status', FILE_STATUS_PERMANENT);
    $this->query->addTag('FILEDEPOT');
  }

  /**
   * Generate a settings form for this handler.
   * Uses the standard Drupal FAPI.
   * The element will be attached to the "data" key.
   *
   * @return
   *   An array containing any custom form elements to be displayed in the
   *   profile editing form.
   */
  function buildSettingsForm() {
    $form['filedepot_linkit'] = array(
      '#type' => 'fieldset',
      '#title' => t('!type plugin settings', array('!type' => $this->ui_title())),
      '#collapsible' => TRUE,
      '#collapsed' => TRUE,
      '#tree' => TRUE,
      '#states' => array(
        'invisible' => array(
          'input[name="data[plugins][' . $this->plugin['name'] . '][enabled]"]' => array('checked' => FALSE),
        ),
      ),
    );
    $image_extra_info_options = array(
      'thumbnail' => t('Show thumbnails <em>(using the image style !linkit_thumb_link)</em>', array('!linkit_thumb_link' => l('linkit_thumb', 'admin/config/media/image-styles/edit/linkit_thumb'))),
      'dimensions' => t('Show pixel dimensions'),
    );

    $form['filedepot_linkit']['filedepot_show_image_extra_info'] = array(
      '#title' => t('Images'),
      '#type' => 'checkboxes',
      '#options' => $image_extra_info_options,
      '#default_value' => isset($this->conf['filedepot_show_image_extra_info']) ? $this->conf['filedepot_show_image_extra_info'] : array('thumbnail', 'dimensions'),
    );

    return $form;

  }


}