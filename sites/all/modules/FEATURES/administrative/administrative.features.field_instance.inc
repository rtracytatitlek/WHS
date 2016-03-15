<?php
/**
 * @file
 * administrative.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function administrative_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'user-user-field_blackberry'
  $field_instances['user-user-field_blackberry'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter your Blackberry number here, if applicable.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_blackberry',
    'label' => 'Blackberry',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'user-user-field_city'
  $field_instances['user-user-field_city'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter your city location here.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 14,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_city',
    'label' => 'City',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 22,
    ),
  );

  // Exported field_instance: 'user-user-field_desk_number'
  $field_instances['user-user-field_desk_number'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter your desk number here.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_desk_number',
    'label' => 'Desk Number',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'user-user-field_directorate'
  $field_instances['user-user-field_directorate'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter your directorate here.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_directorate',
    'label' => 'Directorate',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'user-user-field_division'
  $field_instances['user-user-field_division'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter your division, if applicable.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_division',
    'label' => 'Division',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'user-user-field_email'
  $field_instances['user-user-field_email'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter your work email address here.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 13,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_email',
    'label' => 'Email',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'user-user-field_executive'
  $field_instances['user-user-field_executive'] = array(
    'bundle' => 'user',
    'default_value' => array(
      0 => array(
        'value' => 'nonses',
      ),
    ),
    'deleted' => 0,
    'description' => 'Select whether this individual is SES or not.  Used to display certain senior level material throughout the site.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 25,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_executive',
    'label' => 'Executive',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'user-user-field_first_name'
  $field_instances['user-user-field_first_name'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'User\'s first name.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_first_name',
    'label' => 'First Name ',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 20,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'user-user-field_government_lead_email'
  $field_instances['user-user-field_government_lead_email'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter your government/lead\'s email address.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 21,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_government_lead_email',
    'label' => 'Government/Lead Email',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 36,
    ),
  );

  // Exported field_instance: 'user-user-field_government_manager_lead'
  $field_instances['user-user-field_government_manager_lead'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter your government manager or lead\'s name here.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 19,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_government_manager_lead',
    'label' => 'Government Manager/Lead',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 34,
    ),
  );

  // Exported field_instance: 'user-user-field_government_manager_lead_co'
  $field_instances['user-user-field_government_manager_lead_co'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter your government/lead\'s contact number.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 20,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_government_manager_lead_co',
    'label' => 'Government Manager/Lead Contact Number  ',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 35,
    ),
  );

  // Exported field_instance: 'user-user-field_last_name'
  $field_instances['user-user-field_last_name'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'User\'s last name, can be hyphenated.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_last_name',
    'label' => 'Last Name ',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 50,
      ),
      'type' => 'text_textfield',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'user-user-field_main_number'
  $field_instances['user-user-field_main_number'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter your main telephone number.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_main_number',
    'label' => 'Main Number',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'user-user-field_middle_initial'
  $field_instances['user-user-field_middle_initial'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'User\'s middle initial(s).',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_middle_initial',
    'label' => 'Middle Initial',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 4,
      ),
      'type' => 'text_textfield',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'user-user-field_military_rank'
  $field_instances['user-user-field_military_rank'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'User\'s military rank, if applicable.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_military_rank',
    'label' => 'Military Rank',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 20,
      ),
      'type' => 'text_textfield',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'user-user-field_nickname'
  $field_instances['user-user-field_nickname'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'User\'s nickname.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_nickname',
    'label' => 'Nickname',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 20,
      ),
      'type' => 'text_textfield',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'user-user-field_state'
  $field_instances['user-user-field_state'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select the state from the drop-down list.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 17,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_state',
    'label' => 'State',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 25,
    ),
  );

  // Exported field_instance: 'user-user-field_street_address'
  $field_instances['user-user-field_street_address'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter your directorate street address.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_street_address',
    'label' => 'Street Address',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'user-user-field_suffix'
  $field_instances['user-user-field_suffix'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'User\'s generational indicator',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_suffix',
    'label' => 'Suffix',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'user-user-field_suite_number'
  $field_instances['user-user-field_suite_number'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter your office suite number here, if applicable.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 15,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_suite_number',
    'label' => 'Suite Number',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 23,
    ),
  );

  // Exported field_instance: 'user-user-field_title'
  $field_instances['user-user-field_title'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter your title here, if applicable.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'user-user-field_verification'
  $field_instances['user-user-field_verification'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 22,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_verification',
    'label' => 'Verification',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 30,
    ),
  );

  // Exported field_instance: 'user-user-field_work_from_home'
  $field_instances['user-user-field_work_from_home'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select either Yes or No to answer whether you work from home or not.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 18,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_work_from_home',
    'label' => 'Work From Home',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 26,
    ),
  );

  // Exported field_instance: 'user-user-field_zip_code'
  $field_instances['user-user-field_zip_code'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter your work zip code here.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 16,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_zip_code',
    'label' => 'Zip Code',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 24,
    ),
  );

  // Exported field_instance: 'user-user-og_user_node'
  $field_instances['user-user-og_user_node'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'og_ui',
        'settings' => array(),
        'type' => 'og_list_default',
        'weight' => 24,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'og_user_node',
    'label' => 'Group membership',
    'required' => FALSE,
    'settings' => array(
      'behaviors' => array(
        'og_widget' => array(
          'admin' => array(
            'widget_type' => 'entityreference_autocomplete',
          ),
          'default' => array(
            'widget_type' => 'options_select',
          ),
          'status' => TRUE,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'view modes' => array(
      'full' => array(
        'custom settings' => FALSE,
        'label' => 'Full',
        'type' => 'og_list_default',
      ),
      'teaser' => array(
        'custom settings' => FALSE,
        'label' => 'Teaser',
        'type' => 'og_list_default',
      ),
    ),
    'widget' => array(
      'module' => 'og',
      'settings' => array(),
      'type' => 'og_complex',
      'weight' => 32,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Blackberry');
  t('City');
  t('Desk Number');
  t('Directorate');
  t('Division');
  t('Email');
  t('Enter your Blackberry number here, if applicable.');
  t('Enter your city location here.');
  t('Enter your desk number here.');
  t('Enter your directorate here.');
  t('Enter your directorate street address.');
  t('Enter your division, if applicable.');
  t('Enter your government manager or lead\'s name here.');
  t('Enter your government/lead\'s contact number.');
  t('Enter your government/lead\'s email address.');
  t('Enter your main telephone number.');
  t('Enter your office suite number here, if applicable.');
  t('Enter your title here, if applicable.');
  t('Enter your work email address here.');
  t('Enter your work zip code here.');
  t('Executive');
  t('First Name ');
  t('Government Manager/Lead');
  t('Government Manager/Lead Contact Number  ');
  t('Government/Lead Email');
  t('Group membership');
  t('Last Name ');
  t('Main Number');
  t('Middle Initial');
  t('Military Rank');
  t('Nickname');
  t('Select either Yes or No to answer whether you work from home or not.');
  t('Select the state from the drop-down list.');
  t('Select whether this individual is SES or not.  Used to display certain senior level material throughout the site.');
  t('State');
  t('Street Address');
  t('Suffix');
  t('Suite Number');
  t('Title');
  t('User\'s first name.');
  t('User\'s generational indicator');
  t('User\'s last name, can be hyphenated.');
  t('User\'s middle initial(s).');
  t('User\'s military rank, if applicable.');
  t('User\'s nickname.');
  t('Verification');
  t('Work From Home');
  t('Zip Code');

  return $field_instances;
}
