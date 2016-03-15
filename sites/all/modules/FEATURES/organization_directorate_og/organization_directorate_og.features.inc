<?php
/**
 * @file
 * organization_directorate_og.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function organization_directorate_og_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ctools_custom_content" && $api == "ctools_content") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function organization_directorate_og_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function organization_directorate_og_image_default_styles() {
  $styles = array();

  // Exported image style: alert_image.
  $styles['alert_image'] = array(
    'name' => 'alert_image',
    'label' => 'Alert Image',
    '__pk' => 'f28ca0a9-ed95-490a-9d35-a7ec10c94ebb',
    '__unique_name' => 'ãf`«êr¹ëohýLŒúé',
    'effects' => array(
      1 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 275,
          'height' => 200,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: announcement_image_icon.
  $styles['announcement_image_icon'] = array(
    'name' => 'announcement_image_icon',
    'label' => 'Announcement Image Icon',
    '__pk' => '6fa182eb-e953-4d80-b610-1753d87a29aa',
    '__unique_name' => '¾5o€ä•Ïï“òŽ¡’ÚOÏ',
    'effects' => array(
      2 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 50,
          'height' => 50,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: icon_size.
  $styles['icon_size'] = array(
    'name' => 'icon_size',
    'label' => 'Icon Size',
    '__pk' => '5e26f904-0a50-4d0e-ad9f-6dd516a9a76b',
    '__unique_name' => 'V{Ì F\\$ûÈêÕà—',
    'effects' => array(
      4 => array(
        'label' => 'Resize',
        'help' => 'Resizing will make images an exact set of dimensions. This may cause images to be stretched or shrunk disproportionately.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => 30,
          'height' => 30,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: taxonomy_service_icon.
  $styles['taxonomy_service_icon'] = array(
    'name' => 'taxonomy_service_icon',
    'label' => 'Taxonomy Service Icon',
    '__pk' => 'a304450b-353e-4771-b1a7-75034122cfea',
    '__unique_name' => '6Ì\\íªË¦@T',
    'effects' => array(
      3 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 40,
          'height' => 40,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function organization_directorate_og_node_info() {
  $items = array(
    'directorate_announcements' => array(
      'name' => t('Organization-Directorate Announcements'),
      'base' => 'node_content',
      'description' => t('Announcements at the directorate level.  Linked by OG.'),
      'has_title' => '1',
      'title_label' => t('Directorate Announcement'),
      'help' => '',
    ),
    'directorate_information' => array(
      'name' => t('Directorate Blocks'),
      'base' => 'node_content',
      'description' => t('This content type will hold additional information to display in a slider at the top of the content landing page OR at the bottom of the content landing page in blocks.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'organization_landing_page' => array(
      'name' => t('Organization-Directorate Main Content (OG)'),
      'base' => 'node_content',
      'description' => t('This holds the landing page details for a particular directorate (Organization).  It is locked by OG.'),
      'has_title' => '1',
      'title_label' => t('Directorate/Organization name'),
      'help' => '',
    ),
    'organizational_directorate_featu' => array(
      'name' => t('Organizational-Directorate Featured Services'),
      'base' => 'node_content',
      'description' => t('Featured Services are displayed on the respective Organizational/Directorate landing page.  They need their own content type because we display an icon with the link, so a link list alone won\'t work.  Relationship via OG.'),
      'has_title' => '1',
      'title_label' => t('Administrative Title only -- not displayed'),
      'help' => '',
    ),
    'organizations' => array(
      'name' => t('Organizations - Master OG'),
      'base' => 'node_content',
      'description' => t('This is the OG Group master GROUP.  IT will hold each of the directorates.  Each new directorate is added to this content type -- effectively becoming the next OG.'),
      'has_title' => '1',
      'title_label' => t('Name of the Organization/Directorate'),
      'help' => t('This is the name of the organization or directorate that has it\'s own content and permission controls.'),
    ),
  );
  return $items;
}

/**
 * Implements hook_default_og_membership_type().
 */
function organization_directorate_og_default_og_membership_type() {
  $items = array();
  $items['admin'] = entity_import('og_membership_type', '{
    "name" : "admin",
    "description" : "Admin",
    "language" : "",
    "rdf_mapping" : []
  }');
  $items['member'] = entity_import('og_membership_type', '{
    "name" : "member",
    "description" : "Member",
    "language" : "",
    "rdf_mapping" : []
  }');
  return $items;
}
