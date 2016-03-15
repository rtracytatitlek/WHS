<?php
/**
 * @file
 * organization_directorate_og.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function organization_directorate_og_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'directorate_information';
  $view->description = 'Displayed at the bottom of the home page directorate summary (under work area)';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Directorate Information';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Directorate Information';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_class'] = 'view-info-grid-img';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_class'] = 'view-info-grid-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_class'] = 'view-info-grid-body';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '100',
  );
  /* Field: Content: Related Links */
  $handler->display->display_options['fields']['field_related_links']['id'] = 'field_related_links';
  $handler->display->display_options['fields']['field_related_links']['table'] = 'field_data_field_related_links';
  $handler->display->display_options['fields']['field_related_links']['field'] = 'field_related_links';
  $handler->display->display_options['fields']['field_related_links']['label'] = '';
  $handler->display->display_options['fields']['field_related_links']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_related_links']['alter']['text'] = '<a class="directorate_information_read_more" href="[field_related_links-url]">Read More</a>';
  $handler->display->display_options['fields']['field_related_links']['element_label_class'] = 'view-info-grid-link';
  $handler->display->display_options['fields']['field_related_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_related_links']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_related_links']['type'] = 'link_separate';
  $handler->display->display_options['fields']['field_related_links']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: With which Directorate is this content associated? (field_with_which_directorate_is_) */
  $handler->display->display_options['arguments']['field_with_which_directorate_is__nid']['id'] = 'field_with_which_directorate_is__nid';
  $handler->display->display_options['arguments']['field_with_which_directorate_is__nid']['table'] = 'field_data_field_with_which_directorate_is_';
  $handler->display->display_options['arguments']['field_with_which_directorate_is__nid']['field'] = 'field_with_which_directorate_is__nid';
  $handler->display->display_options['arguments']['field_with_which_directorate_is__nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_with_which_directorate_is__nid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_with_which_directorate_is__nid']['default_argument_options']['code'] = '$WhichDir="";
if (isset($_REQUEST[\'DID\'])){
  $WhichDir=$_REQUEST[\'DID\'];
}else{
  if (isset($_SESSION[\'directorate\'])) {$WhichDir=$_SESSION[\'directorate\'];}
}

if ($WhichDir=="") {$WhichDir=103;}

return $WhichDir;
';
  $handler->display->display_options['arguments']['field_with_which_directorate_is__nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_with_which_directorate_is__nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_with_which_directorate_is__nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'directorate_information' => 'directorate_information',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['directorate_information'] = $view;

  $view = new view();
  $view->name = 'odlp_title';
  $view->description = 'Organiztion-Directorate Landing Page Title';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Organization-Directorate Landing Page Title';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'ODLP Title';
  $handler->display->display_options['css_class'] = 'ODLP-title';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'organization_landing_page' => 'organization_landing_page',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['odlp_title'] = $view;

  $view = new view();
  $view->name = 'organization_directorate_landing_page_bottom_row';
  $view->description = 'This is the bottom row of boxes on the ODLP.  Called from the panel page.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Organization-Directorate Landing Page Bottom Row';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Bottom Right';
  $handler->display->display_options['css_class'] = 'ODLP-bottom-left';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_image_icon' => 'field_image_icon',
    'field_featured_services_link' => 'field_featured_services_link',
    'field_select_a_related_program' => 'field_select_a_related_program',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Bottom Left */
  $handler = $view->new_display('block', 'Bottom Left', 'bottom_left');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'ODLP-bottom-left';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Image Icon */
  $handler->display->display_options['fields']['field_image_icon']['id'] = 'field_image_icon';
  $handler->display->display_options['fields']['field_image_icon']['table'] = 'field_data_field_image_icon';
  $handler->display->display_options['fields']['field_image_icon']['field'] = 'field_image_icon';
  $handler->display->display_options['fields']['field_image_icon']['label'] = '';
  $handler->display->display_options['fields']['field_image_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_icon']['settings'] = array(
    'image_style' => 'icon_size',
    'image_link' => '',
  );
  /* Field: Content: Featured Services Link */
  $handler->display->display_options['fields']['field_featured_services_link']['id'] = 'field_featured_services_link';
  $handler->display->display_options['fields']['field_featured_services_link']['table'] = 'field_data_field_featured_services_link';
  $handler->display->display_options['fields']['field_featured_services_link']['field'] = 'field_featured_services_link';
  $handler->display->display_options['fields']['field_featured_services_link']['label'] = '';
  $handler->display->display_options['fields']['field_featured_services_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_featured_services_link']['element_label_colon'] = FALSE;
  /* Field: Content: Select a related program */
  $handler->display->display_options['fields']['field_select_a_related_program']['id'] = 'field_select_a_related_program';
  $handler->display->display_options['fields']['field_select_a_related_program']['table'] = 'field_data_field_select_a_related_program';
  $handler->display->display_options['fields']['field_select_a_related_program']['field'] = 'field_select_a_related_program';
  $handler->display->display_options['fields']['field_select_a_related_program']['label'] = '';
  $handler->display->display_options['fields']['field_select_a_related_program']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'organizational_directorate_featu' => 'organizational_directorate_featu',
  );

  /* Display: Bottom Middle */
  $handler = $view->new_display('block', 'Bottom Middle', 'bottom_middle');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'ODLP-bottom-middle';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['separator'] = '<br>';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Related Links */
  $handler->display->display_options['fields']['field_related_links']['id'] = 'field_related_links';
  $handler->display->display_options['fields']['field_related_links']['table'] = 'field_data_field_related_links';
  $handler->display->display_options['fields']['field_related_links']['field'] = 'field_related_links';
  $handler->display->display_options['fields']['field_related_links']['label'] = '';
  $handler->display->display_options['fields']['field_related_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_related_links']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_related_links']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_related_links']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_related_links']['multi_type'] = 'ul';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'organization_landing_page' => 'organization_landing_page',
  );

  /* Display: Bottom Right */
  $handler = $view->new_display('block', 'Bottom Right', 'bottom_right');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'ODLP-bottom-right';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_image_icon' => 'field_image_icon',
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Image Icon */
  $handler->display->display_options['fields']['field_image_icon']['id'] = 'field_image_icon';
  $handler->display->display_options['fields']['field_image_icon']['table'] = 'field_data_field_image_icon';
  $handler->display->display_options['fields']['field_image_icon']['field'] = 'field_image_icon';
  $handler->display->display_options['fields']['field_image_icon']['label'] = '';
  $handler->display->display_options['fields']['field_image_icon']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_icon']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span id="announcement-left">[field_image_icon]</span>
<div class="announcement-text">
  <div class="announcement-title">[title]</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'directorate_announcements' => 'directorate_announcements',
  );
  $export['organization_directorate_landing_page_bottom_row'] = $view;

  $view = new view();
  $view->name = 'organization_directorate_landing_page_director_name_title';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Organization Directorate Landing Page Director Name-Title';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Director Name-Title';
  $handler->display->display_options['css_class'] = 'default-director';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Director Name */
  $handler->display->display_options['fields']['field_director_name']['id'] = 'field_director_name';
  $handler->display->display_options['fields']['field_director_name']['table'] = 'field_data_field_director_name';
  $handler->display->display_options['fields']['field_director_name']['field'] = 'field_director_name';
  $handler->display->display_options['fields']['field_director_name']['label'] = '';
  $handler->display->display_options['fields']['field_director_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_director_name']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_director_name']['element_wrapper_class'] = 'director-name';
  /* Field: Content: Director Title */
  $handler->display->display_options['fields']['field_director_title']['id'] = 'field_director_title';
  $handler->display->display_options['fields']['field_director_title']['table'] = 'field_data_field_director_title';
  $handler->display->display_options['fields']['field_director_title']['field'] = 'field_director_title';
  $handler->display->display_options['fields']['field_director_title']['label'] = '';
  $handler->display->display_options['fields']['field_director_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_director_title']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_director_title']['element_wrapper_class'] = 'director-title';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: With which Directorate is this content associated? (field_with_which_directorate_is_) */
  $handler->display->display_options['arguments']['field_with_which_directorate_is__nid']['id'] = 'field_with_which_directorate_is__nid';
  $handler->display->display_options['arguments']['field_with_which_directorate_is__nid']['table'] = 'field_data_field_with_which_directorate_is_';
  $handler->display->display_options['arguments']['field_with_which_directorate_is__nid']['field'] = 'field_with_which_directorate_is__nid';
  $handler->display->display_options['arguments']['field_with_which_directorate_is__nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_with_which_directorate_is__nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_with_which_directorate_is__nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_with_which_directorate_is__nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_with_which_directorate_is__nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'organization_landing_page' => 'organization_landing_page',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['organization_directorate_landing_page_director_name_title'] = $view;

  $view = new view();
  $view->name = 'organization_directorate_top_row';
  $view->description = 'This is the top row boxes on the Organization-Directorate landing page';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Organization-Directorate Top Row';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Top Right';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Top Left Text Box */
  $handler->display->display_options['fields']['field_top_left_text_box']['id'] = 'field_top_left_text_box';
  $handler->display->display_options['fields']['field_top_left_text_box']['table'] = 'field_data_field_top_left_text_box';
  $handler->display->display_options['fields']['field_top_left_text_box']['field'] = 'field_top_left_text_box';
  $handler->display->display_options['fields']['field_top_left_text_box']['label'] = '';
  $handler->display->display_options['fields']['field_top_left_text_box']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_top_left_text_box']['element_class'] = 'ODLP-top-left';
  $handler->display->display_options['fields']['field_top_left_text_box']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: With which Directorate is this content associated? (field_with_which_directorate_is_) */
  $handler->display->display_options['arguments']['field_with_which_directorate_is__nid']['id'] = 'field_with_which_directorate_is__nid';
  $handler->display->display_options['arguments']['field_with_which_directorate_is__nid']['table'] = 'field_data_field_with_which_directorate_is_';
  $handler->display->display_options['arguments']['field_with_which_directorate_is__nid']['field'] = 'field_with_which_directorate_is__nid';
  $handler->display->display_options['arguments']['field_with_which_directorate_is__nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_with_which_directorate_is__nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_with_which_directorate_is__nid']['default_argument_options']['argument'] = '25';
  $handler->display->display_options['arguments']['field_with_which_directorate_is__nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_with_which_directorate_is__nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_with_which_directorate_is__nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'organization_landing_page' => 'organization_landing_page',
  );

  /* Display: Group Top-Left */
  $handler = $view->new_display('block', 'Group Top-Left', 'top_left');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Group Top Left';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'ODLP-top-left';

  /* Display: Group Top-Middle */
  $handler = $view->new_display('block', 'Group Top-Middle', 'top_middle');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Group Top Middle';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'ODLP-top-middle';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Top Middle Text Box */
  $handler->display->display_options['fields']['field_top_middle_text_box']['id'] = 'field_top_middle_text_box';
  $handler->display->display_options['fields']['field_top_middle_text_box']['table'] = 'field_data_field_top_middle_text_box';
  $handler->display->display_options['fields']['field_top_middle_text_box']['field'] = 'field_top_middle_text_box';
  $handler->display->display_options['fields']['field_top_middle_text_box']['label'] = '';
  $handler->display->display_options['fields']['field_top_middle_text_box']['element_label_colon'] = FALSE;

  /* Display: Group-Top-Right */
  $handler = $view->new_display('block', 'Group-Top-Right', 'top_right');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'ODLP-top-right';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Top Right Box */
  $handler->display->display_options['fields']['field_top_right_box']['id'] = 'field_top_right_box';
  $handler->display->display_options['fields']['field_top_right_box']['table'] = 'field_data_field_top_right_box';
  $handler->display->display_options['fields']['field_top_right_box']['field'] = 'field_top_right_box';
  $handler->display->display_options['fields']['field_top_right_box']['label'] = '';
  $handler->display->display_options['fields']['field_top_right_box']['element_label_colon'] = FALSE;

  /* Display: Employee Top-Left */
  $handler = $view->new_display('block', 'Employee Top-Left', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Group Top Left';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'ODLP-top-left';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Top left employee */
  $handler->display->display_options['fields']['field_top_left_employee']['id'] = 'field_top_left_employee';
  $handler->display->display_options['fields']['field_top_left_employee']['table'] = 'field_data_field_top_left_employee';
  $handler->display->display_options['fields']['field_top_left_employee']['field'] = 'field_top_left_employee';
  $handler->display->display_options['fields']['field_top_left_employee']['label'] = '';
  $handler->display->display_options['fields']['field_top_left_employee']['element_label_colon'] = FALSE;

  /* Display: Employee Top-Middle */
  $handler = $view->new_display('block', 'Employee Top-Middle', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Group Top Middle';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'ODLP-top-middle';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Top middle employee */
  $handler->display->display_options['fields']['field_top_middle_employee']['id'] = 'field_top_middle_employee';
  $handler->display->display_options['fields']['field_top_middle_employee']['table'] = 'field_data_field_top_middle_employee';
  $handler->display->display_options['fields']['field_top_middle_employee']['field'] = 'field_top_middle_employee';
  $handler->display->display_options['fields']['field_top_middle_employee']['label'] = '';
  $handler->display->display_options['fields']['field_top_middle_employee']['element_label_colon'] = FALSE;

  /* Display: Employee-Top-Right */
  $handler = $view->new_display('block', 'Employee-Top-Right', 'block_3');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'ODLP-top-right';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Top right employee */
  $handler->display->display_options['fields']['field_top_right_employee']['id'] = 'field_top_right_employee';
  $handler->display->display_options['fields']['field_top_right_employee']['table'] = 'field_data_field_top_right_employee';
  $handler->display->display_options['fields']['field_top_right_employee']['field'] = 'field_top_right_employee';
  $handler->display->display_options['fields']['field_top_right_employee']['label'] = '';
  $handler->display->display_options['fields']['field_top_right_employee']['element_label_colon'] = FALSE;

  /* Display: Customer Top-Left */
  $handler = $view->new_display('block', 'Customer Top-Left', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Group Top Left';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'ODLP-top-left';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Top left custmer */
  $handler->display->display_options['fields']['field_top_left_custmer']['id'] = 'field_top_left_custmer';
  $handler->display->display_options['fields']['field_top_left_custmer']['table'] = 'field_data_field_top_left_custmer';
  $handler->display->display_options['fields']['field_top_left_custmer']['field'] = 'field_top_left_custmer';
  $handler->display->display_options['fields']['field_top_left_custmer']['label'] = '';
  $handler->display->display_options['fields']['field_top_left_custmer']['element_label_colon'] = FALSE;

  /* Display: Customer Top-Middle */
  $handler = $view->new_display('block', 'Customer Top-Middle', 'block_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Group Top Middle';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'ODLP-top-middle';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Top middle custmer */
  $handler->display->display_options['fields']['field_top_middle_custmer']['id'] = 'field_top_middle_custmer';
  $handler->display->display_options['fields']['field_top_middle_custmer']['table'] = 'field_data_field_top_middle_custmer';
  $handler->display->display_options['fields']['field_top_middle_custmer']['field'] = 'field_top_middle_custmer';
  $handler->display->display_options['fields']['field_top_middle_custmer']['label'] = '';
  $handler->display->display_options['fields']['field_top_middle_custmer']['element_label_colon'] = FALSE;

  /* Display: Group-Top-Right */
  $handler = $view->new_display('block', 'Group-Top-Right', 'block_6');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'ODLP-top-right';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Top right customer */
  $handler->display->display_options['fields']['field_top_right_customer']['id'] = 'field_top_right_customer';
  $handler->display->display_options['fields']['field_top_right_customer']['table'] = 'field_data_field_top_right_customer';
  $handler->display->display_options['fields']['field_top_right_customer']['field'] = 'field_top_right_customer';
  $handler->display->display_options['fields']['field_top_right_customer']['label'] = '';
  $handler->display->display_options['fields']['field_top_right_customer']['element_label_colon'] = FALSE;
  $export['organization_directorate_top_row'] = $view;

  $view = new view();
  $view->name = 'organization_list';
  $view->description = 'This is a list of the organic groups/directorates.  Used by TEMPLATE.PHP to pull the drop down options under ORGANIZATION.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Organization List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Organization List';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'organizations' => 'organizations',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['organization_list'] = $view;

  return $export;
}
