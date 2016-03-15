<?php
/**
 * @file
 * home_page.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function home_page_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_poc_info|node|course_or_program|form';
  $field_group->group_name = 'group_poc_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'course_or_program';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'POC Info',
    'weight' => '6',
    'children' => array(
      0 => 'field_desk_number',
      1 => 'field_email',
      2 => 'field_trainer_or_poc',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-poc-info field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_poc_info|node|course_or_program|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_schedule|node|course_or_program|form';
  $field_group->group_name = 'group_schedule';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'course_or_program';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Schedule',
    'weight' => '7',
    'children' => array(
      0 => 'field_end_date',
      1 => 'field_start_date',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-schedule field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_schedule|node|course_or_program|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_training_location|node|course_or_program|form';
  $field_group->group_name = 'group_training_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'course_or_program';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Training Location',
    'weight' => '19',
    'children' => array(
      0 => 'field_building_name',
      1 => 'field_city',
      2 => 'field_state',
      3 => 'field_street_address',
      4 => 'field_suite_number',
      5 => 'field_zip_code',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-training-location field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_training_location|node|course_or_program|form'] = $field_group;

  return $export;
}
