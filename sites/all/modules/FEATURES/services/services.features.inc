<?php
/**
 * @file
 * services.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function services_ctools_plugin_api($module = NULL, $api = NULL) {
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
function services_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function services_node_info() {
  $items = array(
    'service_eligibility_designator' => array(
      'name' => t('Service Eligibility Designator'),
      'base' => 'node_content',
      'description' => t('These are the icons and titles of the various service branches eligible for certain programs, or support.'),
      'has_title' => '1',
      'title_label' => t('Service Name'),
      'help' => '',
    ),
    'service_program_landing_page' => array(
      'name' => t('Service Program Landing Page'),
      'base' => 'node_content',
      'description' => t('Program Landing pages for services under the SERVICES -> [CATEGORY] menu items.  Note, there will be different landing pages for pentagon, mark-center, etc.'),
      'has_title' => '1',
      'title_label' => t('Service Title'),
      'help' => '',
    ),
    'service_program_sub_page' => array(
      'name' => t('Service Program Details Sub Page'),
      'base' => 'node_content',
      'description' => t('This is third level of information on a service (1 = cateogry, 2 = landing page, 3 = sub page).  This holds the program details such as tabs, text, compressed contact information, etc.  Only applies if there is sub landing page content for a particular program or service.'),
      'has_title' => '1',
      'title_label' => t('Title of this sub page (should match the menu option)'),
      'help' => '',
    ),
  );
  return $items;
}
