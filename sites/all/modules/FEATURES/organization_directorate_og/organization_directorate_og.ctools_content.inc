<?php
/**
 * @file
 * organization_directorate_og.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function organization_directorate_og_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'display_breadcrumbs';
  $content->admin_title = 'Breadcrumb';
  $content->admin_description = 'Used at the top of each page to display breadcrumbs.';
  $content->category = '';
  $content->settings = array(
    'admin_title' => 'Breadcrumb',
    'title' => '',
    'body' => '<?php
display_whs_breadcrumbs();
?>',
    'format' => 'php_code',
    'substitute' => 1,
  );
  $export['display_breadcrumbs'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'display_favorites';
  $content->admin_title = 'Custom: Favorites';
  $content->admin_description = 'Display the favorite controls';
  $content->category = '';
  $content->settings = array(
    'admin_title' => 'Favorites',
    'title' => '',
    'body' => '<?php

//DIsplay the printer icon.
display_print_button();

//Call the favorites routine from whs_custom.module
//TASK = 3 returns the proper icon/text for the favorite box based on whether this URL has already been added to the system or not

echo favorites($_REQUEST[\'q\'],"3");

?>',
    'format' => 'php_code',
    'substitute' => 1,
  );
  $export['display_favorites'] = $content;

  return $export;
}
