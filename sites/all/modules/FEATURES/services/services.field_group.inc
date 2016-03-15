<?php
/**
 * @file
 * services.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function services_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_information|node|service_program_landing_page|form';
  $field_group->group_name = 'group_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_program_landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'How do I get this Service?',
    'weight' => '7',
    'children' => array(
      0 => 'field_how_do_i_get_this_service',
      1 => 'field_poc_name',
      2 => 'field_poc_phone',
      3 => 'field_poc_email',
      4 => 'field_2nd_poc',
      5 => 'field_2nd_poc_phone',
      6 => 'field_2nd_poc_email',
      7 => 'field_service_provider',
      8 => 'field_2nd_information',
      9 => 'field_poc_phone_alternate',
      10 => 'field_2nd_poc_phone_alternate',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-information field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_information|node|service_program_landing_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sub_program_contact|node|service_program_sub_page|form';
  $field_group->group_name = 'group_sub_program_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_program_sub_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact Us Informtion',
    'weight' => '8',
    'children' => array(
      0 => 'field_which_program_should_conta',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-sub-program-contact field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_sub_program_contact|node|service_program_sub_page|form'] = $field_group;

  return $export;
}
