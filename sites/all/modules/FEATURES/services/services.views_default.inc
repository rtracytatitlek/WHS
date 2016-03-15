<?php
/**
 * @file
 * services.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function services_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'contracting_and_procurement_by_location';
  $view->description = 'This is called internally by SERVICES CATEOGRY LANDING view (center page menu) descriptions view.';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Services by location';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Contracting and procurement by location';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  /* Field: Taxonomy vocabulary: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  /* Filter criterion: Taxonomy term: Vocabulary */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['value'] = array(
    8 => '8',
    4 => '4',
    9 => '9',
    10 => '10',
    11 => '11',
    12 => '12',
    13 => '13',
    14 => '14',
  );
  /* Filter criterion: Taxonomy term: Parent term */
  $handler->display->display_options['filters']['parent']['id'] = 'parent';
  $handler->display->display_options['filters']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['filters']['parent']['field'] = 'parent';
  $handler->display->display_options['filters']['parent']['value']['value'] = '0';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['contracting_and_procurement_by_location'] = $view;

  $view = new view();
  $view->name = 'contracting_and_procurement_menu_descriptions';
  $view->description = 'This is the first level of service pages - the category.  Services -> category.';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Service cateogry landing page descriptions (c&p, FSA, etc.)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'contracting-and-procurement menu descriptions';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '500';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
  /* Field: Name formatted for linking */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['ui_name'] = 'Name formatted for linking';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_1']['alter']['text'] = '<?php
';
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name_1']['link_to_taxonomy'] = TRUE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_on_page_link']['id'] = 'field_on_page_link';
  $handler->display->display_options['fields']['field_on_page_link']['table'] = 'field_data_field_on_page_link';
  $handler->display->display_options['fields']['field_on_page_link']['field'] = 'field_on_page_link';
  $handler->display->display_options['fields']['field_on_page_link']['label'] = '';
  $handler->display->display_options['fields']['field_on_page_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_on_page_link']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '<a id="[field_on_page_link]" class="alpha-anchor">*</a> [name_1]
';
  $handler->display->display_options['fields']['name']['alter']['path'] = 'services/contracting-and-procurement/[name]';
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Display the title of this program */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['ui_name'] = 'Display the title of this program';
  $handler->display->display_options['fields']['php_1']['label'] = '';
  $handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
//See WHS CUSTOM MODULE for the code in this function.

$disp=display_locations_category($row, $data, $static);

echo $disp[0];

?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_class'] = 'service-description';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  /* Field: Display name and locations */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Display name and locations';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
//See WHS CUSTOM MODULE for the code in this function.

$disp=display_locations_category($row, $data, $static);

echo $disp[1];

?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  /* Contextual filter: Taxonomy vocabulary: Vocabulary ID */
  $handler->display->display_options['arguments']['vid']['id'] = 'vid';
  $handler->display->display_options['arguments']['vid']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['arguments']['vid']['field'] = 'vid';
  $handler->display->display_options['arguments']['vid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['vid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['vid']['default_argument_options']['code'] = '$TID=arg(2);
	$term=taxonomy_term_load($TID);

	$menu_name=$term->name;

	//The term name is used for the path, and does not include the truncated menu name (see below)

	$term_name=str_replace(" ","_", $term->name);

	$term_name=str_replace(",","", $term_name);

	$term_name=str_replace("&","", $term_name);

	$term_name=strtolower($term_name);

	

	

	//Get each term under this parent.  Note we are changing vocabs from the service list to the individual category vocab

	$parent=taxonomy_vocabulary_machine_name_load($term_name);

return $parent->vid;';
  $handler->display->display_options['arguments']['vid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['vid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['vid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Display only one location per service; the rest are options undert this location. */
  $handler->display->display_options['filters']['php']['id'] = 'php';
  $handler->display->display_options['filters']['php']['table'] = 'views';
  $handler->display->display_options['filters']['php']['field'] = 'php';
  $handler->display->display_options['filters']['php']['ui_name'] = 'Display only one location per service; the rest are options undert this location.';
  $handler->display->display_options['filters']['php']['use_php_setup'] = 0;
  $handler->display->display_options['filters']['php']['php_filter'] = '//STATIC is one of the "available variables" below.  It saves the values stored therein for the duration of the view and can be accessed for each row.

foreach ($static as $already_shown) {
  //If it has been shown already, then abort this row.
  if ($already_shown==$row->name) {return TRUE;}
}

//If we have not shown this item yet, store it in the "shown" list.
$static[]=$row->name;

return FALSE;';

  /* Display: C&P Menu Descriptions */
  $handler = $view->new_display('block', 'C&P Menu Descriptions', 'block');
  $handler->display->display_options['display_description'] = 'Description for each of the contracting and procurement menu items';
  $export['contracting_and_procurement_menu_descriptions'] = $view;

  $view = new view();
  $view->name = 'directorate_services';
  $view->description = 'Lists services for a specific Directorate -- for use on the home page';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Directorate Services';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Directorate Services';
  $handler->display->display_options['css_class'] = 'directorate_services';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'description' => 'description',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'description' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: PHP */
  $handler->display->display_options['empty']['php']['id'] = 'php';
  $handler->display->display_options['empty']['php']['table'] = 'views';
  $handler->display->display_options['empty']['php']['field'] = 'php';
  $handler->display->display_options['empty']['php']['empty'] = TRUE;
  $handler->display->display_options['empty']['php']['php_output'] = '<?php
$location=get_current_location();
$location=strtoupper($location);
if ($location!="ALL") {
  echo \'There are no Directorate Services currently offered at the \'.$location.\' location.\';
}else{
  echo \'There are no Directorate Services currently offered at this time.\';
}
?>';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_which_program_or_service__target_id']['id'] = 'field_which_program_or_service__target_id';
  $handler->display->display_options['relationships']['field_which_program_or_service__target_id']['table'] = 'field_data_field_which_program_or_service_';
  $handler->display->display_options['relationships']['field_which_program_or_service__target_id']['field'] = 'field_which_program_or_service__target_id';
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'field_which_program_or_service__target_id';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = ' ';
  /* Field: Taxonomy vocabulary: Vocabulary ID */
  $handler->display->display_options['fields']['vid']['id'] = 'vid';
  $handler->display->display_options['fields']['vid']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['fields']['vid']['field'] = 'vid';
  $handler->display->display_options['fields']['vid']['relationship'] = 'field_which_program_or_service__target_id';
  $handler->display->display_options['fields']['vid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="service_program">
  <a href="?vid=[vid]&tid=[tid]&qt-whs_home_page_service_table=2">
  [title]</a>
</div>';
  $handler->display->display_options['fields']['title']['alter']['path'] = 'taxonomy/term/[tid]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: (PHP) Taxonomy Term Field_Locaton (hidden) */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = '(PHP) Taxonomy Term Field_Locaton (hidden)';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = '//You cannot create a relationship link to non-default fields in taxonomy terms.  So we have to manually grab this.  Just display.
$tid=$row->tid;
$term=taxonomy_term_load($tid);
echo $term->field_service_location[\'und\'][0][\'value\'];
';
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
//You cannot create a relationship link to non-default fields in taxonomy terms.  So we have to manually grab this.  Just display.
$tid=$row->tid;
$term=taxonomy_term_load($tid);
echo $term->field_service_location[\'und\'][0][\'value\'];
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Taxonomy term: Directorate Services Description */
  $handler->display->display_options['fields']['field_directorate_services_descr']['id'] = 'field_directorate_services_descr';
  $handler->display->display_options['fields']['field_directorate_services_descr']['table'] = 'field_data_field_directorate_services_descr';
  $handler->display->display_options['fields']['field_directorate_services_descr']['field'] = 'field_directorate_services_descr';
  $handler->display->display_options['fields']['field_directorate_services_descr']['relationship'] = 'field_which_program_or_service__target_id';
  $handler->display->display_options['fields']['field_directorate_services_descr']['label'] = 'Directorate Service Description';
  $handler->display->display_options['fields']['field_directorate_services_descr']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_directorate_services_descr']['alter']['text'] = '([php]) [field_directorate_services_descr]';
  /* Sort criterion: Taxonomy vocabulary: Vocabulary ID */
  $handler->display->display_options['sorts']['vid']['id'] = 'vid';
  $handler->display->display_options['sorts']['vid']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['sorts']['vid']['field'] = 'vid';
  $handler->display->display_options['sorts']['vid']['relationship'] = 'field_which_program_or_service__target_id';
  /* Sort criterion: Taxonomy term: Term ID */
  $handler->display->display_options['sorts']['tid']['id'] = 'tid';
  $handler->display->display_options['sorts']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['tid']['field'] = 'tid';
  $handler->display->display_options['sorts']['tid']['relationship'] = 'field_which_program_or_service__target_id';
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
    'service_program_landing_page' => 'service_program_landing_page',
  );
  /* Filter criterion: TEST LOCATION */
  $handler->display->display_options['filters']['php']['id'] = 'php';
  $handler->display->display_options['filters']['php']['table'] = 'views';
  $handler->display->display_options['filters']['php']['field'] = 'php';
  $handler->display->display_options['filters']['php']['ui_name'] = 'TEST LOCATION';
  $handler->display->display_options['filters']['php']['use_php_setup'] = 0;
  $handler->display->display_options['filters']['php']['php_filter'] = '//First, get the location of this term
//You cannot create a relationship link to non-default fields in taxonomy terms.  So we have to manually grab this.  Just display.
$tid=$row->tid;
$term=taxonomy_term_load($tid);
$term_location=strtoupper($term->field_service_location[\'und\'][0][\'value\']);
//Get the currently selected location (same code used in custom.module to set the value of the header bar)

$current_location=strtoupper(get_current_location());

$return_value=FALSE;
if ($current_location!=$term_location) {$return_value=TRUE;}
if ($current_location=="ALL") {$return_value=FALSE;}
if ($term_location=="ALL") {$return_value=FALSE;}

return $return_value;

';

  /* Display: Directive Services */
  $handler = $view->new_display('block', 'Directive Services', 'block');
  $handler->display->display_options['display_description'] = 'List Service Program Landing pages that are associated with this Directorate.';
  $export['directorate_services'] = $view;

  $view = new view();
  $view->name = 'serivce_pogram_sub_page_contact';
  $view->description = 'Display a condensed contact us block on the sub-pages.  Drawn from PROGAM SUB-PAGES content type.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Serivce Pogram sub page contact';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Serivce Pogram sub page contact';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_abridged_contact_content']['id'] = 'field_abridged_contact_content';
  $handler->display->display_options['fields']['field_abridged_contact_content']['table'] = 'field_data_field_abridged_contact_content';
  $handler->display->display_options['fields']['field_abridged_contact_content']['field'] = 'field_abridged_contact_content';
  $handler->display->display_options['fields']['field_abridged_contact_content']['label'] = '';
  $handler->display->display_options['fields']['field_abridged_contact_content']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
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
    'service_program_sub_page' => 'service_program_sub_page',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['serivce_pogram_sub_page_contact'] = $view;

  $view = new view();
  $view->name = 'serivce_program_landing_page_eligibility_list';
  $view->description = 'This view will display a list of eligible "service users" for this service program.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Serivce program landing page eligibility list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Serivce program landing page eligibility list';
  $handler->display->display_options['css_class'] = 'service_eligibility';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '500';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_image_icon' => 'field_image_icon',
    'title' => 'title',
    'field_description' => 'field_description',
  );
  /* Relationship: Link program landing to eligibility icons */
  $handler->display->display_options['relationships']['field_service_eligibility_icons_nid']['id'] = 'field_service_eligibility_icons_nid';
  $handler->display->display_options['relationships']['field_service_eligibility_icons_nid']['table'] = 'field_data_field_service_eligibility_icons';
  $handler->display->display_options['relationships']['field_service_eligibility_icons_nid']['field'] = 'field_service_eligibility_icons_nid';
  $handler->display->display_options['relationships']['field_service_eligibility_icons_nid']['ui_name'] = 'Link program landing to eligibility icons';
  $handler->display->display_options['relationships']['field_service_eligibility_icons_nid']['delta'] = '-1';
  /* Field: Field: Image Icon */
  $handler->display->display_options['fields']['field_image_icon']['id'] = 'field_image_icon';
  $handler->display->display_options['fields']['field_image_icon']['table'] = 'field_data_field_image_icon';
  $handler->display->display_options['fields']['field_image_icon']['field'] = 'field_image_icon';
  $handler->display->display_options['fields']['field_image_icon']['relationship'] = 'field_service_eligibility_icons_nid';
  $handler->display->display_options['fields']['field_image_icon']['label'] = '';
  $handler->display->display_options['fields']['field_image_icon']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_icon']['element_class'] = 'eligible_img';
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
  $handler->display->display_options['fields']['title']['relationship'] = 'field_service_eligibility_icons_nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_class'] = 'eligible_img_header';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_description']['empty'] = 'This is where the description text will be.';
  $handler->display->display_options['fields']['field_description']['type'] = 'text_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="eligible_img"><center>[field_image_icon]</center></span>
<div class="">
  <div class="eligible_img_title"><center><b>[title]</b></center></div>
  <div class="">[field_description]</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['code'] = '//If this is a node page, then we need to pull
//the TID from the node.  See custom module.
$taxonomy=return_taxonomy();
if ($taxonomy[\'tid\']==FALSE){
  return $_REQUEST[\'tid\'];
}else{
  return $taxonomy[\'tid\'];
}';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
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
    'service_program_landing_page' => 'service_program_landing_page',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Service Taxonomy */
  $handler = $view->new_display('block', 'Service Taxonomy', 'block_1');
  $handler->display->display_options['display_description'] = 'Disaply arg(2) value instead of TID';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['code'] = 'return arg(2);';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $export['serivce_program_landing_page_eligibility_list'] = $view;

  $view = new view();
  $view->name = 'service_category_top_level_list';
  $view->description = 'This is the top list called from WHS SERVICES on the home page.';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Service Category Top Level List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Service Category Top Level List';
  $handler->display->display_options['css_class'] = 'service_category_top';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '999';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<?php
$WhichVID=$_REQUEST[\'vid\'];
$vocab=taxonomy_vocabulary_load($WhichVID);

echo \'<div class="service_category_name">\'.$vocab->name.\'</div>\';
?>
';
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  /* Field: Taxonomy vocabulary: Vocabulary ID */
  $handler->display->display_options['fields']['vid']['id'] = 'vid';
  $handler->display->display_options['fields']['vid']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['fields']['vid']['field'] = 'vid';
  $handler->display->display_options['fields']['vid']['exclude'] = TRUE;
  /* Field: Taxonomy vocabulary: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '<div class="service_program">
  <a href="?vid=!1&tid=[tid]&qt-whs_home_page_service_table=2#working-area">
  [name]</a>
</div>';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Contextual filter: Taxonomy vocabulary: Vocabulary ID */
  $handler->display->display_options['arguments']['vid']['id'] = 'vid';
  $handler->display->display_options['arguments']['vid']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['arguments']['vid']['field'] = 'vid';
  $handler->display->display_options['arguments']['vid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['vid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['vid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['vid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['operator'] = 'contains';
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Taxonomy term: Parent term */
  $handler->display->display_options['filters']['parent']['id'] = 'parent';
  $handler->display->display_options['filters']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['filters']['parent']['field'] = 'parent';
  $handler->display->display_options['filters']['parent']['expose']['operator_id'] = 'parent_op';
  $handler->display->display_options['filters']['parent']['expose']['label'] = 'Parent term';
  $handler->display->display_options['filters']['parent']['expose']['operator'] = 'parent_op';
  $handler->display->display_options['filters']['parent']['expose']['identifier'] = 'parent';
  $handler->display->display_options['filters']['parent']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['service_category_top_level_list'] = $view;

  $view = new view();
  $view->name = 'service_program_contact';
  $view->description = 'This is the contact information displayed on the service program landing page.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Service Program Contact';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Service Program Contact';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'TEST';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Field: Content: Information */
  $handler->display->display_options['fields']['field_how_do_i_get_this_service']['id'] = 'field_how_do_i_get_this_service';
  $handler->display->display_options['fields']['field_how_do_i_get_this_service']['table'] = 'field_data_field_how_do_i_get_this_service';
  $handler->display->display_options['fields']['field_how_do_i_get_this_service']['field'] = 'field_how_do_i_get_this_service';
  $handler->display->display_options['fields']['field_how_do_i_get_this_service']['label'] = '';
  $handler->display->display_options['fields']['field_how_do_i_get_this_service']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['code'] = 'return $_REQUEST[\'tid\'];';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
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
    'service_program_landing_page' => 'service_program_landing_page',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['service_program_contact'] = $view;

  $view = new view();
  $view->name = 'service_program_detail_tabs';
  $view->description = 'Display the tabs on the service program details page (sub page)';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Service Program Detail Tabs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Service Program Detail Tabs';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Tabs */
  $handler->display->display_options['fields']['field_tabs']['id'] = 'field_tabs';
  $handler->display->display_options['fields']['field_tabs']['table'] = 'field_data_field_tabs';
  $handler->display->display_options['fields']['field_tabs']['field'] = 'field_tabs';
  $handler->display->display_options['fields']['field_tabs']['label'] = '';
  $handler->display->display_options['fields']['field_tabs']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tabs']['click_sort_column'] = 'tab_title_1';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
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
    'service_program_sub_page' => 'service_program_sub_page',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['service_program_detail_tabs'] = $view;

  $view = new view();
  $view->name = 'service_program_landing_page_contact_us';
  $view->description = 'Displays the How to Reach Us information on Program Landing PAges';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Service Program Landing Page - Contact Us';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'program-contact-us-view';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<div class="program_contact_header">
  <span class="header_text">How Do I Get This Service?</span>
</div>';
  /* Field: Content: Information */
  $handler->display->display_options['fields']['field_how_do_i_get_this_service']['id'] = 'field_how_do_i_get_this_service';
  $handler->display->display_options['fields']['field_how_do_i_get_this_service']['table'] = 'field_data_field_how_do_i_get_this_service';
  $handler->display->display_options['fields']['field_how_do_i_get_this_service']['field'] = 'field_how_do_i_get_this_service';
  $handler->display->display_options['fields']['field_how_do_i_get_this_service']['label'] = '';
  $handler->display->display_options['fields']['field_how_do_i_get_this_service']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_how_do_i_get_this_service']['element_class'] = 'program-page-information';
  $handler->display->display_options['fields']['field_how_do_i_get_this_service']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_how_do_i_get_this_service']['hide_empty'] = TRUE;
  /* Field: Content: POC Email */
  $handler->display->display_options['fields']['field_poc_email']['id'] = 'field_poc_email';
  $handler->display->display_options['fields']['field_poc_email']['table'] = 'field_data_field_poc_email';
  $handler->display->display_options['fields']['field_poc_email']['field'] = 'field_poc_email';
  $handler->display->display_options['fields']['field_poc_email']['label'] = '';
  $handler->display->display_options['fields']['field_poc_email']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_poc_email']['alter']['path'] = 'mailto:[field_poc_email] ';
  $handler->display->display_options['fields']['field_poc_email']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_poc_email']['element_class'] = 'program-page-poc-email';
  $handler->display->display_options['fields']['field_poc_email']['element_label_colon'] = FALSE;
  /* Field: Content: POC Name */
  $handler->display->display_options['fields']['field_poc_name']['id'] = 'field_poc_name';
  $handler->display->display_options['fields']['field_poc_name']['table'] = 'field_data_field_poc_name';
  $handler->display->display_options['fields']['field_poc_name']['field'] = 'field_poc_name';
  $handler->display->display_options['fields']['field_poc_name']['label'] = '';
  $handler->display->display_options['fields']['field_poc_name']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_poc_name']['element_class'] = 'program-page-poc-name';
  $handler->display->display_options['fields']['field_poc_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_poc_name']['hide_empty'] = TRUE;
  /* Field: Content: POC Phone */
  $handler->display->display_options['fields']['field_poc_phone']['id'] = 'field_poc_phone';
  $handler->display->display_options['fields']['field_poc_phone']['table'] = 'field_data_field_poc_phone';
  $handler->display->display_options['fields']['field_poc_phone']['field'] = 'field_poc_phone';
  $handler->display->display_options['fields']['field_poc_phone']['label'] = '';
  $handler->display->display_options['fields']['field_poc_phone']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_poc_phone']['element_class'] = 'program-page-poc-phone';
  $handler->display->display_options['fields']['field_poc_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_poc_phone']['hide_empty'] = TRUE;
  /* Field: Content: POC Phone - Alternate */
  $handler->display->display_options['fields']['field_poc_phone_alternate']['id'] = 'field_poc_phone_alternate';
  $handler->display->display_options['fields']['field_poc_phone_alternate']['table'] = 'field_data_field_poc_phone_alternate';
  $handler->display->display_options['fields']['field_poc_phone_alternate']['field'] = 'field_poc_phone_alternate';
  $handler->display->display_options['fields']['field_poc_phone_alternate']['label'] = '';
  $handler->display->display_options['fields']['field_poc_phone_alternate']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_poc_phone_alternate']['element_class'] = 'program-page-poc-phone-alternate';
  $handler->display->display_options['fields']['field_poc_phone_alternate']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_poc_phone_alternate']['hide_empty'] = TRUE;
  /* Field: Content: 2nd Information */
  $handler->display->display_options['fields']['field_2nd_information']['id'] = 'field_2nd_information';
  $handler->display->display_options['fields']['field_2nd_information']['table'] = 'field_data_field_2nd_information';
  $handler->display->display_options['fields']['field_2nd_information']['field'] = 'field_2nd_information';
  $handler->display->display_options['fields']['field_2nd_information']['label'] = '';
  $handler->display->display_options['fields']['field_2nd_information']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_2nd_information']['element_class'] = 'program-page-2nd-information';
  $handler->display->display_options['fields']['field_2nd_information']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_2nd_information']['hide_empty'] = TRUE;
  /* Field: Content: 2nd POC Name */
  $handler->display->display_options['fields']['field_2nd_poc']['id'] = 'field_2nd_poc';
  $handler->display->display_options['fields']['field_2nd_poc']['table'] = 'field_data_field_2nd_poc';
  $handler->display->display_options['fields']['field_2nd_poc']['field'] = 'field_2nd_poc';
  $handler->display->display_options['fields']['field_2nd_poc']['label'] = '';
  $handler->display->display_options['fields']['field_2nd_poc']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_2nd_poc']['element_class'] = 'program-page-2nd-poc-name';
  $handler->display->display_options['fields']['field_2nd_poc']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_2nd_poc']['hide_empty'] = TRUE;
  /* Field: Content: 2nd POC Phone */
  $handler->display->display_options['fields']['field_2nd_poc_phone']['id'] = 'field_2nd_poc_phone';
  $handler->display->display_options['fields']['field_2nd_poc_phone']['table'] = 'field_data_field_2nd_poc_phone';
  $handler->display->display_options['fields']['field_2nd_poc_phone']['field'] = 'field_2nd_poc_phone';
  $handler->display->display_options['fields']['field_2nd_poc_phone']['label'] = '';
  $handler->display->display_options['fields']['field_2nd_poc_phone']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_2nd_poc_phone']['element_class'] = 'program-page-2nd-poc-phone';
  $handler->display->display_options['fields']['field_2nd_poc_phone']['element_label_colon'] = FALSE;
  /* Field: Content: 2nd POC Phone - Alternate */
  $handler->display->display_options['fields']['field_2nd_poc_phone_alternate']['id'] = 'field_2nd_poc_phone_alternate';
  $handler->display->display_options['fields']['field_2nd_poc_phone_alternate']['table'] = 'field_data_field_2nd_poc_phone_alternate';
  $handler->display->display_options['fields']['field_2nd_poc_phone_alternate']['field'] = 'field_2nd_poc_phone_alternate';
  $handler->display->display_options['fields']['field_2nd_poc_phone_alternate']['label'] = '';
  $handler->display->display_options['fields']['field_2nd_poc_phone_alternate']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_2nd_poc_phone_alternate']['element_class'] = 'program-page-2nd-poc-phone-alternate';
  $handler->display->display_options['fields']['field_2nd_poc_phone_alternate']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_2nd_poc_phone_alternate']['hide_empty'] = TRUE;
  /* Field: Content: 2nd POC Email */
  $handler->display->display_options['fields']['field_2nd_poc_email']['id'] = 'field_2nd_poc_email';
  $handler->display->display_options['fields']['field_2nd_poc_email']['table'] = 'field_data_field_2nd_poc_email';
  $handler->display->display_options['fields']['field_2nd_poc_email']['field'] = 'field_2nd_poc_email';
  $handler->display->display_options['fields']['field_2nd_poc_email']['label'] = '';
  $handler->display->display_options['fields']['field_2nd_poc_email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_2nd_poc_email']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_2nd_poc_email']['alter']['path'] = 'mailto:[field_2nd_poc_email]';
  $handler->display->display_options['fields']['field_2nd_poc_email']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_2nd_poc_email']['element_class'] = 'program-page-2nd-poc-email';
  $handler->display->display_options['fields']['field_2nd_poc_email']['element_label_colon'] = FALSE;
  /* Field: Content: Service Provider */
  $handler->display->display_options['fields']['field_service_provider']['id'] = 'field_service_provider';
  $handler->display->display_options['fields']['field_service_provider']['table'] = 'field_data_field_service_provider';
  $handler->display->display_options['fields']['field_service_provider']['field'] = 'field_service_provider';
  $handler->display->display_options['fields']['field_service_provider']['label'] = '';
  $handler->display->display_options['fields']['field_service_provider']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_service_provider']['element_class'] = 'program-page-service-provider';
  $handler->display->display_options['fields']['field_service_provider']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_service_provider']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_service_provider']['click_sort_column'] = 'url';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['code'] = '//If this is a node page, then we need to pull
//the TID from the node.  See custom module.
$taxonomy=return_taxonomy();
if ($taxonomy[\'tid\']==FALSE){
  return $_REQUEST[\'tid\'];
}else{
  return $taxonomy[\'tid\'];
}';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Service Program landing page Taxonomy */
  $handler = $view->new_display('block', 'Service Program landing page Taxonomy', 'block_1');
  $handler->display->display_options['display_description'] = 'Uses arg(2) instead of TID';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['code'] = 'return arg(2);';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $export['service_program_landing_page_contact_us'] = $view;

  $view = new view();
  $view->name = 'service_program_landing_page_descriptions_c_p_fsa_etc_';
  $view->description = 'Service program landing page description.';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Service program landing page descriptions (Purchase Card, Building Circulars, etc.)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Service Program Description';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '500';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<?php

?>
';
  /* Field: Name formatted for linking */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['ui_name'] = 'Name formatted for linking';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_1']['alter']['text'] = '<?php
';
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name_1']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '<a id="[field_on_page_link]" class="alpha-anchor">*</a> [name_1]
';
  $handler->display->display_options['fields']['name']['alter']['path'] = 'services/contracting-and-procurement/[name]';
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Display name and locations */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Display name and locations';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
//See WHS CUSTOM MODULE for the code in this function.

$disp=display_locations_category($row, $data, $static);
echo $disp[1];

?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_type'] = 'span';
  $handler->display->display_options['fields']['description']['element_class'] = 'service-description';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['code'] = '<?php
return arg(2);
?>';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Display only one location per service; the rest are options undert this location. */
  $handler->display->display_options['filters']['php']['id'] = 'php';
  $handler->display->display_options['filters']['php']['table'] = 'views';
  $handler->display->display_options['filters']['php']['field'] = 'php';
  $handler->display->display_options['filters']['php']['ui_name'] = 'Display only one location per service; the rest are options undert this location.';
  $handler->display->display_options['filters']['php']['use_php_setup'] = 0;
  $handler->display->display_options['filters']['php']['php_filter'] = '//STATIC is one of the "available variables" below.  It saves the values stored therein for the duration of the view and can be accessed for each row.

foreach ($static as $already_shown) {
  //If it has been shown already, then abort this row.
  if ($already_shown==$row->name) {return TRUE;}
}

//If we have not shown this item yet, store it in the "shown" list.
$static[]=$row->name;

return FALSE;';

  /* Display: Description of Service Program */
  $handler = $view->new_display('block', 'Description of Service Program', 'block');
  $handler->display->display_options['display_description'] = 'Based on the URL (context filter), grabs service PROGRAM and displays description with formatting.';
  $export['service_program_landing_page_descriptions_c_p_fsa_etc_'] = $view;

  $view = new view();
  $view->name = 'service_program_main';
  $view->description = 'Service program main content (body, title, etc.)';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Service Program - Main';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'service_program_main';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_class'] = 'service_program_main_header';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_class'] = 'service_program_main_descrip';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['code'] = 'return $_REQUEST[\'tid\'];';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['service_program_main'] = $view;

  $view = new view();
  $view->name = 'service_program_related_links';
  $view->description = 'These are the related links displayed at the bottom of the service program landing page.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Service Program Related Links';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Service Program Related Links';
  $handler->display->display_options['css_class'] = 'service_related_links';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'php' => 'php',
    'field_related_links' => 'field_related_links',
  );
  /* Field: Icon */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Icon';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
echo \'<img src="sites/all/themes/WHS/images/list-square.png" alt="box">\';
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Related Links */
  $handler->display->display_options['fields']['field_related_links']['id'] = 'field_related_links';
  $handler->display->display_options['fields']['field_related_links']['table'] = 'field_data_field_related_links';
  $handler->display->display_options['fields']['field_related_links']['field'] = 'field_related_links';
  $handler->display->display_options['fields']['field_related_links']['label'] = '';
  $handler->display->display_options['fields']['field_related_links']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_related_links']['alter']['text'] = '[field_related_links]';
  $handler->display->display_options['fields']['field_related_links']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_related_links']['alter']['path'] = '[field_related_links-url]';
  $handler->display->display_options['fields']['field_related_links']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_related_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_related_links']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_related_links']['type'] = 'link_title_plain';
  $handler->display->display_options['fields']['field_related_links']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_related_links']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['code'] = '//If this is a node page, then we need to pull
//the TID from the node.  See custom module.
$taxonomy=return_taxonomy();
if ($taxonomy[\'tid\']==FALSE){
  return $_REQUEST[\'tid\'];
}else{
  return $taxonomy[\'tid\'];
}';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
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
    'service_program_landing_page' => 'service_program_landing_page',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Service Related Program page (taxonomy) */
  $handler = $view->new_display('block', 'Service Related Program page (taxonomy)', 'block_1');
  $handler->display->display_options['display_description'] = 'Use arg(2) instead of TID';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['code'] = 'return arg(2);';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $export['service_program_related_links'] = $view;

  $view = new view();
  $view->name = 'service_program_sub_page_contact_us';
  $view->description = 'Loads the respective POC information from the program page related to this service sub-page';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Service Program Sub Page Contact Us';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Service Program Sub Page Contact Us';
  $handler->display->display_options['css_class'] = 'sub-program-contact';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Which program should contact information be drawn from? (uses initial POC, not 2nd POC) (field_which_program_should_conta) */
  $handler->display->display_options['relationships']['field_which_program_should_conta_nid']['id'] = 'field_which_program_should_conta_nid';
  $handler->display->display_options['relationships']['field_which_program_should_conta_nid']['table'] = 'field_data_field_which_program_should_conta';
  $handler->display->display_options['relationships']['field_which_program_should_conta_nid']['field'] = 'field_which_program_should_conta_nid';
  $handler->display->display_options['relationships']['field_which_program_should_conta_nid']['delta'] = '-1';
  /* Field: Content: Information */
  $handler->display->display_options['fields']['field_how_do_i_get_this_service']['id'] = 'field_how_do_i_get_this_service';
  $handler->display->display_options['fields']['field_how_do_i_get_this_service']['table'] = 'field_data_field_how_do_i_get_this_service';
  $handler->display->display_options['fields']['field_how_do_i_get_this_service']['field'] = 'field_how_do_i_get_this_service';
  $handler->display->display_options['fields']['field_how_do_i_get_this_service']['relationship'] = 'field_which_program_should_conta_nid';
  $handler->display->display_options['fields']['field_how_do_i_get_this_service']['label'] = '';
  $handler->display->display_options['fields']['field_how_do_i_get_this_service']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_how_do_i_get_this_service']['element_class'] = 'sub-page-poc-information';
  $handler->display->display_options['fields']['field_how_do_i_get_this_service']['element_label_colon'] = FALSE;
  /* Field: Content: POC Name */
  $handler->display->display_options['fields']['field_poc_name']['id'] = 'field_poc_name';
  $handler->display->display_options['fields']['field_poc_name']['table'] = 'field_data_field_poc_name';
  $handler->display->display_options['fields']['field_poc_name']['field'] = 'field_poc_name';
  $handler->display->display_options['fields']['field_poc_name']['relationship'] = 'field_which_program_should_conta_nid';
  $handler->display->display_options['fields']['field_poc_name']['label'] = '';
  $handler->display->display_options['fields']['field_poc_name']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_poc_name']['element_class'] = 'sub-program-poc-name';
  $handler->display->display_options['fields']['field_poc_name']['element_label_colon'] = FALSE;
  /* Field: Content: POC Phone */
  $handler->display->display_options['fields']['field_poc_phone']['id'] = 'field_poc_phone';
  $handler->display->display_options['fields']['field_poc_phone']['table'] = 'field_data_field_poc_phone';
  $handler->display->display_options['fields']['field_poc_phone']['field'] = 'field_poc_phone';
  $handler->display->display_options['fields']['field_poc_phone']['relationship'] = 'field_which_program_should_conta_nid';
  $handler->display->display_options['fields']['field_poc_phone']['label'] = '';
  $handler->display->display_options['fields']['field_poc_phone']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_poc_phone']['element_class'] = 'sub-program-poc-phone';
  $handler->display->display_options['fields']['field_poc_phone']['element_label_colon'] = FALSE;
  /* Field: Content: POC Phone - Alternate */
  $handler->display->display_options['fields']['field_poc_phone_alternate']['id'] = 'field_poc_phone_alternate';
  $handler->display->display_options['fields']['field_poc_phone_alternate']['table'] = 'field_data_field_poc_phone_alternate';
  $handler->display->display_options['fields']['field_poc_phone_alternate']['field'] = 'field_poc_phone_alternate';
  $handler->display->display_options['fields']['field_poc_phone_alternate']['relationship'] = 'field_which_program_should_conta_nid';
  $handler->display->display_options['fields']['field_poc_phone_alternate']['label'] = '';
  $handler->display->display_options['fields']['field_poc_phone_alternate']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_poc_phone_alternate']['element_class'] = 'sub-page-poc-phone-alternate';
  $handler->display->display_options['fields']['field_poc_phone_alternate']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_poc_phone_alternate']['hide_empty'] = TRUE;
  /* Field: Content: POC Email */
  $handler->display->display_options['fields']['field_poc_email']['id'] = 'field_poc_email';
  $handler->display->display_options['fields']['field_poc_email']['table'] = 'field_data_field_poc_email';
  $handler->display->display_options['fields']['field_poc_email']['field'] = 'field_poc_email';
  $handler->display->display_options['fields']['field_poc_email']['relationship'] = 'field_which_program_should_conta_nid';
  $handler->display->display_options['fields']['field_poc_email']['label'] = '';
  $handler->display->display_options['fields']['field_poc_email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_poc_email']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_poc_email']['alter']['path'] = 'mailto:[field_poc_email]';
  $handler->display->display_options['fields']['field_poc_email']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_poc_email']['element_class'] = 'sub-page-poc-email';
  $handler->display->display_options['fields']['field_poc_email']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['code'] = 'return $_REQUEST[\'tid\'];';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['code'] = 'return $_REQUEST[\'tid\'];';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';

  /* Display: Service Program Taxonomy */
  $handler = $view->new_display('block', 'Service Program Taxonomy', 'block_1');
  $handler->display->display_options['display_description'] = 'Uses arg(2) instead of TID';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['code'] = 'return arg(2);';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $export['service_program_sub_page_contact_us'] = $view;

  $view = new view();
  $view->name = 'service_program_sub_page_description';
  $view->description = 'This is the desription of this particular sub-page set in the PROGRAM SUB PAGE content type.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Service Program Sub Page Description';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Service Program Sub Page Description';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
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
  /* Field: Content: Description of the sub-page */
  $handler->display->display_options['fields']['field_description_of_the_sub_pag']['id'] = 'field_description_of_the_sub_pag';
  $handler->display->display_options['fields']['field_description_of_the_sub_pag']['table'] = 'field_data_field_description_of_the_sub_pag';
  $handler->display->display_options['fields']['field_description_of_the_sub_pag']['field'] = 'field_description_of_the_sub_pag';
  $handler->display->display_options['fields']['field_description_of_the_sub_pag']['label'] = '';
  $handler->display->display_options['fields']['field_description_of_the_sub_pag']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['code'] = 'return $_REQUEST[\'tid\'];';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
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
    'service_program_sub_page' => 'service_program_sub_page',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['service_program_sub_page_description'] = $view;

  $view = new view();
  $view->name = 'services_program_sub_page_body';
  $view->description = 'Display this narrative text on PROGRAM SUB PAGES.  Sourced from PROGRAM SUB PAGE content type. ';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Services Program Sub Page Body';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Services Program Sub Page Body';
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
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
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
    'service_program_sub_page' => 'service_program_sub_page',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['services_program_sub_page_body'] = $view;

  $view = new view();
  $view->name = 'taxonomy_term_title_with_picture';
  $view->description = 'Returns the title and picture of a term surrounded by DIV\'s';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Taxonomy Term Title with picture';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Taxonomy Term Title with picture';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_image' => 'field_image',
    'field_image_icon' => 'field_image_icon',
    'name' => 'name',
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_image']['element_wrapper_class'] = 'taxononmy-image';
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'icon_size',
    'image_link' => '',
  );
  /* Field: Field: Image Icon */
  $handler->display->display_options['fields']['field_image_icon']['id'] = 'field_image_icon';
  $handler->display->display_options['fields']['field_image_icon']['table'] = 'field_data_field_image_icon';
  $handler->display->display_options['fields']['field_image_icon']['field'] = 'field_image_icon';
  $handler->display->display_options['fields']['field_image_icon']['label'] = '';
  $handler->display->display_options['fields']['field_image_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_icon']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_image_icon']['element_wrapper_class'] = 'taxononmy-image';
  $handler->display->display_options['fields']['field_image_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_icon']['settings'] = array(
    'image_style' => 'icon_size',
    'image_link' => '',
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['name']['element_wrapper_class'] = 'taxonomy-title';
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['code'] = '//taxonomy/term/TID  <- 0/1/2
if (isset(arg(2))) {
return arg(2);
}else{
return 8;}';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';

  /* Display: Image+Name */
  $handler = $view->new_display('block', 'Image+Name', 'block');
  $export['taxonomy_term_title_with_picture'] = $view;

  $view = new view();
  $view->name = 'whs_service_main_list_of_services';
  $view->description = 'List of services for each WHS Service Categories';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'WHS Service - Main List of Services';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'WHS Service - Main List of Services';
  $handler->display->display_options['css_class'] = 'whs_services_view';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  /* No results behavior: Global: PHP */
  $handler->display->display_options['empty']['php']['id'] = 'php';
  $handler->display->display_options['empty']['php']['table'] = 'views';
  $handler->display->display_options['empty']['php']['field'] = 'php';
  $handler->display->display_options['empty']['php']['label'] = 'No program at this location';
  $handler->display->display_options['empty']['php']['empty'] = TRUE;
  $handler->display->display_options['empty']['php']['php_output'] = '<?php
$location=get_current_location();
$location=strtoupper($location);
if ($location!="ALL") {
  echo \'There are no Directorate Services currently offered at the \'.$location.\' location.\';
}else{
  echo \'There are no Directorate Services currently offered at this time.\';
}
?>';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_which_category_target_id']['id'] = 'field_which_category_target_id';
  $handler->display->display_options['relationships']['field_which_category_target_id']['table'] = 'field_data_field_which_category';
  $handler->display->display_options['relationships']['field_which_category_target_id']['field'] = 'field_which_category_target_id';
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'field_which_category_target_id';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_which_category_target_id';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: (PHP) Taxonomy Term Field_Location [hidden] */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = '(PHP) Taxonomy Term Field_Location [hidden]';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
//You cannot create a relationship link to non-default fields in taxonomy terms.  So we have to manually grab this.  Just display.
$tid=$row->tid;
$term=taxonomy_term_load($tid);
echo $term->field_service_location[\'und\'][0][\'value\'];
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['label'] = 'WHS Service Description';
  $handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
//You cannot create a relationship link to non-default fields in taxonomy terms.  So we have to manually grab this.  Just display.
$tid=$row->tid;
$term=taxonomy_term_load($tid);
echo \'(\'.$term->field_service_location[\'und\'][0][\'value\'].\') \'.$term->field_directorate_services_descr[\'und\'][0][\'value\'];
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Sort criterion: Taxonomy term: Term ID */
  $handler->display->display_options['sorts']['tid']['id'] = 'tid';
  $handler->display->display_options['sorts']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['tid']['field'] = 'tid';
  $handler->display->display_options['sorts']['tid']['relationship'] = 'field_which_category_target_id';
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['code'] = 'return arg(2);';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Test Location */
  $handler->display->display_options['filters']['php']['id'] = 'php';
  $handler->display->display_options['filters']['php']['table'] = 'views';
  $handler->display->display_options['filters']['php']['field'] = 'php';
  $handler->display->display_options['filters']['php']['ui_name'] = 'Test Location';
  $handler->display->display_options['filters']['php']['use_php_setup'] = 0;
  $handler->display->display_options['filters']['php']['php_filter'] = '//First, get the location of this term
//You cannot create a relationship link to non-default fields in taxonomy terms.  So we have to manually grab this.  Just display.
$tid=$row->tid;
$term=taxonomy_term_load($tid);
$term_location=strtoupper($term->field_service_location[\'und\'][0][\'value\']);
//Get the currently selected location (same code used in custom.module to set the value of the header bar)

$current_location=strtoupper(get_current_location());

$return_value=FALSE;
if ($current_location!=$term_location) {$return_value=TRUE;}
if ($current_location=="ALL") {$return_value=FALSE;}
if ($term_location=="ALL") {$return_value=FALSE;}

return $return_value;
';
  /* Filter criterion: TEST TEMPLATE=PROGRAM PAGE (not detail) */
  $handler->display->display_options['filters']['php_1']['id'] = 'php_1';
  $handler->display->display_options['filters']['php_1']['table'] = 'views';
  $handler->display->display_options['filters']['php_1']['field'] = 'php';
  $handler->display->display_options['filters']['php_1']['ui_name'] = 'TEST TEMPLATE=PROGRAM PAGE (not detail)';
  $handler->display->display_options['filters']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['filters']['php_1']['php_filter'] = '//You cannot create a relationship link to non-default fields in taxonomy terms.  So we have to manually grab this.  Just display.
$tid=$row->tid;
$term=taxonomy_term_load($tid);
$template=$term->field_select_a_page_template[\'und\'][0][\'value\'];

//We only want program pages, not detail pages, on the landing page.
$template=strtoupper($template);

return ($template!="PROGRAM");';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['whs_service_main_list_of_services'] = $view;

  $view = new view();
  $view->name = 'whs_service_return_node_associated_with_program';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'WHS Service - Return Node associated with program';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_associate_with_which_term_target_id']['id'] = 'field_associate_with_which_term_target_id';
  $handler->display->display_options['relationships']['field_associate_with_which_term_target_id']['table'] = 'field_data_field_associate_with_which_term';
  $handler->display->display_options['relationships']['field_associate_with_which_term_target_id']['field'] = 'field_associate_with_which_term_target_id';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['code'] = 'return arg(2);';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['whs_service_return_node_associated_with_program'] = $view;

  return $export;
}
