<?php
/**
 * @file
 * home_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function home_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function home_page_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function home_page_image_default_styles() {
  $styles = array();

  // Exported image style: homepage_service_icon.
  $styles['homepage_service_icon'] = array(
    'name' => 'homepage_service_icon',
    'label' => 'Homepage Service Icon',
    '__pk' => '1eff2f10-3d3d-4f96-bb2d-0604adaab2b6',
    '__unique_name' => 'e6¤ä3¡\'¬6o¸Œh',
    'effects' => array(
      5 => array(
        'label' => 'Resize',
        'help' => 'Resizing will make images an exact set of dimensions. This may cause images to be stretched or shrunk disproportionately.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => 50,
          'height' => 50,
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
function home_page_node_info() {
  $items = array(
    'commuter_content' => array(
      'name' => t('Commuter Content'),
      'base' => 'node_content',
      'description' => t('This content type holds content that belongs to the commuter options pages.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'course_or_program' => array(
      'name' => t('Course or Program'),
      'base' => 'node_content',
      'description' => t('Represents the name of the training course or program being offered.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'directorate_alert' => array(
      'name' => t('Directorate Alert'),
      'base' => 'node_content',
      'description' => t('Alerts specific to a given Directorate within WHS.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'emergency_contact' => array(
      'name' => t('Emergency Contact'),
      'base' => 'node_content',
      'description' => t('These are the emergency contacts for WHS.'),
      'has_title' => '1',
      'title_label' => t('BUILDING'),
      'help' => '',
    ),
    'favorites' => array(
      'name' => t('favorites'),
      'base' => 'node_content',
      'description' => t('This table holds the user\'s favorites.  These can be viewed from the home page and set by selecting "add to favorite" on each respective page.'),
      'has_title' => '1',
      'title_label' => t('Favorite Path'),
      'help' => '',
    ),
    'whs_alert' => array(
      'name' => t('WHS Alert'),
      'base' => 'node_content',
      'description' => t('Alerts to be displayed at the top level of the site (contrast to Directorate Alerts shown in the respective organic group only).'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'whs_announcements' => array(
      'name' => t('WHS Announcements'),
      'base' => 'node_content',
      'description' => t('Announcements displayed to all members of the WHS community (landing pages, WHS level).'),
      'has_title' => '1',
      'title_label' => t('Announcement Title'),
      'help' => '',
    ),
    'whs_contact_page' => array(
      'name' => t('WHS Contact Page'),
      'base' => 'node_content',
      'description' => t('This page holds the contact us information for the site.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'whs_content' => array(
      'name' => t('WHS Content'),
      'base' => 'node_content',
      'description' => t('Any content we want displayed throughout the whole site'),
      'has_title' => '1',
      'title_label' => t('WHS Content Title'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implements hook_default_profile2_type().
 */
function home_page_default_profile2_type() {
  $items = array();
  $items['main'] = entity_import('profile2_type', '{
    "userCategory" : false,
    "userView" : false,
    "type" : "main",
    "label" : "Main profile",
    "weight" : "0",
    "data" : { "registration" : true, "use_page" : true },
    "rdf_mapping" : []
  }');
  return $items;
}
