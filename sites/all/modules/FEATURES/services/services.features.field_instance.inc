<?php
/**
 * @file
 * services.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function services_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-service_eligibility_designator-field_description'
  $field_instances['node-service_eligibility_designator-field_description'] = array(
    'bundle' => 'service_eligibility_designator',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_trimmed',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_description',
    'label' => 'description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-service_eligibility_designator-field_image_icon'
  $field_instances['node-service_eligibility_designator-field_image_icon'] = array(
    'bundle' => 'service_eligibility_designator',
    'deleted' => 0,
    'description' => 'This image will be displayed next to the service title.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_image_icon',
    'label' => 'Image Icon',
    'required' => 1,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '40x40',
      'min_resolution' => '20x20',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-service_program_landing_page-field_2nd_information'
  $field_instances['node-service_program_landing_page-field_2nd_information'] = array(
    'bundle' => 'service_program_landing_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 17,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_2nd_information',
    'label' => '2nd Information',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-service_program_landing_page-field_2nd_poc'
  $field_instances['node-service_program_landing_page-field_2nd_poc'] = array(
    'bundle' => 'service_program_landing_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_2nd_poc',
    'label' => '2nd POC Name',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-service_program_landing_page-field_2nd_poc_email'
  $field_instances['node-service_program_landing_page-field_2nd_poc_email'] = array(
    'bundle' => 'service_program_landing_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_2nd_poc_email',
    'label' => '2nd POC Email',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-service_program_landing_page-field_2nd_poc_phone'
  $field_instances['node-service_program_landing_page-field_2nd_poc_phone'] = array(
    'bundle' => 'service_program_landing_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_2nd_poc_phone',
    'label' => '2nd POC Phone',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-service_program_landing_page-field_2nd_poc_phone_alternate'
  $field_instances['node-service_program_landing_page-field_2nd_poc_phone_alternate'] = array(
    'bundle' => 'service_program_landing_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 19,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_2nd_poc_phone_alternate',
    'label' => '2nd POC Phone - Alternate',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-service_program_landing_page-field_how_do_i_get_this_service'
  $field_instances['node-service_program_landing_page-field_how_do_i_get_this_service'] = array(
    'bundle' => 'service_program_landing_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Contact information displayed in the left box.  Note - this will different for each different location:  MARK, PENTAGON, etc.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_how_do_i_get_this_service',
    'label' => 'Information',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-service_program_landing_page-field_poc_email'
  $field_instances['node-service_program_landing_page-field_poc_email'] = array(
    'bundle' => 'service_program_landing_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_poc_email',
    'label' => 'POC Email',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-service_program_landing_page-field_poc_name'
  $field_instances['node-service_program_landing_page-field_poc_name'] = array(
    'bundle' => 'service_program_landing_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_poc_name',
    'label' => 'POC Name',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-service_program_landing_page-field_poc_phone'
  $field_instances['node-service_program_landing_page-field_poc_phone'] = array(
    'bundle' => 'service_program_landing_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_poc_phone',
    'label' => 'POC Phone',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-service_program_landing_page-field_poc_phone_alternate'
  $field_instances['node-service_program_landing_page-field_poc_phone_alternate'] = array(
    'bundle' => 'service_program_landing_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 18,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_poc_phone_alternate',
    'label' => 'POC Phone - Alternate',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-service_program_landing_page-field_related_links'
  $field_instances['node-service_program_landing_page-field_related_links'] = array(
    'bundle' => 'service_program_landing_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please enter any related content links for this program or service.  You should enter one link per entry.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_related_links',
    'label' => 'Related Links',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => 'related_link',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-service_program_landing_page-field_service_eligibility_icons'
  $field_instances['node-service_program_landing_page-field_service_eligibility_icons'] = array(
    'bundle' => 'service_program_landing_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Which services/agencies may use this program or service?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_eligibility_icons',
    'label' => 'Service Eligibility Icons',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-service_program_landing_page-field_service_location'
  $field_instances['node-service_program_landing_page-field_service_location'] = array(
    'bundle' => 'service_program_landing_page',
    'default_value' => array(
      0 => array(
        'value' => 'All',
      ),
    ),
    'deleted' => 0,
    'description' => 'Please indicate where this service is provided.  Default is "All."',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 21,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_location',
    'label' => 'Service Location',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-service_program_landing_page-field_service_provider'
  $field_instances['node-service_program_landing_page-field_service_provider'] = array(
    'bundle' => 'service_program_landing_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_provider',
    'label' => 'Service Provider',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-service_program_landing_page-field_which_program_or_service_'
  $field_instances['node-service_program_landing_page-field_which_program_or_service_'] = array(
    'bundle' => 'service_program_landing_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'You must associate this program landing page content with a taxonomy term (program).  Sub program details and menu options are handled under -service program sub page- content type, not here.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_which_program_or_service_',
    'label' => 'Which Program or Service?',
    'required' => 1,
    'settings' => array(
      'behaviors' => array(
        'taxonomy-index' => array(
          'status' => TRUE,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-service_program_sub_page-body'
  $field_instances['node-service_program_sub_page-body'] = array(
    'bundle' => 'service_program_sub_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Although this can be used in conjunction with tabs, generally a sub page has either tabs or text.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Text in lieu of tabs',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-service_program_sub_page-field_associate_with_which_term'
  $field_instances['node-service_program_sub_page-field_associate_with_which_term'] = array(
    'bundle' => 'service_program_sub_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select the SUB-PROGRAM LANDING PAGE term with which to associate the information in this node.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_associate_with_which_term',
    'label' => 'Associate with which sub-program landing page?',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'taxonomy-index' => array(
          'status' => TRUE,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-service_program_sub_page-field_description_of_the_sub_pag'
  $field_instances['node-service_program_sub_page-field_description_of_the_sub_pag'] = array(
    'bundle' => 'service_program_sub_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This is displayed at the top of the page under the title.  Optional -- leave blank for nothing.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_description_of_the_sub_pag',
    'label' => 'Description of the sub-page',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-service_program_sub_page-field_tabs'
  $field_instances['node-service_program_sub_page-field_tabs'] = array(
    'bundle' => 'service_program_sub_page',
    'default_value' => array(
      0 => array(
        'tab_title_1' => '',
        'tab_body_1' => array(
          'format' => 'full_html',
          'value' => '',
        ),
        'add_jquery_tab' => 'Add one more in Tabs',
      ),
    ),
    'deleted' => 0,
    'description' => 'You may create up to seven tab groups for each sub-page.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_jquery_tabs',
        'settings' => array(),
        'type' => 'field_jquery_tabs_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tabs',
    'label' => 'Tabs',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_jquery_tabs',
      'settings' => array(),
      'type' => 'field_jquery_tabs_widget',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-service_program_sub_page-field_which_program_should_conta'
  $field_instances['node-service_program_sub_page-field_which_program_should_conta'] = array(
    'bundle' => 'service_program_sub_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_which_program_should_conta',
    'label' => 'Which program should contact information be drawn from? (uses initial POC, not 2nd POC)',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'taxonomy_term-building_and_facilities-field_directorate_services_descr'
  $field_instances['taxonomy_term-building_and_facilities-field_directorate_services_descr'] = array(
    'bundle' => 'building_and_facilities',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please enter up to two sentences that describe this service.  This information will be displayed in directorate or services information tab.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_directorate_services_descr',
    'label' => 'Directorate Services Description',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'taxonomy_term-building_and_facilities-field_select_a_page_template'
  $field_instances['taxonomy_term-building_and_facilities-field_select_a_page_template'] = array(
    'bundle' => 'building_and_facilities',
    'default_value' => array(
      0 => array(
        'value' => 'program',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_select_a_page_template',
    'label' => 'Select a Page Template',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'taxonomy_term-building_and_facilities-field_service_location'
  $field_instances['taxonomy_term-building_and_facilities-field_service_location'] = array(
    'bundle' => 'building_and_facilities',
    'default_value' => array(
      0 => array(
        'value' => 'All',
      ),
    ),
    'deleted' => 0,
    'description' => 'Location of this service:  Pentagon, Crystal City, or Mark Center.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_service_location',
    'label' => 'Service Location',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'taxonomy_term-contracting_and_procurement-field_directorate_services_descr'
  $field_instances['taxonomy_term-contracting_and_procurement-field_directorate_services_descr'] = array(
    'bundle' => 'contracting_and_procurement',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please enter up to two sentences that describe this service.  This information will be displayed in directorate or services information tab.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_directorate_services_descr',
    'label' => 'Directorate Services Description',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'taxonomy_term-contracting_and_procurement-field_select_a_page_template'
  $field_instances['taxonomy_term-contracting_and_procurement-field_select_a_page_template'] = array(
    'bundle' => 'contracting_and_procurement',
    'default_value' => array(
      0 => array(
        'value' => 'program',
      ),
    ),
    'deleted' => 0,
    'description' => 'Please select the template associate with this content.  NOTE:  You must enter the corresponding content into the proper CONTENT TYPE (program/sub-program detail).',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_select_a_page_template',
    'label' => 'Select a Page Template',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'taxonomy_term-contracting_and_procurement-field_service_location'
  $field_instances['taxonomy_term-contracting_and_procurement-field_service_location'] = array(
    'bundle' => 'contracting_and_procurement',
    'default_value' => array(
      0 => array(
        'value' => 'Pentagon',
      ),
    ),
    'deleted' => 0,
    'description' => 'Location of this service:  Pentagon, Crystal City, or Mark Center.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_service_location',
    'label' => 'Service Location',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'taxonomy_term-directorate_acquisition_directorate-field_directorate_services_descr'
  $field_instances['taxonomy_term-directorate_acquisition_directorate-field_directorate_services_descr'] = array(
    'bundle' => 'directorate_acquisition_directorate',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please enter up to two sentences that describe this service.  This information will be displayed in directorate or services information tab.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_directorate_services_descr',
    'label' => 'Directorate Services Description',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'taxonomy_term-directorate_acquisition_directorate-field_select_a_page_template'
  $field_instances['taxonomy_term-directorate_acquisition_directorate-field_select_a_page_template'] = array(
    'bundle' => 'directorate_acquisition_directorate',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please indicate if this is a program/sub-program page, or a program details page.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_select_a_page_template',
    'label' => 'Select a Page Template',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'taxonomy_term-directorate_acquisition_directorate-field_service_location'
  $field_instances['taxonomy_term-directorate_acquisition_directorate-field_service_location'] = array(
    'bundle' => 'directorate_acquisition_directorate',
    'default_value' => array(
      0 => array(
        'value' => 'All',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_service_location',
    'label' => 'Service Location',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'taxonomy_term-directorate_enterprise_information_technology_services_directorate-field_directorate_services_descr'
  $field_instances['taxonomy_term-directorate_enterprise_information_technology_services_directorate-field_directorate_services_descr'] = array(
    'bundle' => 'directorate_enterprise_information_technology_services_directorate',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please enter up to two sentences that describe this service.  This information will be displayed in directorate or services information tab.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_directorate_services_descr',
    'label' => 'Directorate Services Description',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'taxonomy_term-directorate_enterprise_information_technology_services_directorate-field_select_a_page_template'
  $field_instances['taxonomy_term-directorate_enterprise_information_technology_services_directorate-field_select_a_page_template'] = array(
    'bundle' => 'directorate_enterprise_information_technology_services_directorate',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please indicate if this is a program/sub-program page, or a program details page.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_select_a_page_template',
    'label' => 'Select a Page Template',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'taxonomy_term-directorate_enterprise_information_technology_services_directorate-field_service_location'
  $field_instances['taxonomy_term-directorate_enterprise_information_technology_services_directorate-field_service_location'] = array(
    'bundle' => 'directorate_enterprise_information_technology_services_directorate',
    'default_value' => array(
      0 => array(
        'value' => 'All',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_service_location',
    'label' => 'Service Location',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'taxonomy_term-directorate_enterprise_management-field_directorate_services_descr'
  $field_instances['taxonomy_term-directorate_enterprise_management-field_directorate_services_descr'] = array(
    'bundle' => 'directorate_enterprise_management',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please enter up to two sentences that describe this service.  This information will be displayed in directorate or services information tab.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_directorate_services_descr',
    'label' => 'Directorate Services Description',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'taxonomy_term-directorate_enterprise_management-field_select_a_page_template'
  $field_instances['taxonomy_term-directorate_enterprise_management-field_select_a_page_template'] = array(
    'bundle' => 'directorate_enterprise_management',
    'default_value' => array(
      0 => array(
        'value' => 'program',
      ),
    ),
    'deleted' => 0,
    'description' => 'Is this a program or a detail page?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_select_a_page_template',
    'label' => 'Select a Page Template',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'taxonomy_term-directorate_enterprise_management-field_service_location'
  $field_instances['taxonomy_term-directorate_enterprise_management-field_service_location'] = array(
    'bundle' => 'directorate_enterprise_management',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_service_location',
    'label' => 'Service Location',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'taxonomy_term-directorate_equal_employment_opportunity_and_diversity-field_directorate_services_descr'
  $field_instances['taxonomy_term-directorate_equal_employment_opportunity_and_diversity-field_directorate_services_descr'] = array(
    'bundle' => 'directorate_equal_employment_opportunity_and_diversity',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please enter up to two sentences that describe this service.  This information will be displayed in directorate or services information tab.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_directorate_services_descr',
    'label' => 'Directorate Services Description',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'taxonomy_term-directorate_equal_employment_opportunity_and_diversity-field_select_a_page_template'
  $field_instances['taxonomy_term-directorate_equal_employment_opportunity_and_diversity-field_select_a_page_template'] = array(
    'bundle' => 'directorate_equal_employment_opportunity_and_diversity',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please indicate if this is a program/sub-program page, or a program details page.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_select_a_page_template',
    'label' => 'Select a Page Template',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'taxonomy_term-directorate_equal_employment_opportunity_and_diversity-field_service_location'
  $field_instances['taxonomy_term-directorate_equal_employment_opportunity_and_diversity-field_service_location'] = array(
    'bundle' => 'directorate_equal_employment_opportunity_and_diversity',
    'default_value' => array(
      0 => array(
        'value' => 'All',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_service_location',
    'label' => 'Service Location',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'taxonomy_term-directorate_facilities_services_directorate-field_directorate_services_descr'
  $field_instances['taxonomy_term-directorate_facilities_services_directorate-field_directorate_services_descr'] = array(
    'bundle' => 'directorate_facilities_services_directorate',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please enter up to two sentences that describe this service.  This information will be displayed in directorate or services information tab.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_directorate_services_descr',
    'label' => 'Directorate Services Description',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'taxonomy_term-directorate_facilities_services_directorate-field_select_a_page_template'
  $field_instances['taxonomy_term-directorate_facilities_services_directorate-field_select_a_page_template'] = array(
    'bundle' => 'directorate_facilities_services_directorate',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please indicate if this is a program/sub-program page, or a program details page.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_select_a_page_template',
    'label' => 'Select a Page Template',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'taxonomy_term-directorate_facilities_services_directorate-field_service_location'
  $field_instances['taxonomy_term-directorate_facilities_services_directorate-field_service_location'] = array(
    'bundle' => 'directorate_facilities_services_directorate',
    'default_value' => array(
      0 => array(
        'value' => 'All',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_service_location',
    'label' => 'Service Location',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'taxonomy_term-directorate_financial_management_directorate-field_directorate_services_descr'
  $field_instances['taxonomy_term-directorate_financial_management_directorate-field_directorate_services_descr'] = array(
    'bundle' => 'directorate_financial_management_directorate',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please enter up to two sentences that describe this service.  This information will be displayed in directorate or services information tab.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_directorate_services_descr',
    'label' => 'Directorate Services Description',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'taxonomy_term-directorate_financial_management_directorate-field_select_a_page_template'
  $field_instances['taxonomy_term-directorate_financial_management_directorate-field_select_a_page_template'] = array(
    'bundle' => 'directorate_financial_management_directorate',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please indicate if this is a program/sub-program page, or a program details page.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_select_a_page_template',
    'label' => 'Select a Page Template',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'taxonomy_term-directorate_financial_management_directorate-field_service_location'
  $field_instances['taxonomy_term-directorate_financial_management_directorate-field_service_location'] = array(
    'bundle' => 'directorate_financial_management_directorate',
    'default_value' => array(
      0 => array(
        'value' => 'All',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_service_location',
    'label' => 'Service Location',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'taxonomy_term-directorate_general_counsel-field_directorate_services_descr'
  $field_instances['taxonomy_term-directorate_general_counsel-field_directorate_services_descr'] = array(
    'bundle' => 'directorate_general_counsel',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please enter up to two sentences that describe this service.  This information will be displayed in directorate or services information tab.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_directorate_services_descr',
    'label' => 'Directorate Services Description',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'taxonomy_term-directorate_general_counsel-field_select_a_page_template'
  $field_instances['taxonomy_term-directorate_general_counsel-field_select_a_page_template'] = array(
    'bundle' => 'directorate_general_counsel',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please indicate if this is a program/sub-program page, or a program details page.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_select_a_page_template',
    'label' => 'Select a Page Template',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'taxonomy_term-directorate_general_counsel-field_service_location'
  $field_instances['taxonomy_term-directorate_general_counsel-field_service_location'] = array(
    'bundle' => 'directorate_general_counsel',
    'default_value' => array(
      0 => array(
        'value' => 'All',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_service_location',
    'label' => 'Service Location',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'taxonomy_term-directorate_human_resources_directorate-field_directorate_services_descr'
  $field_instances['taxonomy_term-directorate_human_resources_directorate-field_directorate_services_descr'] = array(
    'bundle' => 'directorate_human_resources_directorate',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please enter up to two sentences that describe this service.  This information will be displayed in directorate or services information tab.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_directorate_services_descr',
    'label' => 'Directorate Services Description',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'taxonomy_term-directorate_human_resources_directorate-field_select_a_page_template'
  $field_instances['taxonomy_term-directorate_human_resources_directorate-field_select_a_page_template'] = array(
    'bundle' => 'directorate_human_resources_directorate',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please indicate if this is a program/sub-program page, or a program details page.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_select_a_page_template',
    'label' => 'Select a Page Template',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'taxonomy_term-directorate_human_resources_directorate-field_service_location'
  $field_instances['taxonomy_term-directorate_human_resources_directorate-field_service_location'] = array(
    'bundle' => 'directorate_human_resources_directorate',
    'default_value' => array(
      0 => array(
        'value' => 'All',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_service_location',
    'label' => 'Service Location',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'taxonomy_term-directorate_office_of_small_business_programs-field_directorate_services_descr'
  $field_instances['taxonomy_term-directorate_office_of_small_business_programs-field_directorate_services_descr'] = array(
    'bundle' => 'directorate_office_of_small_business_programs',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please enter up to two sentences that describe this service.  This information will be displayed in directorate or services information tab.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_directorate_services_descr',
    'label' => 'Directorate Services Description',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'taxonomy_term-directorate_office_of_small_business_programs-field_select_a_page_template'
  $field_instances['taxonomy_term-directorate_office_of_small_business_programs-field_select_a_page_template'] = array(
    'bundle' => 'directorate_office_of_small_business_programs',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please indicate if this is a program/sub-program page, or a program details page.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_select_a_page_template',
    'label' => 'Select a Page Template',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'taxonomy_term-directorate_office_of_small_business_programs-field_service_location'
  $field_instances['taxonomy_term-directorate_office_of_small_business_programs-field_service_location'] = array(
    'bundle' => 'directorate_office_of_small_business_programs',
    'default_value' => array(
      0 => array(
        'value' => 'All',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_service_location',
    'label' => 'Service Location',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'taxonomy_term-executive_and_administrative-field_directorate_services_descr'
  $field_instances['taxonomy_term-executive_and_administrative-field_directorate_services_descr'] = array(
    'bundle' => 'executive_and_administrative',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please enter up to two sentences that describe this service.  This information will be displayed in directorate or services information tab.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_directorate_services_descr',
    'label' => 'Directorate Services Description',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'taxonomy_term-executive_and_administrative-field_select_a_page_template'
  $field_instances['taxonomy_term-executive_and_administrative-field_select_a_page_template'] = array(
    'bundle' => 'executive_and_administrative',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_select_a_page_template',
    'label' => 'Select a Page Template',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'taxonomy_term-executive_and_administrative-field_service_location'
  $field_instances['taxonomy_term-executive_and_administrative-field_service_location'] = array(
    'bundle' => 'executive_and_administrative',
    'default_value' => array(
      0 => array(
        'value' => 'Pentagon',
      ),
    ),
    'deleted' => 0,
    'description' => 'Location of this service:  Pentagon, Crystal City, or Mark Center.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_service_location',
    'label' => 'Service Location',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'taxonomy_term-financial_services-field_directorate_services_descr'
  $field_instances['taxonomy_term-financial_services-field_directorate_services_descr'] = array(
    'bundle' => 'financial_services',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please enter up to two sentences that describe this service.  This information will be displayed in directorate or services information tab.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_directorate_services_descr',
    'label' => 'Directorate Services Description',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'taxonomy_term-financial_services-field_select_a_page_template'
  $field_instances['taxonomy_term-financial_services-field_select_a_page_template'] = array(
    'bundle' => 'financial_services',
    'default_value' => array(
      0 => array(
        'value' => 'program',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_select_a_page_template',
    'label' => 'Select a Page Template',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'taxonomy_term-financial_services-field_service_location'
  $field_instances['taxonomy_term-financial_services-field_service_location'] = array(
    'bundle' => 'financial_services',
    'default_value' => array(
      0 => array(
        'value' => 'Pentagon',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_service_location',
    'label' => 'Service Location',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'taxonomy_term-information_technology-field_directorate_services_descr'
  $field_instances['taxonomy_term-information_technology-field_directorate_services_descr'] = array(
    'bundle' => 'information_technology',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please enter up to two sentences that describe this service.  This information will be displayed in directorate or services information tab.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_directorate_services_descr',
    'label' => 'Directorate Services Description',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'taxonomy_term-information_technology-field_select_a_page_template'
  $field_instances['taxonomy_term-information_technology-field_select_a_page_template'] = array(
    'bundle' => 'information_technology',
    'default_value' => array(
      0 => array(
        'value' => 'program',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_select_a_page_template',
    'label' => 'Select a Page Template',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'taxonomy_term-information_technology-field_service_location'
  $field_instances['taxonomy_term-information_technology-field_service_location'] = array(
    'bundle' => 'information_technology',
    'default_value' => array(
      0 => array(
        'value' => 'Pentagon',
      ),
    ),
    'deleted' => 0,
    'description' => 'Location of this service:  Pentagon, Crystal City, or Mark Center.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_service_location',
    'label' => 'Service Location',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'taxonomy_term-people_services-field_directorate_services_descr'
  $field_instances['taxonomy_term-people_services-field_directorate_services_descr'] = array(
    'bundle' => 'people_services',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please enter up to two sentences that describe this service.  This information will be displayed in directorate or services information tab.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_directorate_services_descr',
    'label' => 'Directorate Services Description',
    'required' => 1,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'taxonomy_term-people_services-field_select_a_page_template'
  $field_instances['taxonomy_term-people_services-field_select_a_page_template'] = array(
    'bundle' => 'people_services',
    'default_value' => array(
      0 => array(
        'value' => 'program',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_select_a_page_template',
    'label' => 'Select a Page Template',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'taxonomy_term-people_services-field_service_location'
  $field_instances['taxonomy_term-people_services-field_service_location'] = array(
    'bundle' => 'people_services',
    'default_value' => array(
      0 => array(
        'value' => 'Pentagon',
      ),
    ),
    'deleted' => 0,
    'description' => 'Location of this service:  Pentagon, Crystal City, or Mark Center.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_service_location',
    'label' => 'Service Location',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'taxonomy_term-safety_security_and_privacy-field_directorate_services_descr'
  $field_instances['taxonomy_term-safety_security_and_privacy-field_directorate_services_descr'] = array(
    'bundle' => 'safety_security_and_privacy',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please enter up to two sentences that describe this service.  This information will be displayed in directorate or services information tab.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_directorate_services_descr',
    'label' => 'Directorate Services Description',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'taxonomy_term-safety_security_and_privacy-field_select_a_page_template'
  $field_instances['taxonomy_term-safety_security_and_privacy-field_select_a_page_template'] = array(
    'bundle' => 'safety_security_and_privacy',
    'default_value' => array(
      0 => array(
        'value' => 'program',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_select_a_page_template',
    'label' => 'Select a Page Template',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'taxonomy_term-safety_security_and_privacy-field_service_location'
  $field_instances['taxonomy_term-safety_security_and_privacy-field_service_location'] = array(
    'bundle' => 'safety_security_and_privacy',
    'default_value' => array(
      0 => array(
        'value' => 'Pentagon',
      ),
    ),
    'deleted' => 0,
    'description' => 'Location of this service:  Pentagon, Crystal City, or Mark Center.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_service_location',
    'label' => 'Service Location',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'taxonomy_term-services-field_image_icon'
  $field_instances['taxonomy_term-services-field_image_icon'] = array(
    'bundle' => 'services',
    'deleted' => 0,
    'description' => 'Icon for the Service Category',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_image_icon',
    'label' => 'Image Icon',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '40x40',
      'min_resolution' => '40x40',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'taxonomy_term-services-field_which_category'
  $field_instances['taxonomy_term-services-field_which_category'] = array(
    'bundle' => 'services',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Each Service vocabulary entry has a corresponding taxonomy term vocabulary outside of the Service list.  ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_which_category',
    'label' => 'Select the Service Vocab that relates to this Service',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'taxonomy_term-visitor_services-field_directorate_services_descr'
  $field_instances['taxonomy_term-visitor_services-field_directorate_services_descr'] = array(
    'bundle' => 'visitor_services',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please enter up to two sentences that describe this service.  This information will be displayed in directorate or services information tab.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_directorate_services_descr',
    'label' => 'Directorate Services Description',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'taxonomy_term-visitor_services-field_select_a_page_template'
  $field_instances['taxonomy_term-visitor_services-field_select_a_page_template'] = array(
    'bundle' => 'visitor_services',
    'default_value' => array(
      0 => array(
        'value' => 'program',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_select_a_page_template',
    'label' => 'Select a Page Template',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'taxonomy_term-visitor_services-field_service_location'
  $field_instances['taxonomy_term-visitor_services-field_service_location'] = array(
    'bundle' => 'visitor_services',
    'default_value' => array(
      0 => array(
        'value' => 'Pentagon',
      ),
    ),
    'deleted' => 0,
    'description' => 'Location of this service:  Pentagon, Crystal City, or Mark Center.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_service_location',
    'label' => 'Service Location',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('2nd Information');
  t('2nd POC Email');
  t('2nd POC Name');
  t('2nd POC Phone');
  t('2nd POC Phone - Alternate');
  t('Although this can be used in conjunction with tabs, generally a sub page has either tabs or text.');
  t('Associate with which sub-program landing page?');
  t('Contact information displayed in the left box.  Note - this will different for each different location:  MARK, PENTAGON, etc.');
  t('Description of the sub-page');
  t('Directorate Services Description');
  t('Each Service vocabulary entry has a corresponding taxonomy term vocabulary outside of the Service list.  ');
  t('Icon for the Service Category');
  t('Image Icon');
  t('Information');
  t('Is this a program or a detail page?');
  t('Location of this service:  Pentagon, Crystal City, or Mark Center.');
  t('POC Email');
  t('POC Name');
  t('POC Phone');
  t('POC Phone - Alternate');
  t('Please enter any related content links for this program or service.  You should enter one link per entry.');
  t('Please enter up to two sentences that describe this service.  This information will be displayed in directorate or services information tab.');
  t('Please indicate if this is a program/sub-program page, or a program details page.');
  t('Please indicate where this service is provided.  Default is "All."');
  t('Please select the template associate with this content.  NOTE:  You must enter the corresponding content into the proper CONTENT TYPE (program/sub-program detail).');
  t('Related Links');
  t('Select a Page Template');
  t('Select the SUB-PROGRAM LANDING PAGE term with which to associate the information in this node.');
  t('Select the Service Vocab that relates to this Service');
  t('Service Eligibility Icons');
  t('Service Location');
  t('Service Provider');
  t('Tabs');
  t('Text in lieu of tabs');
  t('This image will be displayed next to the service title.');
  t('This is displayed at the top of the page under the title.  Optional -- leave blank for nothing.');
  t('Which Program or Service?');
  t('Which program should contact information be drawn from? (uses initial POC, not 2nd POC)');
  t('Which services/agencies may use this program or service?');
  t('You may create up to seven tab groups for each sub-page.');
  t('You must associate this program landing page content with a taxonomy term (program).  Sub program details and menu options are handled under -service program sub page- content type, not here.');
  t('description');

  return $field_instances;
}
