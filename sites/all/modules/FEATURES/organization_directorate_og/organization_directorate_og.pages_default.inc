<?php
/**
 * @file
 * organization_directorate_og.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function organization_directorate_og_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -27;
  $handler->conf = array(
    'title' => 'OG (Directorates)',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'og_is_node_group',
          'settings' => NULL,
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
        'class' => 'OB',
        'column_class' => 'Organization-Background',
        'row_class' => '',
        'region_class' => '',
        'no_scale' => FALSE,
        'fixed_width' => '',
        'column_separation' => '0.5em',
        'region_separation' => '0.5em',
        'row_separation' => '0.5em',
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 2,
          1 => 'main-row',
          2 => 1,
        ),
        'parent' => 'canvas',
        'class' => 'OB',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'first_top_box',
          1 => 'center',
          2 => 'third_box_top',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Top Box second',
        'width' => '28.633015247984726',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'Organization_top_second',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(),
        'parent' => 'main',
        'class' => 'Organization_Bottom',
      ),
      'first_top_box' => array(
        'type' => 'region',
        'title' => 'First Top Box',
        'width' => '46.243912755972126',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'Organization_top_first',
      ),
      'third_box_top' => array(
        'type' => 'region',
        'title' => 'Third Box Top',
        'width' => '25.12307199604305',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'Organization_top_third',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'breadcrumbs',
          1 => 'print_email',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'breadcrumbs' => array(
        'type' => 'region',
        'title' => 'Breadcrumbs',
        'width' => '63.22479877784618',
        'width_type' => '%',
        'parent' => '2',
        'class' => 'breadcrumbs',
      ),
      'print_email' => array(
        'type' => 'region',
        'title' => 'Print-Email',
        'width' => '36.77520122215382',
        'width_type' => '%',
        'parent' => '2',
        'class' => 'print-email',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => array(),
      'center' => array(),
      'bottom' => array(),
      'first_top_box' => array(),
      'third_box_top' => array(),
      'bottom_boxes_first' => array(),
      'bottom_boxes_third' => array(),
      'breadcrumbs' => array(),
      'print_email' => array(),
    ),
    'style' => 'stylizer',
    'center' => array(
      'style' => 'stylizer',
    ),
    'bottom' => array(
      'style' => 'stylizer',
    ),
    'first_top_box' => array(
      'style' => 'stylizer',
    ),
    'third_box_top' => array(
      'style' => 'stylizer',
    ),
    'bottom_boxes_first' => array(
      'style' => 'stylizer',
    ),
    'bottom_boxes_third' => array(
      'style' => 'stylizer',
    ),
    'breadcrumbs' => array(
      'style' => 'stylizer',
    ),
    'print_email' => array(
      'style' => 'stylizer',
    ),
  );
  $display->cache = array();
  $display->title = 'TEST';
  $display->uuid = '78a18fbc-a19f-48f0-8085-078fe1899716';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8baac2c2-1fd7-42a2-afd8-695b20073920';
    $pane->panel = 'breadcrumbs';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Breadcrumb',
      'title' => '',
      'body' => '<?php
display_whs_breadcrumbs();
?>',
      'format' => 'php_code',
      'substitute' => 1,
      'name' => 'display_breadcrumbs',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'stylizer',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8baac2c2-1fd7-42a2-afd8-695b20073920';
    $display->content['new-8baac2c2-1fd7-42a2-afd8-695b20073920'] = $pane;
    $display->panels['breadcrumbs'][0] = 'new-8baac2c2-1fd7-42a2-afd8-695b20073920';
    $pane = new stdClass();
    $pane->pid = 'new-80780cbc-f5e9-4cb8-849b-3692f0e9e8aa';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'organization_directorate_landing_page_director_name_title';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => '',
            'php' => '//This code is in whs_custom.module.  It checks to see if the displayed landing page has custom directorate information or should use the generic name/title combo.  See the content type for the flag.
if (test_director(arg(1))==1) {return TRUE;}else{return FALSE;}',
          ),
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'Must be a member of the GROUP to see this block. ',
            'php' => '$roles=check_role();
//Must be a GROUP member to view this information.
if ($roles[\'Group\']==TRUE) {
return TRUE;
}else{
return FALSE;}',
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '1',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'context' => array(
        0 => 'argument_entity_id:node_1.nid',
      ),
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'stylizer',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '80780cbc-f5e9-4cb8-849b-3692f0e9e8aa';
    $display->content['new-80780cbc-f5e9-4cb8-849b-3692f0e9e8aa'] = $pane;
    $display->panels['center'][0] = 'new-80780cbc-f5e9-4cb8-849b-3692f0e9e8aa';
    $pane = new stdClass();
    $pane->pid = 'new-cd3fd056-33d9-4e7c-9b21-2919908021ae';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'organization_directorate_top_row';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'Test to see this is custom or default',
            'php' => '//This code is in whs_custom.module.  It checks to see if the displayed landing page has custom directorate information or should use the generic name/title combo.  See the content type for the flag.
if (test_director(arg(1))==0) {return TRUE;}else{return FALSE;}',
          ),
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'Must be in the group to see this',
            'php' => '$roles=check_role();
//Must be a GROUP member to view this information.
if ($roles[\'Group\']==TRUE) {
return TRUE;
}else{
return FALSE;}',
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '1',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'top_middle',
      'context' => array(
        0 => 'argument_entity_id:node_1.nid',
      ),
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'stylizer',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'cd3fd056-33d9-4e7c-9b21-2919908021ae';
    $display->content['new-cd3fd056-33d9-4e7c-9b21-2919908021ae'] = $pane;
    $display->panels['center'][1] = 'new-cd3fd056-33d9-4e7c-9b21-2919908021ae';
    $pane = new stdClass();
    $pane->pid = 'new-76f3927a-d6de-4348-aaf4-f0974fbcdc7b';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'PHP - determine middle box',
      'title' => '',
      'body' => '<?php

$roles=check_role();

//It is possible more than one role will be returned.  We need to prioritize as follows:
//1 = group member;  2 = WHS employee; 3 = customer or other
if ($roles[\'Group\']==TRUE) {
//Display nothing here for middle.  This is done in boxes (panes) above this pane to account for default and custom GROUP content.
        return;
}//End checking if this is a GROUP display

if ($roles[\'Employee\']==TRUE) {

	$view=\'organization_directorate_top_row\';
	$display=\'block_2\';
	$arg=array(arg(1));
	
	$results=views_get_view($view);
        $results->set_display($display);
        $results->set_arguments($arg);
        echo $results->render();      
        return;
}//End checking if this is an EMPLOYEE display

//Treat everyone else as a customer
	$view=\'organization_directorate_top_row\';
	$display=\'block_5\';
	$arg=array(arg(1));
	
	$results=views_get_view($view);
        $results->set_display($display);
        $results->set_arguments($arg);
        echo $results->render();      
        return;




?>',
      'format' => 'php_code',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '76f3927a-d6de-4348-aaf4-f0974fbcdc7b';
    $display->content['new-76f3927a-d6de-4348-aaf4-f0974fbcdc7b'] = $pane;
    $display->panels['center'][2] = 'new-76f3927a-d6de-4348-aaf4-f0974fbcdc7b';
    $pane = new stdClass();
    $pane->pid = 'new-638e5e74-1469-4b9c-bf8d-a2d632a9f486';
    $pane->panel = 'first_top_box';
    $pane->type = 'views';
    $pane->subtype = 'odlp_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '1',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'context' => array(
        0 => 'argument_entity_id:node_1.nid',
      ),
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'stylizer',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '638e5e74-1469-4b9c-bf8d-a2d632a9f486';
    $display->content['new-638e5e74-1469-4b9c-bf8d-a2d632a9f486'] = $pane;
    $display->panels['first_top_box'][0] = 'new-638e5e74-1469-4b9c-bf8d-a2d632a9f486';
    $pane = new stdClass();
    $pane->pid = 'new-8117fce5-bafe-4550-8d2a-7cf43aa65c25';
    $pane->panel = 'first_top_box';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Which top left?',
      'title' => '',
      'body' => '<?php

$roles=check_role();

//It is possible more than one role will be returned.  We need to prioritize as follows:
//1 = group member;  2 = WHS employee; 3 = customer or other
if ($roles[\'Group\']==TRUE) {

	$view=\'organization_directorate_top_row\';
	$display=\'top-left\';
	$arg=array(arg(1));
	
	$results=views_get_view($view);
        $results->set_display($display);
        $results->set_arguments($arg);
        echo $results->render();      
        return;
}//End checking if this is a GROUP display

if ($roles[\'Employee\']==TRUE) {

	$view=\'organization_directorate_top_row\';
	$display=\'block_1\';
	$arg=array(arg(1));
	
	$results=views_get_view($view);
        $results->set_display($display);
        $results->set_arguments($arg);
        echo $results->render();      
        return;
}//End checking if this is an EMPLOYEE display

//Treat everyone else as a customer
	$view=\'organization_directorate_top_row\';
	$display=\'block_4\';
	$arg=array(arg(1));
	
	$results=views_get_view($view);
        $results->set_display($display);
        $results->set_arguments($arg);
        echo $results->render();      
        return;




?>',
      'format' => 'php_code',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8117fce5-bafe-4550-8d2a-7cf43aa65c25';
    $display->content['new-8117fce5-bafe-4550-8d2a-7cf43aa65c25'] = $pane;
    $display->panels['first_top_box'][1] = 'new-8117fce5-bafe-4550-8d2a-7cf43aa65c25';
    $pane = new stdClass();
    $pane->pid = 'new-63e4cd46-d813-4b8b-a875-5dc5fbc1c576';
    $pane->panel = 'print_email';
    $pane->type = 'block';
    $pane->subtype = 'print_ui-print-links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'stylizer',
      'settings' => array(),
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '63e4cd46-d813-4b8b-a875-5dc5fbc1c576';
    $display->content['new-63e4cd46-d813-4b8b-a875-5dc5fbc1c576'] = $pane;
    $display->panels['print_email'][0] = 'new-63e4cd46-d813-4b8b-a875-5dc5fbc1c576';
    $pane = new stdClass();
    $pane->pid = 'new-aca66485-7989-484b-9221-e7206ee7bf5c';
    $pane->panel = 'print_email';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Favorites',
      'title' => '',
      'body' => '<?php
//Call the favorites routine from whs_custom.module
//TASK = 3 returns the proper icon/text for the favorite box based on whether this URL has already been added to the system or not
echo favorites($_REQUEST[\'q\'],"3");
?>',
      'format' => 'php_code',
      'substitute' => 1,
      'name' => 'display_favorites',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'favorite-list',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'aca66485-7989-484b-9221-e7206ee7bf5c';
    $display->content['new-aca66485-7989-484b-9221-e7206ee7bf5c'] = $pane;
    $display->panels['print_email'][1] = 'new-aca66485-7989-484b-9221-e7206ee7bf5c';
    $pane = new stdClass();
    $pane->pid = 'new-bb772644-e880-49c3-a5cd-ca30700cd5c2';
    $pane->panel = 'print_email';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Directorate View Switch',
      'title' => '',
      'body' => '<?php

echo display_directorate_switch();
?>',
      'format' => 'php_code',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'bb772644-e880-49c3-a5cd-ca30700cd5c2';
    $display->content['new-bb772644-e880-49c3-a5cd-ca30700cd5c2'] = $pane;
    $display->panels['print_email'][2] = 'new-bb772644-e880-49c3-a5cd-ca30700cd5c2';
    $pane = new stdClass();
    $pane->pid = 'new-20acfa8c-ab3b-4aa0-a1e2-256d9a4cfe41';
    $pane->panel = 'third_box_top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'PHP - Top Right',
      'title' => '',
      'body' => '<?php

$roles=check_role();

//It is possible more than one role will be returned.  We need to prioritize as follows:
//1 = group member;  2 = WHS employee; 3 = customer or other
if ($roles[\'Group\']==TRUE) {

	$view=\'organization_directorate_top_row\';
	$display=\'top_right\';
	$arg=array(arg(1));
	
	$results=views_get_view($view);
        $results->set_display($display);
        $results->set_arguments($arg);
        echo $results->render();      
        return;
}//End checking if this is a GROUP display

if ($roles[\'Employee\']==TRUE) {

	$view=\'organization_directorate_top_row\';
	$display=\'block_3\';
	$arg=array(arg(1));
	
	$results=views_get_view($view);
        $results->set_display($display);
        $results->set_arguments($arg);
        echo $results->render();      
        return;
}//End checking if this is an EMPLOYEE display

//Treat everyone else as a customer
	$view=\'organization_directorate_top_row\';
	$display=\'block_6\';
	$arg=array(arg(1));
	
	$results=views_get_view($view);
        $results->set_display($display);
        $results->set_arguments($arg);
        echo $results->render();      
        return;




?>',
      'format' => 'php_code',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '20acfa8c-ab3b-4aa0-a1e2-256d9a4cfe41';
    $display->content['new-20acfa8c-ab3b-4aa0-a1e2-256d9a4cfe41'] = $pane;
    $display->panels['third_box_top'][0] = 'new-20acfa8c-ab3b-4aa0-a1e2-256d9a4cfe41';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_2';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -26;
  $handler->conf = array(
    'title' => 'Home Page - Commuter Display',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'commuter_content' => 'commuter_content',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 2,
          1 => 1,
          2 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'right_rss_and_news',
          2 => 'lower_right',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '23.195806932626358',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'directorate_lower_left',
      ),
      'right_rss_and_news' => array(
        'type' => 'region',
        'title' => 'Right RSS and News',
        'width' => '54.985547921784764',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'directorate_menu',
          1 => 'directorate_table',
          2 => 'directorate_tools',
        ),
        'parent' => 'main',
        'class' => 'top_home',
      ),
      'directorate_menu' => array(
        'type' => 'region',
        'title' => 'Directorate Menu',
        'width' => '23.00678591566539',
        'width_type' => '%',
        'parent' => '1',
        'class' => 'directorate_menu_region',
      ),
      'directorate_table' => array(
        'type' => 'region',
        'title' => 'Directorate Table',
        'width' => '54.811900797406864',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      'directorate_tools' => array(
        'type' => 'region',
        'title' => 'Directorate Tools',
        'width' => '22.18131328692774',
        'width_type' => '%',
        'parent' => '1',
        'class' => 'directorate_announcements',
      ),
      'lower_right' => array(
        'type' => 'region',
        'title' => 'Lower Right',
        'width' => '21.818645145588142',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'directorate_lower_right',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'breadcrumbs',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'breadcrumbs' => array(
        'type' => 'region',
        'title' => 'Breadcrumbs',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'left_nav' => NULL,
      'right_rss_and_news' => NULL,
      'directorate_menu' => NULL,
      'directorate_table' => NULL,
      'directorate_tools' => NULL,
      'lower_right' => NULL,
      'breadcrumbs' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '6ace6e0f-9c9c-43a0-ad85-b67cb3a76ca0';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-13caf135-acf6-47aa-b7fe-21e3974fb135';
    $pane->panel = 'breadcrumbs';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Breadcrumbs',
      'title' => '',
      'body' => '<?php
display_whs_breadcrumbs();
?>',
      'format' => 'php_code',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '13caf135-acf6-47aa-b7fe-21e3974fb135';
    $display->content['new-13caf135-acf6-47aa-b7fe-21e3974fb135'] = $pane;
    $display->panels['breadcrumbs'][0] = 'new-13caf135-acf6-47aa-b7fe-21e3974fb135';
    $pane = new stdClass();
    $pane->pid = 'new-172d1f74-d492-4105-9fd2-c6ac2eb0d48b';
    $pane->panel = 'directorate_menu';
    $pane->type = 'block';
    $pane->subtype = 'nice_menus-2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Directorates',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'rounded_corners',
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'directorate_menu',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '172d1f74-d492-4105-9fd2-c6ac2eb0d48b';
    $display->content['new-172d1f74-d492-4105-9fd2-c6ac2eb0d48b'] = $pane;
    $display->panels['directorate_menu'][0] = 'new-172d1f74-d492-4105-9fd2-c6ac2eb0d48b';
    $pane = new stdClass();
    $pane->pid = 'new-fbb3abb6-a53c-4c7b-a9d5-82b99c6b36c7';
    $pane->panel = 'directorate_menu';
    $pane->type = 'views';
    $pane->subtype = 'service_program_landing_page_contact_us';
    $pane->shown = FALSE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'Display IF Service page',
            'php' => '// Service landing and description pages are all based on taxonomy.  If there is a taxonomy in the URL, then SHOW this side box, and display the appropriate side box for the service landing page.
//SRH Feb 2015
if (isset($_REQUEST[\'tid\'])) {return TRUE;}else{return FALSE;}',
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '1',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'context' => array(
        0 => '',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'program-contact-body',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'fbb3abb6-a53c-4c7b-a9d5-82b99c6b36c7';
    $display->content['new-fbb3abb6-a53c-4c7b-a9d5-82b99c6b36c7'] = $pane;
    $display->panels['directorate_menu'][1] = 'new-fbb3abb6-a53c-4c7b-a9d5-82b99c6b36c7';
    $pane = new stdClass();
    $pane->pid = 'new-fab62555-c7ec-43d2-8160-62cb57c6b405';
    $pane->panel = 'directorate_menu';
    $pane->type = 'block';
    $pane->subtype = 'block-39';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'fab62555-c7ec-43d2-8160-62cb57c6b405';
    $display->content['new-fab62555-c7ec-43d2-8160-62cb57c6b405'] = $pane;
    $display->panels['directorate_menu'][2] = 'new-fab62555-c7ec-43d2-8160-62cb57c6b405';
    $pane = new stdClass();
    $pane->pid = 'new-c8141f8f-7f6e-4715-94db-034646ca8b98';
    $pane->panel = 'directorate_table';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Purely an anchor for jumping to this position on the page',
      'title' => '',
      'body' => '<span id="working-area"></span>',
      'format' => 'php_code',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c8141f8f-7f6e-4715-94db-034646ca8b98';
    $display->content['new-c8141f8f-7f6e-4715-94db-034646ca8b98'] = $pane;
    $display->panels['directorate_table'][0] = 'new-c8141f8f-7f6e-4715-94db-034646ca8b98';
    $pane = new stdClass();
    $pane->pid = 'new-2b7fd7f5-77c4-4df4-a8d7-774996daf303';
    $pane->panel = 'directorate_table';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'CUSTOM:  Get display title',
      'title' => '',
      'body' => '<?php
$title="";

  $title="Commuter Options";
if ($title!="") {
  echo \'<div class="directorate_title">\';
   echo \'<h2>\';
     echo $title;
   echo \'</h2>\';
  echo \'</div>\';
}//End checking if we have a title to display
?>
',
      'format' => 'php_code',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '2b7fd7f5-77c4-4df4-a8d7-774996daf303';
    $display->content['new-2b7fd7f5-77c4-4df4-a8d7-774996daf303'] = $pane;
    $display->panels['directorate_table'][1] = 'new-2b7fd7f5-77c4-4df4-a8d7-774996daf303';
    $pane = new stdClass();
    $pane->pid = 'new-2539e6f6-f79b-437c-9067-6a2e0a317bac';
    $pane->panel = 'directorate_table';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'READ ME:  Quicklinks control information HERE',
      'title' => '',
      'body' => '<p>&lt;h1&gt;READ ME:&nbsp; The tabs on the quicklinks box are controlled via JQUERY (see panel page) and code in CUSTOM.MODULE&lt;/h1&gt;</p>
',
      'format' => 'filtered_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '2539e6f6-f79b-437c-9067-6a2e0a317bac';
    $display->content['new-2539e6f6-f79b-437c-9067-6a2e0a317bac'] = $pane;
    $display->panels['directorate_table'][2] = 'new-2539e6f6-f79b-437c-9067-6a2e0a317bac';
    $pane = new stdClass();
    $pane->pid = 'new-de88d211-c623-4132-aca7-03067051e8a4';
    $pane->panel = 'directorate_table';
    $pane->type = 'views';
    $pane->subtype = 'commuter_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'context' => array(
        0 => '',
      ),
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'de88d211-c623-4132-aca7-03067051e8a4';
    $display->content['new-de88d211-c623-4132-aca7-03067051e8a4'] = $pane;
    $display->panels['directorate_table'][3] = 'new-de88d211-c623-4132-aca7-03067051e8a4';
    $pane = new stdClass();
    $pane->pid = 'new-80d9cc99-f3fa-4730-8dc3-f3d98df3dded';
    $pane->panel = 'directorate_tools';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'Display if NOT service page',
            'php' => '// Display empty blue bar is NOT on service pages (i.e. no favorite and no print)
//SRH Feb 2015
if (isset($_REQUEST[\'tid\'])) {return FALSE;}else{return TRUE;}',
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Blue bar -- hide if NOT directorate',
      'title' => '',
      'body' => '<div class="home_blue_bar"></div>',
      'format' => 'php_code',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '80d9cc99-f3fa-4730-8dc3-f3d98df3dded';
    $display->content['new-80d9cc99-f3fa-4730-8dc3-f3d98df3dded'] = $pane;
    $display->panels['directorate_tools'][0] = 'new-80d9cc99-f3fa-4730-8dc3-f3d98df3dded';
    $pane = new stdClass();
    $pane->pid = 'new-30f4447c-68fe-4bb4-b851-6e8188cecc60';
    $pane->panel = 'directorate_tools';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'Display IF service page',
            'php' => '// Service landing and description pages are all based on taxonomy.  If there is a taxonomy in the URL, then SHOW this side box, and display the appropriate side box for the service landing page.
//SRH Feb 2015
if (isset($_REQUEST[\'tid\'])) {return TRUE;}else{return FALSE;}',
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Favorite Button',
      'title' => '',
      'body' => '<?php
echo \'<div class="home_blue_bar">\';

//DIsplay the printer icon.
display_print_button();

//Call the favorites routine from whs_custom.module
//TASK = 3 returns the proper icon/text for the favorite box based on whether this URL has already been added to the system or not

if (!isset($_REQUEST[\'task\'])){
  echo favorites("Show Status","3");
}else{
  echo favorites(\'SAVE IT\',1);
}

echo \'</div>\';
?>',
      'format' => 'php_code',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '30f4447c-68fe-4bb4-b851-6e8188cecc60';
    $display->content['new-30f4447c-68fe-4bb4-b851-6e8188cecc60'] = $pane;
    $display->panels['directorate_tools'][1] = 'new-30f4447c-68fe-4bb4-b851-6e8188cecc60';
    $pane = new stdClass();
    $pane->pid = 'new-8ccc461f-42a6-4d23-b8ac-7320c5c7ed48';
    $pane->panel = 'directorate_tools';
    $pane->type = 'views';
    $pane->subtype = 'featured_tools';
    $pane->shown = FALSE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'Display if NOT service page',
            'php' => '// Service landing and description pages are all based on taxonomy.  If there is a taxonomy in the URL, then hide this side box, and display the appropriate side box for the service landing page.
//SRH Feb 2015
if (isset($_REQUEST[\'tid\'])) {return FALSE;}else{return TRUE;}',
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'bottom_left',
      'context' => array(
        0 => '',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'rounded_corners',
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'directorate_tools',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '8ccc461f-42a6-4d23-b8ac-7320c5c7ed48';
    $display->content['new-8ccc461f-42a6-4d23-b8ac-7320c5c7ed48'] = $pane;
    $display->panels['directorate_tools'][2] = 'new-8ccc461f-42a6-4d23-b8ac-7320c5c7ed48';
    $pane = new stdClass();
    $pane->pid = 'new-4cf0e08f-0830-49a0-aff7-d2fdf5d94619';
    $pane->panel = 'directorate_tools';
    $pane->type = 'block';
    $pane->subtype = 'whs_taxonomy_menu-taxonomy_menu';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'Display IF service page',
            'php' => '// Service landing and description pages are all based on taxonomy.  If there is a taxonomy in the URL, then SHOW this side box, and display the appropriate side box for the service landing page.
//SRH Feb 2015
if (isset($_REQUEST[\'tid\'])) {return TRUE;}else{return FALSE;}',
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '4cf0e08f-0830-49a0-aff7-d2fdf5d94619';
    $display->content['new-4cf0e08f-0830-49a0-aff7-d2fdf5d94619'] = $pane;
    $display->panels['directorate_tools'][3] = 'new-4cf0e08f-0830-49a0-aff7-d2fdf5d94619';
    $pane = new stdClass();
    $pane->pid = 'new-351f0377-c802-4ae7-bc7b-24bd87e106b6';
    $pane->panel = 'directorate_tools';
    $pane->type = 'views';
    $pane->subtype = 'whs_announcements_sticky';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'Display on NON-SERVICE pages',
            'php' => '// Service landing and description pages are all based on taxonomy.  If there is a taxonomy in the URL, then hide this side box, and display the appropriate side box for the service landing page.
//SRH Feb 2015
if (isset($_REQUEST[\'tid\'])) {return FALSE;}else{return TRUE;}',
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '3',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'override_title' => 1,
      'override_title_text' => 'WHS Announcements',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'rounded_corners',
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'sticky-announcements',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '351f0377-c802-4ae7-bc7b-24bd87e106b6';
    $display->content['new-351f0377-c802-4ae7-bc7b-24bd87e106b6'] = $pane;
    $display->panels['directorate_tools'][4] = 'new-351f0377-c802-4ae7-bc7b-24bd87e106b6';
    $pane = new stdClass();
    $pane->pid = 'new-e7191a31-6da2-4013-a819-8bfffb1b3700';
    $pane->panel = 'directorate_tools';
    $pane->type = 'block';
    $pane->subtype = 'block-35';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'e7191a31-6da2-4013-a819-8bfffb1b3700';
    $display->content['new-e7191a31-6da2-4013-a819-8bfffb1b3700'] = $pane;
    $display->panels['directorate_tools'][5] = 'new-e7191a31-6da2-4013-a819-8bfffb1b3700';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_2'] = $handler;

  return $export;
}
