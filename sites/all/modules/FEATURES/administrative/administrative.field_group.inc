<?php
/**
 * @file
 * administrative.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function administrative_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_addresses|user|user|form';
  $field_group->group_name = 'group_addresses';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Addresses',
    'weight' => '8',
    'children' => array(
      0 => 'field_title',
      1 => 'field_main_number',
      2 => 'field_directorate',
      3 => 'field_desk_number',
      4 => 'field_division',
      5 => 'field_blackberry',
      6 => 'field_street_address',
      7 => 'field_email',
      8 => 'field_city',
      9 => 'field_suite_number',
      10 => 'field_zip_code',
      11 => 'field_state',
      12 => 'field_work_from_home',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-addresses field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_addresses|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_leadership|user|user|form';
  $field_group->group_name = 'group_leadership';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Leadership',
    'weight' => '9',
    'children' => array(
      0 => 'field_government_manager_lead',
      1 => 'field_government_manager_lead_co',
      2 => 'field_government_lead_email',
      3 => 'field_executive',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-leadership field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_leadership|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_name|user|user|form';
  $field_group->group_name = 'group_name';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Name',
    'weight' => '7',
    'children' => array(
      0 => 'field_first_name',
      1 => 'field_last_name',
      2 => 'field_nickname',
      3 => 'field_middle_initial',
      4 => 'field_suffix',
      5 => 'field_military_rank',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-name field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_name|user|user|form'] = $field_group;

  return $export;
}
