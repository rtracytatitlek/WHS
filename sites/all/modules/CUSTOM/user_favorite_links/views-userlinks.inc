$view = new view();
$view->name = 'user_favorite_links';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'User Favorite Links';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'User Favorite Links';
$handler->display->display_options['css_class'] = 'user_favorite_link';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'role';
$handler->display->display_options['access']['role'] = array(
  2 => '2',
);
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['distinct'] = TRUE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['row_class'] = 'user_favorite_links';
$handler->display->display_options['style_options']['columns'] = array(
  'field_link' => 'field_link',
  'delete_node' => 'delete_node',
  'edit_node' => 'edit_node',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'field_link' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'delete_node' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'edit_node' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
/* Footer: Global: Text area */
$handler->display->display_options['footer']['area']['id'] = 'area';
$handler->display->display_options['footer']['area']['table'] = 'views';
$handler->display->display_options['footer']['area']['field'] = 'area';
$handler->display->display_options['footer']['area']['content'] = '<a class="newlink  newwindow linkbutton" href=http://whs.dev/node/add/user-favorite-links>Add New Links</a> <a class="addthislink  newwindow linkbutton" href=http://whs.dev/node/add/user-favorite-links?add=this&url=<?php echo urlencode($_SERVER["SERVER_NAME"] . $_SERVER[\'REQUEST_URI\']);?> >Add This Link</a> <a class="allfavoritelinks linkbutton" href=user/favorite>View All Links</a> <a class="refreshlink linkbutton" href="#">Refresh</a>';
$handler->display->display_options['footer']['area']['format'] = 'php_code';
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['empty'] = TRUE;
$handler->display->display_options['empty']['area']['content'] = '<ul>
<li><a href=http://www.whs.mil>WHS</a>
</ul>
Click below to add new links.
<p>
<a class="newlink  newwindow linkbutton" href=http://whs.dev/node/add/user-favorite-links>Add New Links</a> <a class="addthislink  newwindow linkbutton" href=http://whs.dev/node/add/user-favorite-links?add=this&url=<?php echo urlencode($_SERVER["SERVER_NAME"] . $_SERVER[\'REQUEST_URI\']);?> >Add This Link</a> <a class="allfavoritelinks linkbutton" href=user/favorite>View All Links</a> <a class="refreshlink linkbutton" href="#">Refresh</a>';
$handler->display->display_options['empty']['area']['format'] = 'php_code';
/* Relationship: Content: Author */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'node';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
/* Field: Content: Link */
$handler->display->display_options['fields']['field_link']['id'] = 'field_link';
$handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
$handler->display->display_options['fields']['field_link']['field'] = 'field_link';
$handler->display->display_options['fields']['field_link']['label'] = '';
$handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_link']['click_sort_column'] = 'url';
/* Field: Content: Delete link */
$handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
$handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
$handler->display->display_options['fields']['delete_node']['label'] = '';
$handler->display->display_options['fields']['delete_node']['exclude'] = TRUE;
$handler->display->display_options['fields']['delete_node']['element_type'] = 'div';
$handler->display->display_options['fields']['delete_node']['element_class'] = 'deletelink newwindow linkbutton';
$handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['delete_node']['element_default_classes'] = FALSE;
/* Field: Content: Edit link */
$handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['label'] = '';
$handler->display->display_options['fields']['edit_node']['element_type'] = 'div';
$handler->display->display_options['fields']['edit_node']['element_class'] = 'editlink newwindow linkbutton';
$handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
/* Sort criterion: Content: Order (field_order) */
$handler->display->display_options['sorts']['field_order_value']['id'] = 'field_order_value';
$handler->display->display_options['sorts']['field_order_value']['table'] = 'field_data_field_order';
$handler->display->display_options['sorts']['field_order_value']['field'] = 'field_order_value';
/* Sort criterion: Content: Link (field_link:title) */
$handler->display->display_options['sorts']['field_link_title']['id'] = 'field_link_title';
$handler->display->display_options['sorts']['field_link_title']['table'] = 'field_data_field_link';
$handler->display->display_options['sorts']['field_link_title']['field'] = 'field_link_title';
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
  'user_favorite_links' => 'user_favorite_links',
);
/* Filter criterion: User: Current */
$handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
$handler->display->display_options['filters']['uid_current']['table'] = 'users';
$handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
$handler->display->display_options['filters']['uid_current']['relationship'] = 'uid';
$handler->display->display_options['filters']['uid_current']['value'] = '1';

/* Display: User Favorite Links */
$handler = $view->new_display('block', 'User Favorite Links', 'user_favorite_block');
$handler->display->display_options['block_description'] = 'User Favorite Links';

/* Display: User Favorite Links */
$handler = $view->new_display('page', 'User Favorite Links', 'user_favorite_link_page');
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Link */
$handler->display->display_options['fields']['field_link']['id'] = 'field_link';
$handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
$handler->display->display_options['fields']['field_link']['field'] = 'field_link';
$handler->display->display_options['fields']['field_link']['label'] = '';
$handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_link']['click_sort_column'] = 'url';
/* Field: Content: Delete link */
$handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
$handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
$handler->display->display_options['fields']['delete_node']['label'] = '';
$handler->display->display_options['fields']['delete_node']['element_type'] = 'div';
$handler->display->display_options['fields']['delete_node']['element_class'] = 'deletelink newwindow linkbutton';
$handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['delete_node']['element_default_classes'] = FALSE;
/* Field: Content: Edit link */
$handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['label'] = '';
$handler->display->display_options['fields']['edit_node']['element_type'] = 'div';
$handler->display->display_options['fields']['edit_node']['element_class'] = 'editlink newwindow linkbutton';
$handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
$handler->display->display_options['path'] = 'user/favorite';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'User Favorite Links';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'menu-user-favorite-links';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;
