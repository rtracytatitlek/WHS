<?php
/**
 * @file
 * organization_directorate_og.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function organization_directorate_og_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tab_top_customer|node|organization_landing_page|form';
  $field_group->group_name = 'group_tab_top_customer';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organization_landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_top_row';
  $field_group->data = array(
    'label' => 'Customer',
    'weight' => '12',
    'children' => array(
      0 => 'field_top_left_custmer',
      1 => 'field_top_middle_custmer',
      2 => 'field_top_right_customer',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-tab-top-customer field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_tab_top_customer|node|organization_landing_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tab_top_employees|node|organization_landing_page|form';
  $field_group->group_name = 'group_tab_top_employees';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organization_landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_top_row';
  $field_group->data = array(
    'label' => 'WHS Employees',
    'weight' => '11',
    'children' => array(
      0 => 'field_top_left_employee',
      1 => 'field_top_middle_employee',
      2 => 'field_top_right_employee',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-tab-top-employees field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_tab_top_employees|node|organization_landing_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tab_top_group|node|organization_landing_page|form';
  $field_group->group_name = 'group_tab_top_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organization_landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_top_row';
  $field_group->data = array(
    'label' => 'Group Members',
    'weight' => '10',
    'children' => array(
      0 => 'field_top_left_text_box',
      1 => 'field_top_middle_text_box',
      2 => 'field_top_right_box',
      3 => 'field_director_name',
      4 => 'field_director_title',
      5 => 'field_default_director_descripti',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-tab-top-group field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_tab_top_group|node|organization_landing_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_top_row|node|organization_landing_page|form';
  $field_group->group_name = 'group_top_row';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organization_landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Top Row',
    'weight' => '4',
    'children' => array(
      0 => 'group_tab_top_customer',
      1 => 'group_tab_top_employees',
      2 => 'group_tab_top_group',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-top-row field-group-htabs',
      ),
    ),
  );
  $export['group_top_row|node|organization_landing_page|form'] = $field_group;

  return $export;
}
