<?php
/**
 * @file
 * services.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function services_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'quicktabs_control_whs_services_t';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Quicktabs Control - WHS Services Program Pages (below landing pages)';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'block_delta_29',
      'hide_title' => 1,
      'title' => 'Service Information',
      'weight' => '-97',
      'type' => 'block',
    ),
    1 => array(
      'vid' => 'serivce_program_landing_page_eligibility_list',
      'display' => 'block_1',
      'args' => '',
      'title' => 'Service Eligibility',
      'weight' => '-96',
      'type' => 'view',
    ),
    2 => array(
      'vid' => 'service_program_related_links',
      'display' => 'block_1',
      'args' => '',
      'title' => 'Related Links',
      'weight' => '-95',
      'type' => 'view',
    ),
    3 => array(
      'vid' => 'service_program_landing_page_contact_us',
      'display' => 'block_1',
      'args' => '',
      'title' => 'How to Obtain',
      'weight' => '-93',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('How to Obtain');
  t('Quicktabs Control - WHS Services Program Pages (below landing pages)');
  t('Related Links');
  t('Service Eligibility');
  t('Service Information');

  $export['quicktabs_control_whs_services_t'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'whs_services_tabs';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Quicktabs Controls - WHS Services Landing Page (taxonomy)';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'whs_service_main_list_of_services',
      'display' => 'block',
      'args' => '',
      'title' => 'Available Services',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'bid' => 'block_delta_29',
      'hide_title' => 1,
      'title' => 'WHS Services',
      'weight' => '-99',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Available Services');
  t('Quicktabs Controls - WHS Services Landing Page (taxonomy)');
  t('WHS Services');

  $export['whs_services_tabs'] = $quicktabs;

  return $export;
}
