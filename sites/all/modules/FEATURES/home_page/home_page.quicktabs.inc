<?php
/**
 * @file
 * home_page.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function home_page_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'commuter_options';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Quicktabs Controls - Commuter Options.  See QUICKTABS for options';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'commuter_options',
      'display' => 'block',
      'args' => 'pentagon',
      'title' => 'Pentagon',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'commuter_options',
      'display' => 'block',
      'args' => 'mark center',
      'title' => 'Mark Center',
      'weight' => '-99',
      'type' => 'view',
    ),
    2 => array(
      'vid' => 'commuter_options',
      'display' => 'block',
      'args' => 'crystal city',
      'title' => 'Crystal City',
      'weight' => '-98',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Crystal City');
  t('Mark Center');
  t('Pentagon');
  t('Quicktabs Controls - Commuter Options.  See QUICKTABS for options');

  $export['commuter_options'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'whs_home_page_service_table';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Quicktabs Controls - Directorate, Program, and Sub-Program. See QUICKTABS for options.';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'block_delta_28',
      'hide_title' => 1,
      'title' => 'Information',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'vid' => 'directorate_services',
      'display' => 'block',
      'args' => '',
      'title' => 'Directorate Services',
      'weight' => '-99',
      'type' => 'view',
    ),
    2 => array(
      'bid' => 'block_delta_29',
      'hide_title' => 1,
      'title' => 'WHS Services',
      'weight' => '-98',
      'type' => 'block',
    ),
    3 => array(
      'bid' => 'block_delta_29',
      'hide_title' => 1,
      'title' => 'Service Information',
      'weight' => '-97',
      'type' => 'block',
    ),
    4 => array(
      'vid' => 'serivce_program_landing_page_eligibility_list',
      'display' => 'block',
      'args' => '',
      'title' => 'Service Eligibility',
      'weight' => '-96',
      'type' => 'view',
    ),
    5 => array(
      'vid' => 'service_program_related_links',
      'display' => 'block',
      'args' => '',
      'title' => 'Related Links',
      'weight' => '-95',
      'type' => 'view',
    ),
    6 => array(
      'vid' => 'display_favorites',
      'display' => 'block',
      'args' => '',
      'title' => 'Favorites',
      'weight' => '-94',
      'type' => 'view',
    ),
    7 => array(
      'vid' => 'service_program_landing_page_contact_us',
      'display' => 'block',
      'args' => '',
      'title' => 'How to Obtain',
      'weight' => '-93',
      'type' => 'view',
    ),
    8 => array(
      'bid' => 'views_delta_featured_tools-bottom_left',
      'hide_title' => 1,
      'title' => 'Top Tools',
      'weight' => '-92',
      'type' => 'block',
    ),
    9 => array(
      'vid' => 'announcement_view_individual_',
      'display' => 'block',
      'args' => '',
      'title' => 'Announcement',
      'weight' => '-91',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Announcement');
  t('Directorate Services');
  t('Favorites');
  t('How to Obtain');
  t('Information');
  t('Quicktabs Controls - Directorate, Program, and Sub-Program. See QUICKTABS for options.');
  t('Related Links');
  t('Service Eligibility');
  t('Service Information');
  t('Top Tools');
  t('WHS Services');

  $export['whs_home_page_service_table'] = $quicktabs;

  return $export;
}
