<?php
/**
 * @file
 * home_page.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function home_page_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'announcement_view_individual_';
  $view->description = 'Display an individual selected announcement on the center of the page';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Announcement View (individual)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'WHS-Service-Main';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['code'] = 'return $_REQUEST[\'announcement\'];';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['announcement_view_individual_'] = $view;

  $view = new view();
  $view->name = 'announcements_whs_dir';
  $view->description = 'Combination of all the types of announcement for display on the home page.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Announcements - WHS&Dir';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Announcements - WHS&Dir';
  $handler->display->display_options['css_class'] = 'announcements';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'jcarousel';
  $handler->display->display_options['style_options']['wrap'] = 'circular';
  $handler->display->display_options['style_options']['skin'] = 'tango';
  $handler->display->display_options['style_options']['visible'] = '2';
  $handler->display->display_options['style_options']['auto'] = '0';
  $handler->display->display_options['style_options']['autoPause'] = 1;
  $handler->display->display_options['style_options']['easing'] = '';
  $handler->display->display_options['style_options']['vertical'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Field: Image Icon */
  $handler->display->display_options['fields']['field_image_icon']['id'] = 'field_image_icon';
  $handler->display->display_options['fields']['field_image_icon']['table'] = 'field_data_field_image_icon';
  $handler->display->display_options['fields']['field_image_icon']['field'] = 'field_image_icon';
  $handler->display->display_options['fields']['field_image_icon']['label'] = '';
  $handler->display->display_options['fields']['field_image_icon']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_icon']['settings'] = array(
    'image_style' => 'announcement_image_icon',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="?announcement=[nid]">[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '100',
  );
  /* Field: Display the title, body, and image in a formatting */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Display the title, body, and image in a formatting';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span id="announcement-left">[field_image_icon]</span>
<div class="announcement-text">
  <div class="announcement-title">[title]</div>
  <div class="announcement-desc">[body]</div>
</div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'whs_announcements' => 'whs_announcements',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['announcements_whs_dir'] = $view;

  $view = new view();
  $view->name = 'commuter_content';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Commuter Node Panel Display (node template)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Commuter Content';
  $handler->display->display_options['css_class'] = 'commuter-node';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_image_icon' => 'field_image_icon',
    'title' => 'title',
    'body' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_image_icon' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Field: Image Icon */
  $handler->display->display_options['fields']['field_image_icon']['id'] = 'field_image_icon';
  $handler->display->display_options['fields']['field_image_icon']['table'] = 'field_data_field_image_icon';
  $handler->display->display_options['fields']['field_image_icon']['field'] = 'field_image_icon';
  $handler->display->display_options['fields']['field_image_icon']['label'] = '';
  $handler->display->display_options['fields']['field_image_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_icon']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'commuter_content' => 'commuter_content',
  );

  /* Display: Commuter Node Display */
  $handler = $view->new_display('block', 'Commuter Node Display', 'block');
  $export['commuter_content'] = $view;

  $view = new view();
  $view->name = 'commuter_options';
  $view->description = 'This view dipslays the commuter header and icons for the QUICKTABS (commuter)';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Commuter Options per Location (Quicktabs)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Commuter Options';
  $handler->display->display_options['css_class'] = 'commuter-options-grid';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<div class="commuter_title">Transportation Options</div>

 <span class="commuter_description">
Visiting, working in, and traveling between the Pentagon, Mark Center, ad affiliated offices is made convenient through a number of public and WHS-administered transportation options for government employees, contractors, and eligible visitors.  Select the appropriate category below for information on driving, public-transportation, and commuter options.
</span>';
  /* Field: Field: Image Icon */
  $handler->display->display_options['fields']['field_image_icon']['id'] = 'field_image_icon';
  $handler->display->display_options['fields']['field_image_icon']['table'] = 'field_data_field_image_icon';
  $handler->display->display_options['fields']['field_image_icon']['field'] = 'field_image_icon';
  $handler->display->display_options['fields']['field_image_icon']['label'] = '';
  $handler->display->display_options['fields']['field_image_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_icon']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
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
  /* Contextual filter: Field: Service Location (field_service_location) */
  $handler->display->display_options['arguments']['field_service_location_value']['id'] = 'field_service_location_value';
  $handler->display->display_options['arguments']['field_service_location_value']['table'] = 'field_data_field_service_location';
  $handler->display->display_options['arguments']['field_service_location_value']['field'] = 'field_service_location_value';
  $handler->display->display_options['arguments']['field_service_location_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_service_location_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_service_location_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_service_location_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_service_location_value']['limit'] = '0';
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
    'commuter_content' => 'commuter_content',
  );

  /* Display: Commuter Options by Location */
  $handler = $view->new_display('block', 'Commuter Options by Location', 'block');
  $export['commuter_options'] = $view;

  $view = new view();
  $view->name = 'commuter_types';
  $view->description = 'Display icon and label for different commuter options on the commuter landing page.';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Commuter Types';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Commuter Types';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '500';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  /* Field: Field: Image Icon */
  $handler->display->display_options['fields']['field_image_icon']['id'] = 'field_image_icon';
  $handler->display->display_options['fields']['field_image_icon']['table'] = 'field_data_field_image_icon';
  $handler->display->display_options['fields']['field_image_icon']['field'] = 'field_image_icon';
  $handler->display->display_options['fields']['field_image_icon']['label'] = '';
  $handler->display->display_options['fields']['field_image_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_icon']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Filter criterion: Taxonomy term: Vocabulary */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['value'] = array(
    7 => '7',
  );
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'parent';
  $handler->display->display_options['filters']['name']['operator'] = 'empty';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['commuter_types'] = $view;

  $view = new view();
  $view->name = 'display_favorites';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Display Favorites';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Display Favorites';
  $handler->display->display_options['css_class'] = 'display_favorites_table favorite-list';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'table';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<div class="favorites_no_result">There are no favorites saved.</div>';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Field: Title */
  $handler->display->display_options['fields']['field_title']['id'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_title']['alter']['text'] = '<a href="[title_1]">[field_title]</a>';
  $handler->display->display_options['fields']['field_title']['alter']['absolute'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Path';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[title]';
  $handler->display->display_options['fields']['title']['alter']['link_class'] = 'favorite_view_link';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = 'Delete Favorite';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
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
    'favorites' => 'favorites',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['display_favorites'] = $view;

  $view = new view();
  $view->name = 'emergency_contacts';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Emergency Contacts';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Emergency Contacts';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: MEDICAL */
  $handler->display->display_options['fields']['field_medical']['id'] = 'field_medical';
  $handler->display->display_options['fields']['field_medical']['table'] = 'field_data_field_medical';
  $handler->display->display_options['fields']['field_medical']['field'] = 'field_medical';
  $handler->display->display_options['fields']['field_medical']['element_label_colon'] = FALSE;
  /* Field: Content: FIRE */
  $handler->display->display_options['fields']['field_fire']['id'] = 'field_fire';
  $handler->display->display_options['fields']['field_fire']['table'] = 'field_data_field_fire';
  $handler->display->display_options['fields']['field_fire']['field'] = 'field_fire';
  $handler->display->display_options['fields']['field_fire']['element_label_colon'] = FALSE;
  /* Field: Content: POLICE/SECURITY */
  $handler->display->display_options['fields']['field_police_security']['id'] = 'field_police_security';
  $handler->display->display_options['fields']['field_police_security']['table'] = 'field_data_field_police_security';
  $handler->display->display_options['fields']['field_police_security']['field'] = 'field_police_security';
  $handler->display->display_options['fields']['field_police_security']['element_label_colon'] = FALSE;
  /* Field: Content: BUILDING EMERGENCIES */
  $handler->display->display_options['fields']['field_building_emergencies']['id'] = 'field_building_emergencies';
  $handler->display->display_options['fields']['field_building_emergencies']['table'] = 'field_data_field_building_emergencies';
  $handler->display->display_options['fields']['field_building_emergencies']['field'] = 'field_building_emergencies';
  $handler->display->display_options['fields']['field_building_emergencies']['element_label_colon'] = FALSE;
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
    'emergency_contact' => 'emergency_contact',
  );

  /* Display: Emergency Contacts */
  $handler = $view->new_display('block', 'Emergency Contacts', 'block');
  $export['emergency_contacts'] = $view;

  $view = new view();
  $view->name = 'featured_tools';
  $view->description = 'This is the bottom row of boxes on the ODLP.  Called from the panel page.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Directorate Tools';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Top Ten Resources';
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
  /* Contextual filter: Content: With which Directorate is this content associated? (field_with_which_directorate_is_) */
  $handler->display->display_options['arguments']['field_with_which_directorate_is__nid']['id'] = 'field_with_which_directorate_is__nid';
  $handler->display->display_options['arguments']['field_with_which_directorate_is__nid']['table'] = 'field_data_field_with_which_directorate_is_';
  $handler->display->display_options['arguments']['field_with_which_directorate_is__nid']['field'] = 'field_with_which_directorate_is__nid';
  $handler->display->display_options['arguments']['field_with_which_directorate_is__nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_with_which_directorate_is__nid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_with_which_directorate_is__nid']['default_argument_options']['code'] = 'if (isset($_REQUEST[\'DID\'])) {
  return $_REQUEST[\'DID\'];
}else{
  return $_SESSION[\'directorate\'];
}';
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

  /* Display: Directorate Tools */
  $handler = $view->new_display('block', 'Directorate Tools', 'bottom_left');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'ODLP-bottom-left';
  $handler->display->display_options['display_description'] = 'On the home page';
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
  $export['featured_tools'] = $view;

  $view = new view();
  $view->name = 'whs_announcement_header';
  $view->description = 'This is the label and count at the top of the WHS announcement section';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'WHS Announcement header';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'WHS Announcement header';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['label'] = 'Header for the announcement list';
  $handler->display->display_options['header']['php']['php_output'] = '<img id="gray-box" alt="grey-box" src="/sites/all/themes/WHS/images/notification_center_2.png" style="margin-top:-5px; margin-left;-5px;">
<img id="calendar" alt="calendar icon" src="/sites/all/themes/WHS/images/Icons/event.png">
<h2>Announcements</h2>.
<div id="number_of_events">
<?php
  $view=views_get_current_view();
  //$view->execute;
  $count=count($view->result);
  echo $count;
?>
';
  /* Footer: Global: PHP */
  $handler->display->display_options['footer']['php']['id'] = 'php';
  $handler->display->display_options['footer']['php']['table'] = 'views';
  $handler->display->display_options['footer']['php']['field'] = 'php';
  $handler->display->display_options['footer']['php']['label'] = 'Display announcement header and count';
  $handler->display->display_options['footer']['php']['php_output'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'whs_announcements' => 'whs_announcements',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'whs-announcement-header';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['whs_announcement_header'] = $view;

  $view = new view();
  $view->name = 'whs_announcements_non_sticky';
  $view->description = 'All WHS home page announcements that are no persistent';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'WHS Announcements Non-Sticky';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'WHS Announcements Non-Sticky';
  $handler->display->display_options['css_class'] = 'whs-announcement-non-sticky';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Field: Image Icon */
  $handler->display->display_options['fields']['field_image_icon']['id'] = 'field_image_icon';
  $handler->display->display_options['fields']['field_image_icon']['table'] = 'field_data_field_image_icon';
  $handler->display->display_options['fields']['field_image_icon']['field'] = 'field_image_icon';
  $handler->display->display_options['fields']['field_image_icon']['label'] = '';
  $handler->display->display_options['fields']['field_image_icon']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_icon']['settings'] = array(
    'image_style' => 'icon_size',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '125';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  /* Field: Field: Groups audience */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['label'] = '';
  $handler->display->display_options['fields']['og_group_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['og_group_ref']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['og_group_ref']['alter']['text'] = '<div class="announcement_og_link">[og_group_ref]</div>';
  $handler->display->display_options['fields']['og_group_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['og_group_ref']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['og_group_ref']['delta_offset'] = '0';
  /* Field: Combined output of all fields, formatted */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Combined output of all fields, formatted';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span id="announcement-left">[field_image_icon]</span>
<div class="announcement-text">
  <div class="announcement-title">[og_group_ref][title]</div>
  <div class="announcement-desc">[body]</div>
</div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Sticky (field_sticky) */
  $handler->display->display_options['filters']['field_sticky_value']['id'] = 'field_sticky_value';
  $handler->display->display_options['filters']['field_sticky_value']['table'] = 'field_data_field_sticky';
  $handler->display->display_options['filters']['field_sticky_value']['field'] = 'field_sticky_value';
  $handler->display->display_options['filters']['field_sticky_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_sticky_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_sticky_value']['group'] = 1;
  /* Filter criterion: Content: Activation Date (field_activation_date) */
  $handler->display->display_options['filters']['field_activation_date_value']['id'] = 'field_activation_date_value';
  $handler->display->display_options['filters']['field_activation_date_value']['table'] = 'field_data_field_activation_date';
  $handler->display->display_options['filters']['field_activation_date_value']['field'] = 'field_activation_date_value';
  $handler->display->display_options['filters']['field_activation_date_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_activation_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_activation_date_value']['default_date'] = 'now';
  /* Filter criterion: Content: Expiration Date (field_expiration_date) */
  $handler->display->display_options['filters']['field_expiration_date_value']['id'] = 'field_expiration_date_value';
  $handler->display->display_options['filters']['field_expiration_date_value']['table'] = 'field_data_field_expiration_date';
  $handler->display->display_options['filters']['field_expiration_date_value']['field'] = 'field_expiration_date_value';
  $handler->display->display_options['filters']['field_expiration_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_expiration_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_expiration_date_value']['default_date'] = 'now';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'og_membership_related_node';
  $handler->display->display_options['filters']['type']['value'] = array(
    'directorate_announcements' => 'directorate_announcements',
  );
  $handler->display->display_options['filters']['type']['group'] = 2;
  /* Filter criterion: Content: Open to All (field_open_to_all) */
  $handler->display->display_options['filters']['field_open_to_all_value']['id'] = 'field_open_to_all_value';
  $handler->display->display_options['filters']['field_open_to_all_value']['table'] = 'field_data_field_open_to_all';
  $handler->display->display_options['filters']['field_open_to_all_value']['field'] = 'field_open_to_all_value';
  $handler->display->display_options['filters']['field_open_to_all_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_open_to_all_value']['value'] = array(
    'Closed' => 'Closed',
  );
  $handler->display->display_options['filters']['field_open_to_all_value']['group'] = 2;

  /* Display: Full List */
  $handler = $view->new_display('block', 'Full List', 'block');
  $handler->display->display_options['display_description'] = 'Used on the announcement page';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_image_icon' => 'title',
    'title' => 'title',
    'body' => 'body',
    'og_group_ref' => 'og_group_ref',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_image_icon' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'og_group_ref' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Expiration Date */
  $handler->display->display_options['fields']['field_expiration_date']['id'] = 'field_expiration_date';
  $handler->display->display_options['fields']['field_expiration_date']['table'] = 'field_data_field_expiration_date';
  $handler->display->display_options['fields']['field_expiration_date']['field'] = 'field_expiration_date';
  $handler->display->display_options['fields']['field_expiration_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Field: Image Icon */
  $handler->display->display_options['fields']['field_image_icon']['id'] = 'field_image_icon';
  $handler->display->display_options['fields']['field_image_icon']['table'] = 'field_data_field_image_icon';
  $handler->display->display_options['fields']['field_image_icon']['field'] = 'field_image_icon';
  $handler->display->display_options['fields']['field_image_icon']['label'] = '';
  $handler->display->display_options['fields']['field_image_icon']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_icon']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image_icon']['alter']['text'] = '<span id="announcement-left">[field_image_icon]</span>';
  $handler->display->display_options['fields']['field_image_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_icon']['settings'] = array(
    'image_style' => 'icon_size',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Subject';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<span id="announcement-left">[field_image_icon]</span><span class="full-announcement-title">[title]</div>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Description';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '250';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  /* Field: Combined output of all fields, formatted */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Combined output of all fields, formatted';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span id="announcement-left">[field_image_icon]</span>
<div class="announcement-text">
  <div class="announcement-title">[title]</div>
  <div class="announcement-desc">[body]</div>
</div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;

  /* Display: Front Page */
  $handler = $view->new_display('block', 'Front Page', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_image_icon' => 'field_image_icon',
    'title' => 'title',
    'body' => 'body',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['whs_announcements_non_sticky'] = $view;

  $view = new view();
  $view->name = 'whs_announcements_sticky';
  $view->description = 'This will always show the top 4 "sticky" announcements on the home page.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'WHS Announcements - Sticky';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'WHS Announcements - Sticky';
  $handler->display->display_options['css_class'] = 'whs-announcement-sticky';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_image_icon' => 'field_image_icon',
    'title' => 'title',
  );
  /* Field: Field: Image Icon */
  $handler->display->display_options['fields']['field_image_icon']['id'] = 'field_image_icon';
  $handler->display->display_options['fields']['field_image_icon']['table'] = 'field_data_field_image_icon';
  $handler->display->display_options['fields']['field_image_icon']['field'] = 'field_image_icon';
  $handler->display->display_options['fields']['field_image_icon']['label'] = '';
  $handler->display->display_options['fields']['field_image_icon']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_icon']['settings'] = array(
    'image_style' => 'icon_size',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '125';
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = '[Read More]';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '150',
  );
  /* Field: Display all fields combined. */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Display all fields combined.';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span id="announcement-left">[field_image_icon]</span>
<div class="announcement-text">
  <div class="announcement-title">[title]</div>
  <div class="announcement-desc">[body]</div>
</div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Expiration Date */
  $handler->display->display_options['fields']['field_expiration_date']['id'] = 'field_expiration_date';
  $handler->display->display_options['fields']['field_expiration_date']['table'] = 'field_data_field_expiration_date';
  $handler->display->display_options['fields']['field_expiration_date']['field'] = 'field_expiration_date';
  $handler->display->display_options['fields']['field_expiration_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_expiration_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'whs_announcements' => 'whs_announcements',
  );
  /* Filter criterion: Content: Sticky (field_sticky) */
  $handler->display->display_options['filters']['field_sticky_value']['id'] = 'field_sticky_value';
  $handler->display->display_options['filters']['field_sticky_value']['table'] = 'field_data_field_sticky';
  $handler->display->display_options['filters']['field_sticky_value']['field'] = 'field_sticky_value';
  $handler->display->display_options['filters']['field_sticky_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Expiration Date (field_expiration_date) */
  $handler->display->display_options['filters']['field_expiration_date_value']['id'] = 'field_expiration_date_value';
  $handler->display->display_options['filters']['field_expiration_date_value']['table'] = 'field_data_field_expiration_date';
  $handler->display->display_options['filters']['field_expiration_date_value']['field'] = 'field_expiration_date_value';
  $handler->display->display_options['filters']['field_expiration_date_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_expiration_date_value']['granularity'] = 'hour';
  $handler->display->display_options['filters']['field_expiration_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_expiration_date_value']['default_date'] = 'now';
  /* Filter criterion: Content: Activation Date (field_activation_date) */
  $handler->display->display_options['filters']['field_activation_date_value']['id'] = 'field_activation_date_value';
  $handler->display->display_options['filters']['field_activation_date_value']['table'] = 'field_data_field_activation_date';
  $handler->display->display_options['filters']['field_activation_date_value']['field'] = 'field_activation_date_value';
  $handler->display->display_options['filters']['field_activation_date_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_activation_date_value']['granularity'] = 'hour';
  $handler->display->display_options['filters']['field_activation_date_value']['default_date'] = 'now';

  /* Display: Front Page */
  $handler = $view->new_display('block', 'Front Page', 'block');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Field: Image Icon */
  $handler->display->display_options['fields']['field_image_icon']['id'] = 'field_image_icon';
  $handler->display->display_options['fields']['field_image_icon']['table'] = 'field_data_field_image_icon';
  $handler->display->display_options['fields']['field_image_icon']['field'] = 'field_image_icon';
  $handler->display->display_options['fields']['field_image_icon']['label'] = '';
  $handler->display->display_options['fields']['field_image_icon']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_icon']['settings'] = array(
    'image_style' => 'icon_size',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="?announcement=[nid]">[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '125';
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = '[Read More]';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '150',
  );
  /* Field: Display all fields combined. */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Display all fields combined.';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span id="announcement-left">[field_image_icon]</span>
<div class="announcement-text">
  <div class="announcement-title">[title]</div>
  <div class="announcement-desc">[body]</div>
</div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;

  /* Display: Announcement Page Full List */
  $handler = $view->new_display('block', 'Announcement Page Full List', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_image_icon' => 'title',
    'title' => 'title',
    'body' => 'body',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_image_icon' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Expiration Date */
  $handler->display->display_options['fields']['field_expiration_date']['id'] = 'field_expiration_date';
  $handler->display->display_options['fields']['field_expiration_date']['table'] = 'field_data_field_expiration_date';
  $handler->display->display_options['fields']['field_expiration_date']['field'] = 'field_expiration_date';
  $handler->display->display_options['fields']['field_expiration_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_expiration_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Field: Image Icon */
  $handler->display->display_options['fields']['field_image_icon']['id'] = 'field_image_icon';
  $handler->display->display_options['fields']['field_image_icon']['table'] = 'field_data_field_image_icon';
  $handler->display->display_options['fields']['field_image_icon']['field'] = 'field_image_icon';
  $handler->display->display_options['fields']['field_image_icon']['label'] = '';
  $handler->display->display_options['fields']['field_image_icon']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_icon']['settings'] = array(
    'image_style' => 'icon_size',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Subject';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<span id="announcement-left">[field_image_icon]</span> <span class="full-announcement-title">[title]</div>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Description';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '125';
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = '[Read More]';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '150',
  );
  /* Field: Display all fields combined. */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Display all fields combined.';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span id="announcement-left">[field_image_icon]</span>
<div class="announcement-text">
  <div class="announcement-title">[title]</div>
  <div class="announcement-desc">[body]</div>
</div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $export['whs_announcements_sticky'] = $view;

  $view = new view();
  $view->name = 'whs_contacts';
  $view->description = 'Display the contact information for the site -- draws from the WHS Contact content type.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'WHS Contacts';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'WHS Contacts';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'whs_contact_page' => 'whs_contact_page',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['whs_contacts'] = $view;

  $view = new view();
  $view->name = 'whs_main_page_alert';
  $view->description = 'This alert is presented on the home page.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'WHS Main Page Alert';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'alert-bar';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'views_accordion';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['collapsible'] = 1;
  $handler->display->display_options['style_options']['row-start-open'] = 'none';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_alert_image' => 'field_alert_image',
    'body' => 'body',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Alert Image */
  $handler->display->display_options['fields']['field_alert_image']['id'] = 'field_alert_image';
  $handler->display->display_options['fields']['field_alert_image']['table'] = 'field_data_field_alert_image';
  $handler->display->display_options['fields']['field_alert_image']['field'] = 'field_alert_image';
  $handler->display->display_options['fields']['field_alert_image']['label'] = '';
  $handler->display->display_options['fields']['field_alert_image']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_alert_image']['element_class'] = 'WHS-Alert-Image';
  $handler->display->display_options['fields']['field_alert_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_alert_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_alert_image']['settings'] = array(
    'image_style' => 'alert_image',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = 'span';
  $handler->display->display_options['fields']['body']['element_class'] = 'WHS-Alert-Text';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'whs_alert' => 'whs_alert',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['whs_main_page_alert'] = $view;

  $view = new view();
  $view->name = 'whs_service_grid_how_page';
  $view->description = 'List of services and icons in grid format displayed on the home page.  Built from taxonomy.';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'WHS Service Grid - Main Page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'WHS Service Grid - home page';
  $handler->display->display_options['css_class'] = 'WHS-Service-Main';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Select the Service Vocab that relates to this Service */
  $handler->display->display_options['fields']['field_which_category']['id'] = 'field_which_category';
  $handler->display->display_options['fields']['field_which_category']['table'] = 'field_data_field_which_category';
  $handler->display->display_options['fields']['field_which_category']['field'] = 'field_which_category';
  $handler->display->display_options['fields']['field_which_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_which_category']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_which_category']['settings'] = array(
    'link' => 0,
  );
  /* Field: Field: Image Icon */
  $handler->display->display_options['fields']['field_image_icon']['id'] = 'field_image_icon';
  $handler->display->display_options['fields']['field_image_icon']['table'] = 'field_data_field_image_icon';
  $handler->display->display_options['fields']['field_image_icon']['field'] = 'field_image_icon';
  $handler->display->display_options['fields']['field_image_icon']['label'] = '';
  $handler->display->display_options['fields']['field_image_icon']['alter']['text'] = '<span class="vocabulary_image">
  <a href="?vid=[field_which_category]&qt-whs_home_page_service_table=2#working-area">[field_image_icon]</a>
</span>';
  $handler->display->display_options['fields']['field_image_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_icon']['settings'] = array(
    'image_style' => 'homepage_service_icon',
    'image_link' => 'content',
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['text'] = '<span class="vocabulary_name">
  <a href="?vid=[field_which_category]&qt-whs_home_page_service_table=2">[name]</a>
</span>';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Filter criterion: Taxonomy term: Parent term */
  $handler->display->display_options['filters']['parent']['id'] = 'parent';
  $handler->display->display_options['filters']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['filters']['parent']['field'] = 'parent';
  /* Filter criterion: Taxonomy term: Vocabulary */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['value'] = array(
    2 => '2',
  );

  /* Display: Home Page Block - Service Grid */
  $handler = $view->new_display('block', 'Home Page Block - Service Grid', 'block');
  $export['whs_service_grid_how_page'] = $view;

  return $export;
}
