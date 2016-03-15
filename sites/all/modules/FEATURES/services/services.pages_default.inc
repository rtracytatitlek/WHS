<?php
/**
 * @file
 * services.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function services_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -26;
  $handler->conf = array(
    'title' => '[Disabled] Service - category landing page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'service-category-page',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'String',
        'keyword' => 'string',
        'name' => 'string',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'PHP - vocabulary level = services',
            'php' => '$WhichTerm=arg(2);

$Term=taxonomy_term_load($WhichTerm);

//2 is the VID for SERVICES (master list only -- the individual service categories are their own VID\'s).
if ($Term->vid==2) {return TRUE;}else{return FALSE;}',
          ),
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
          0 => 1,
          1 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left_nav',
          1 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '75.3845946848248',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'left_nav' => array(
        'type' => 'region',
        'title' => 'Left Nav',
        'width' => '24.61540531517519',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'breadcrumb',
          1 => 'print_pdf_email',
        ),
        'parent' => 'main',
        'class' => 'information',
      ),
      'breadcrumb' => array(
        'type' => 'region',
        'title' => 'Breadcrumb',
        'width' => '71.26609681167726',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      'print_pdf_email' => array(
        'type' => 'region',
        'title' => 'Print PDF Email',
        'width' => '28.73390318832275',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'left_nav' => NULL,
      'breadcrumb' => NULL,
      'print_pdf_email' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e2ceb13e-944c-4e55-89ac-08d26ad0e76f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c8f4483d-f11d-4985-9af3-601436f85a3c';
    $pane->panel = 'breadcrumb';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Breadcrumb function',
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
    $pane->uuid = 'c8f4483d-f11d-4985-9af3-601436f85a3c';
    $display->content['new-c8f4483d-f11d-4985-9af3-601436f85a3c'] = $pane;
    $display->panels['breadcrumb'][0] = 'new-c8f4483d-f11d-4985-9af3-601436f85a3c';
    $pane = new stdClass();
    $pane->pid = 'new-5cf6aec8-f4b8-4dc1-afbb-de7b61e175c3';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Contracting and Procurement header',
      'title' => '',
      'body' => '<?php
echo \'<h2>\';

$temp=$_REQUEST[\'q\'];
$Tpath=explode(\'/\',$temp);

//Tpath[1] == service category
//Tpath[2] == service program landing page

$menu_name=str_replace("-"," ",$Tpath[1]);
$menu_name=strtoupper($menu_name);

echo arg(1).\'-\'.arg(2);

echo $menu_name;

echo \'</h2>\';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5cf6aec8-f4b8-4dc1-afbb-de7b61e175c3';
    $display->content['new-5cf6aec8-f4b8-4dc1-afbb-de7b61e175c3'] = $pane;
    $display->panels['center'][0] = 'new-5cf6aec8-f4b8-4dc1-afbb-de7b61e175c3';
    $pane = new stdClass();
    $pane->pid = 'new-8a7886d7-5c45-46f4-a595-9142107c05f0';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'taxonomy_term_title_with_picture';
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
        0 => 'argument_term_1.tid',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8a7886d7-5c45-46f4-a595-9142107c05f0';
    $display->content['new-8a7886d7-5c45-46f4-a595-9142107c05f0'] = $pane;
    $display->panels['center'][1] = 'new-8a7886d7-5c45-46f4-a595-9142107c05f0';
    $pane = new stdClass();
    $pane->pid = 'new-d9e215a8-fa0b-4479-a85f-25de3d5417f1';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'DIV CONTAINER',
      'title' => '',
      'body' => '<div class="alpha-list-and-results">',
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
    $pane->uuid = 'd9e215a8-fa0b-4479-a85f-25de3d5417f1';
    $display->content['new-d9e215a8-fa0b-4479-a85f-25de3d5417f1'] = $pane;
    $display->panels['center'][2] = 'new-d9e215a8-fa0b-4479-a85f-25de3d5417f1';
    $pane = new stdClass();
    $pane->pid = 'new-bd520e30-1636-49fe-95de-b423ce20717d';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Alpha on page jump menu',
      'title' => '',
      'body' => '<?php
//This is code that will be reused by every service main page, so we are storing it in the WHS Custom module (under sites/all/modules/CUSTOM)
display_alpha_menu();
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'bd520e30-1636-49fe-95de-b423ce20717d';
    $display->content['new-bd520e30-1636-49fe-95de-b423ce20717d'] = $pane;
    $display->panels['center'][3] = 'new-bd520e30-1636-49fe-95de-b423ce20717d';
    $pane = new stdClass();
    $pane->pid = 'new-d338bae0-d05f-4319-b059-5abf282dcaf3';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'contracting_and_procurement_menu_descriptions';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '500',
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
      'override_title_text' => '',
      'context' => array(
        0 => '',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'd338bae0-d05f-4319-b059-5abf282dcaf3';
    $display->content['new-d338bae0-d05f-4319-b059-5abf282dcaf3'] = $pane;
    $display->panels['center'][4] = 'new-d338bae0-d05f-4319-b059-5abf282dcaf3';
    $pane = new stdClass();
    $pane->pid = 'new-6f303ecb-516f-4a51-bdc6-92950764b984';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'CLOSE DIV CONTAINER',
      'title' => '',
      'body' => '</div>
<!-- End alpha-list-and-results -->',
      'format' => 'php_code',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '6f303ecb-516f-4a51-bdc6-92950764b984';
    $display->content['new-6f303ecb-516f-4a51-bdc6-92950764b984'] = $pane;
    $display->panels['center'][5] = 'new-6f303ecb-516f-4a51-bdc6-92950764b984';
    $pane = new stdClass();
    $pane->pid = 'new-71abe52f-44a1-4b9a-88e2-33d4fca99cb4';
    $pane->panel = 'left_nav';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Menu title',
      'title' => '',
      'body' => '<?php
echo \'<h2>\';

$TermID=arg(2);
$Term=taxonomy_term_load($TermID);
$menu_name=$Term->name;

$menu_name=strtoupper($menu_name);

echo $menu_name;

echo \'</h2>\';
?>
',
      'format' => 'php_code',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'left-nav-menu',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '71abe52f-44a1-4b9a-88e2-33d4fca99cb4';
    $display->content['new-71abe52f-44a1-4b9a-88e2-33d4fca99cb4'] = $pane;
    $display->panels['left_nav'][0] = 'new-71abe52f-44a1-4b9a-88e2-33d4fca99cb4';
    $pane = new stdClass();
    $pane->pid = 'new-758eb922-d1cf-4633-9d7d-914d2770b727';
    $pane->panel = 'left_nav';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'left-nav menu',
      'title' => '',
      'body' => '<?php
display_service_category_menu($TID);

?>',
      'format' => 'php_code',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'left-nav-menu',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '758eb922-d1cf-4633-9d7d-914d2770b727';
    $display->content['new-758eb922-d1cf-4633-9d7d-914d2770b727'] = $pane;
    $display->panels['left_nav'][1] = 'new-758eb922-d1cf-4633-9d7d-914d2770b727';
    $pane = new stdClass();
    $pane->pid = 'new-7228efdd-db2c-48ea-9bd3-afdc06d71184';
    $pane->panel = 'print_pdf_email';
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
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7228efdd-db2c-48ea-9bd3-afdc06d71184';
    $display->content['new-7228efdd-db2c-48ea-9bd3-afdc06d71184'] = $pane;
    $display->panels['print_pdf_email'][0] = 'new-7228efdd-db2c-48ea-9bd3-afdc06d71184';
    $pane = new stdClass();
    $pane->pid = 'new-2e83e195-6d49-438c-9007-c3d2613dd8be';
    $pane->panel = 'print_pdf_email';
    $pane->type = 'custom';
    $pane->subtype = 'display_favorites';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '2e83e195-6d49-438c-9007-c3d2613dd8be';
    $display->content['new-2e83e195-6d49-438c-9007-c3d2613dd8be'] = $pane;
    $display->panels['print_pdf_email'][1] = 'new-2e83e195-6d49-438c-9007-c3d2613dd8be';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context_2';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -27;
  $handler->conf = array(
    'title' => '[disabled] Services - program landing page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'service-program-landing',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'String',
        'keyword' => 'string',
        'name' => 'string',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'Is this a service program landing page?',
            'php' => '$TID=arg(2);
$WhichTemplate=taxonomy_template($TID);
if ($WhichTemplate=="program") {return true;}else{return false;}',
          ),
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
          0 => 1,
          1 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left_nav',
          1 => 'center',
          2 => 'right_sidebar',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '51.12246311942066',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'left_nav' => array(
        'type' => 'region',
        'title' => 'Left Nav',
        'width' => '24.61540531517519',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'breadcrumb',
          1 => 'print_pdf_email',
        ),
        'parent' => 'main',
        'class' => 'information',
      ),
      'breadcrumb' => array(
        'type' => 'region',
        'title' => 'Breadcrumb',
        'width' => '70.55570829080617',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      'print_pdf_email' => array(
        'type' => 'region',
        'title' => 'Print PDF Email',
        'width' => '29.44429170919383',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      'right_sidebar' => array(
        'type' => 'region',
        'title' => 'Right sidebar',
        'width' => '24.262131565403337',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'right-sidebar',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'left_nav' => NULL,
      'breadcrumb' => NULL,
      'print_pdf_email' => NULL,
      'right_sidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e2ceb13e-944c-4e55-89ac-08d26ad0e76f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c8f4483d-f11d-4985-9af3-601436f85a3c';
    $pane->panel = 'breadcrumb';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Breadcrumb function',
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
    $pane->uuid = 'c8f4483d-f11d-4985-9af3-601436f85a3c';
    $display->content['new-c8f4483d-f11d-4985-9af3-601436f85a3c'] = $pane;
    $display->panels['breadcrumb'][0] = 'new-c8f4483d-f11d-4985-9af3-601436f85a3c';
    $pane = new stdClass();
    $pane->pid = 'new-50727be3-271e-451c-a882-f1e4a50e4814';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'taxonomy_term_title_with_picture';
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
        0 => 'argument_term_1.tid',
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '50727be3-271e-451c-a882-f1e4a50e4814';
    $display->content['new-50727be3-271e-451c-a882-f1e4a50e4814'] = $pane;
    $display->panels['center'][0] = 'new-50727be3-271e-451c-a882-f1e4a50e4814';
    $pane = new stdClass();
    $pane->pid = 'new-ba06bbec-6063-4a7d-8a8c-bd75bf634a21';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'service_program_landing_page_descriptions_c_p_fsa_etc_';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '500',
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
      'override_title_text' => '',
      'context' => array(
        0 => 'argument_term_1.tid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'service-program-landing-description',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ba06bbec-6063-4a7d-8a8c-bd75bf634a21';
    $display->content['new-ba06bbec-6063-4a7d-8a8c-bd75bf634a21'] = $pane;
    $display->panels['center'][1] = 'new-ba06bbec-6063-4a7d-8a8c-bd75bf634a21';
    $pane = new stdClass();
    $pane->pid = 'new-362e7587-4997-475b-bcd1-019a40ea741d';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Service Elgibility Bar',
      'title' => '',
      'body' => '<div class="program-service-bar" style="width:100%;">
  <span class="program-service-bar-text">Service Eligibility</span>
</div>',
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
    $pane->uuid = '362e7587-4997-475b-bcd1-019a40ea741d';
    $display->content['new-362e7587-4997-475b-bcd1-019a40ea741d'] = $pane;
    $display->panels['center'][2] = 'new-362e7587-4997-475b-bcd1-019a40ea741d';
    $pane = new stdClass();
    $pane->pid = 'new-7fe1897e-cf30-4ab1-aa4b-c0b988c19db7';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'serivce_program_landing_page_eligibility_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '500',
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
        0 => 'argument_term_1.tid',
      ),
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'service-program-landing-eligibility',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '7fe1897e-cf30-4ab1-aa4b-c0b988c19db7';
    $display->content['new-7fe1897e-cf30-4ab1-aa4b-c0b988c19db7'] = $pane;
    $display->panels['center'][3] = 'new-7fe1897e-cf30-4ab1-aa4b-c0b988c19db7';
    $pane = new stdClass();
    $pane->pid = 'new-65948c00-4dbc-4865-a69e-148f174f3410';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Related Links for this service program',
      'title' => '',
      'body' => '<div class="program-service-bar" style="width:100%;">
  <span class="program-service-bar-text">Related Links</span>
</div>
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '65948c00-4dbc-4865-a69e-148f174f3410';
    $display->content['new-65948c00-4dbc-4865-a69e-148f174f3410'] = $pane;
    $display->panels['center'][4] = 'new-65948c00-4dbc-4865-a69e-148f174f3410';
    $pane = new stdClass();
    $pane->pid = 'new-3bdf7ac9-b2be-4b72-b081-e6074e9a074e';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'service_program_related_links';
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
        0 => 'argument_term_1.tid',
      ),
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'service-program-landing-links',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '3bdf7ac9-b2be-4b72-b081-e6074e9a074e';
    $display->content['new-3bdf7ac9-b2be-4b72-b081-e6074e9a074e'] = $pane;
    $display->panels['center'][5] = 'new-3bdf7ac9-b2be-4b72-b081-e6074e9a074e';
    $pane = new stdClass();
    $pane->pid = 'new-00e42976-6440-46e3-b7de-ac8492c131c1';
    $pane->panel = 'left_nav';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Menu title',
      'title' => '',
      'body' => '<?php
$tid=arg(2);
echo display_title($tid);
?>
',
      'format' => 'php_code',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'left-nav-menu',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '00e42976-6440-46e3-b7de-ac8492c131c1';
    $display->content['new-00e42976-6440-46e3-b7de-ac8492c131c1'] = $pane;
    $display->panels['left_nav'][0] = 'new-00e42976-6440-46e3-b7de-ac8492c131c1';
    $pane = new stdClass();
    $pane->pid = 'new-fa6eb8c9-f71d-4beb-a0d5-e938e0daa195';
    $pane->panel = 'left_nav';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Load taoxonomy menu based on path',
      'title' => '',
      'body' => '<?php
display_service_sub_page_menu(arg(2));
?>
',
      'format' => 'php_code',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'left-nav-menu',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'fa6eb8c9-f71d-4beb-a0d5-e938e0daa195';
    $display->content['new-fa6eb8c9-f71d-4beb-a0d5-e938e0daa195'] = $pane;
    $display->panels['left_nav'][1] = 'new-fa6eb8c9-f71d-4beb-a0d5-e938e0daa195';
    $pane = new stdClass();
    $pane->pid = 'new-1f91e607-8d9b-4fe2-b3df-9bd9ed82b04b';
    $pane->panel = 'print_pdf_email';
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
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1f91e607-8d9b-4fe2-b3df-9bd9ed82b04b';
    $display->content['new-1f91e607-8d9b-4fe2-b3df-9bd9ed82b04b'] = $pane;
    $display->panels['print_pdf_email'][0] = 'new-1f91e607-8d9b-4fe2-b3df-9bd9ed82b04b';
    $pane = new stdClass();
    $pane->pid = 'new-a3c7e49e-5f36-4064-850a-839f20807d3e';
    $pane->panel = 'print_pdf_email';
    $pane->type = 'custom';
    $pane->subtype = 'display_favorites';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a3c7e49e-5f36-4064-850a-839f20807d3e';
    $display->content['new-a3c7e49e-5f36-4064-850a-839f20807d3e'] = $pane;
    $display->panels['print_pdf_email'][1] = 'new-a3c7e49e-5f36-4064-850a-839f20807d3e';
    $pane = new stdClass();
    $pane->pid = 'new-8f868d75-1d97-4c77-80fa-77992de8d4e6';
    $pane->panel = 'right_sidebar';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Program Detail',
      'title' => '',
      'body' => '<?php
//Stored in the WHS customo module to make modification easier.

echo \'TEST taxonomy template\';

display_program_detail_button(arg(2));
?>',
      'format' => 'php_code',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'whs-program-detail-pane',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8f868d75-1d97-4c77-80fa-77992de8d4e6';
    $display->content['new-8f868d75-1d97-4c77-80fa-77992de8d4e6'] = $pane;
    $display->panels['right_sidebar'][0] = 'new-8f868d75-1d97-4c77-80fa-77992de8d4e6';
    $pane = new stdClass();
    $pane->pid = 'new-ad4c77ae-b4da-4279-ab08-fd7d5882d1bc';
    $pane->panel = 'right_sidebar';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Contact Us Header',
      'title' => '',
      'body' => '<div class="program_contact_header">
  <span class="header_text">How Do I Get This Service?</span>
</div>',
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
    $pane->uuid = 'ad4c77ae-b4da-4279-ab08-fd7d5882d1bc';
    $display->content['new-ad4c77ae-b4da-4279-ab08-fd7d5882d1bc'] = $pane;
    $display->panels['right_sidebar'][1] = 'new-ad4c77ae-b4da-4279-ab08-fd7d5882d1bc';
    $pane = new stdClass();
    $pane->pid = 'new-58a41b86-3a0f-4d92-bb7f-d14c6c9707e8';
    $pane->panel = 'right_sidebar';
    $pane->type = 'views';
    $pane->subtype = 'service_program_contact';
    $pane->shown = FALSE;
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
        0 => 'argument_term_1.tid',
      ),
      'override_title' => 1,
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '58a41b86-3a0f-4d92-bb7f-d14c6c9707e8';
    $display->content['new-58a41b86-3a0f-4d92-bb7f-d14c6c9707e8'] = $pane;
    $display->panels['right_sidebar'][2] = 'new-58a41b86-3a0f-4d92-bb7f-d14c6c9707e8';
    $pane = new stdClass();
    $pane->pid = 'new-705346ef-1234-418e-b4e7-ff3121c7870d';
    $pane->panel = 'right_sidebar';
    $pane->type = 'views';
    $pane->subtype = 'service_program_landing_page_contact_us';
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
        0 => 'argument_term_1.tid',
      ),
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'program-contact-body',
      'css_class' => 'service-program-landing-page',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '705346ef-1234-418e-b4e7-ff3121c7870d';
    $display->content['new-705346ef-1234-418e-b4e7-ff3121c7870d'] = $pane;
    $display->panels['right_sidebar'][3] = 'new-705346ef-1234-418e-b4e7-ff3121c7870d';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context_2'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context_3';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => '[disabled] Services - program sub page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'service-sub-program',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'String',
        'keyword' => 'string',
        'name' => 'string',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'Test template field',
            'php' => '$TID=arg(2);
$WhichTemplate=taxonomy_template($TID);
if ($WhichTemplate=="detail") {return true;}else{return false;}',
          ),
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
          0 => 1,
          1 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left_nav',
          1 => 'center',
          2 => 'right_sidebar',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '54.84866163968145',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'left_nav' => array(
        'type' => 'region',
        'title' => 'Left Nav',
        'width' => '24.61540531517519',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'breadcrumb',
          1 => 'print_pdf_email',
        ),
        'parent' => 'main',
        'class' => 'information',
      ),
      'breadcrumb' => array(
        'type' => 'region',
        'title' => 'Breadcrumb',
        'width' => '70.55570829080617',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      'print_pdf_email' => array(
        'type' => 'region',
        'title' => 'Print PDF Email',
        'width' => '29.44429170919383',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      'right_sidebar' => array(
        'type' => 'region',
        'title' => 'Right sidebar',
        'width' => '20.53593304514254',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'right-sidebar',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'left_nav' => NULL,
      'breadcrumb' => NULL,
      'print_pdf_email' => NULL,
      'right_sidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e2ceb13e-944c-4e55-89ac-08d26ad0e76f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c8f4483d-f11d-4985-9af3-601436f85a3c';
    $pane->panel = 'breadcrumb';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Breadcrumb function',
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
    $pane->uuid = 'c8f4483d-f11d-4985-9af3-601436f85a3c';
    $display->content['new-c8f4483d-f11d-4985-9af3-601436f85a3c'] = $pane;
    $display->panels['breadcrumb'][0] = 'new-c8f4483d-f11d-4985-9af3-601436f85a3c';
    $pane = new stdClass();
    $pane->pid = 'new-5220a9a5-220d-43f8-bc17-d76c4a171fe2';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'taxonomy_term_title_with_picture';
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
        0 => 'argument_term_1.tid',
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5220a9a5-220d-43f8-bc17-d76c4a171fe2';
    $display->content['new-5220a9a5-220d-43f8-bc17-d76c4a171fe2'] = $pane;
    $display->panels['center'][0] = 'new-5220a9a5-220d-43f8-bc17-d76c4a171fe2';
    $pane = new stdClass();
    $pane->pid = 'new-c8813a55-35c8-45d1-a376-fd82875fbc18';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'service_program_sub_page_description';
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
        0 => 'argument_term_1.tid',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c8813a55-35c8-45d1-a376-fd82875fbc18';
    $display->content['new-c8813a55-35c8-45d1-a376-fd82875fbc18'] = $pane;
    $display->panels['center'][1] = 'new-c8813a55-35c8-45d1-a376-fd82875fbc18';
    $pane = new stdClass();
    $pane->pid = 'new-362e7587-4997-475b-bcd1-019a40ea741d';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Divider bar -- not sure if we will need this',
      'title' => '',
      'body' => '<div class="program-service-bar" style="width:100%;">
  <span class="program-service-bar-text">Service Eligibility</span>
</div>',
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
    $pane->uuid = '362e7587-4997-475b-bcd1-019a40ea741d';
    $display->content['new-362e7587-4997-475b-bcd1-019a40ea741d'] = $pane;
    $display->panels['center'][2] = 'new-362e7587-4997-475b-bcd1-019a40ea741d';
    $pane = new stdClass();
    $pane->pid = 'new-714f2074-aa4c-43db-8dd3-ee94ffb978f1';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'service_program_detail_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '10',
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
        0 => 'argument_term_1.tid',
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
    $pane->uuid = '714f2074-aa4c-43db-8dd3-ee94ffb978f1';
    $display->content['new-714f2074-aa4c-43db-8dd3-ee94ffb978f1'] = $pane;
    $display->panels['center'][3] = 'new-714f2074-aa4c-43db-8dd3-ee94ffb978f1';
    $pane = new stdClass();
    $pane->pid = 'new-e9688391-4848-40f5-9c45-107c582c1d20';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'services_program_sub_page_body';
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
        0 => 'argument_term_1.tid',
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'e9688391-4848-40f5-9c45-107c582c1d20';
    $display->content['new-e9688391-4848-40f5-9c45-107c582c1d20'] = $pane;
    $display->panels['center'][4] = 'new-e9688391-4848-40f5-9c45-107c582c1d20';
    $pane = new stdClass();
    $pane->pid = 'new-00e42976-6440-46e3-b7de-ac8492c131c1';
    $pane->panel = 'left_nav';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Menu title',
      'title' => '',
      'body' => '<?php
//THis is the detail TID
$tid=arg(2);

$parent=taxonomy_get_parents_all($tid);
//parent[0] is self
//parent[1] is next level up (for a details page, that is the program parent)

echo display_title($parent[1]->tid);

echo \'</h2>\';
?>
',
      'format' => 'php_code',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'left-nav-menu',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '00e42976-6440-46e3-b7de-ac8492c131c1';
    $display->content['new-00e42976-6440-46e3-b7de-ac8492c131c1'] = $pane;
    $display->panels['left_nav'][0] = 'new-00e42976-6440-46e3-b7de-ac8492c131c1';
    $pane = new stdClass();
    $pane->pid = 'new-fa6eb8c9-f71d-4beb-a0d5-e938e0daa195';
    $pane->panel = 'left_nav';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Load taoxonomy menu based on path',
      'title' => '',
      'body' => '<?php
$TID=arg(2);

//Get the parent -- this has all the options (of which the current page is one)
$parent=taxonomy_get_parents_all($TID);


//Now get the options for this service program
display_service_sub_page_menu($parent[1]->tid);

?>',
      'format' => 'php_code',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'left-nav-menu',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'fa6eb8c9-f71d-4beb-a0d5-e938e0daa195';
    $display->content['new-fa6eb8c9-f71d-4beb-a0d5-e938e0daa195'] = $pane;
    $display->panels['left_nav'][1] = 'new-fa6eb8c9-f71d-4beb-a0d5-e938e0daa195';
    $pane = new stdClass();
    $pane->pid = 'new-f44d67b4-86dd-4151-8d39-03a489173c6a';
    $pane->panel = 'print_pdf_email';
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
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f44d67b4-86dd-4151-8d39-03a489173c6a';
    $display->content['new-f44d67b4-86dd-4151-8d39-03a489173c6a'] = $pane;
    $display->panels['print_pdf_email'][0] = 'new-f44d67b4-86dd-4151-8d39-03a489173c6a';
    $pane = new stdClass();
    $pane->pid = 'new-0fbc5d60-b07c-4089-82ed-c95b015a7005';
    $pane->panel = 'print_pdf_email';
    $pane->type = 'custom';
    $pane->subtype = 'display_favorites';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '0fbc5d60-b07c-4089-82ed-c95b015a7005';
    $display->content['new-0fbc5d60-b07c-4089-82ed-c95b015a7005'] = $pane;
    $display->panels['print_pdf_email'][1] = 'new-0fbc5d60-b07c-4089-82ed-c95b015a7005';
    $pane = new stdClass();
    $pane->pid = 'new-f77d684a-bb99-48ba-b94f-629fe90bba18';
    $pane->panel = 'right_sidebar';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Contact Header',
      'title' => '',
      'body' => '<div class="program_contact_header">
  <span class="header_text">Contact Us</span>
</div>',
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
    $pane->uuid = 'f77d684a-bb99-48ba-b94f-629fe90bba18';
    $display->content['new-f77d684a-bb99-48ba-b94f-629fe90bba18'] = $pane;
    $display->panels['right_sidebar'][0] = 'new-f77d684a-bb99-48ba-b94f-629fe90bba18';
    $pane = new stdClass();
    $pane->pid = 'new-f445d123-bddc-4698-b78f-69ea02d41082';
    $pane->panel = 'right_sidebar';
    $pane->type = 'views';
    $pane->subtype = 'serivce_pogram_sub_page_contact';
    $pane->shown = FALSE;
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
        0 => 'argument_term_1.tid',
      ),
      'override_title' => 1,
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
    $pane->uuid = 'f445d123-bddc-4698-b78f-69ea02d41082';
    $display->content['new-f445d123-bddc-4698-b78f-69ea02d41082'] = $pane;
    $display->panels['right_sidebar'][1] = 'new-f445d123-bddc-4698-b78f-69ea02d41082';
    $pane = new stdClass();
    $pane->pid = 'new-19059842-5d2d-4e68-bff1-20787fc2928d';
    $pane->panel = 'right_sidebar';
    $pane->type = 'views';
    $pane->subtype = 'service_program_sub_page_contact_us';
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
        0 => 'argument_term_1.tid',
      ),
      'override_title' => 1,
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '19059842-5d2d-4e68-bff1-20787fc2928d';
    $display->content['new-19059842-5d2d-4e68-bff1-20787fc2928d'] = $pane;
    $display->panels['right_sidebar'][2] = 'new-19059842-5d2d-4e68-bff1-20787fc2928d';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context_3'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context_4';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -25;
  $handler->conf = array(
    'title' => '[disabled] Commuter Type landing page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => '',
            'php' => '//Path constructor is set in config->search->url settings.
//home/commuter/[term]
//$path is alias, not term.  arg() returns term/vocab actual values.
$temp=$_REQUEST[\'q\'];
$path=explode(\'/\',$temp);

//Path[0] == SERVICES
//Path[1] == service category
//Path[2] == service program landing page
//Path[3] == either the location (pentagon/mark, etc.) or the service program description page
//Path[4] == only set to location if Path[4] == program description page

//Can\'t test for !isset due to a single ending "/" on the url will return a null value for the last item in path -- but that is still considered set.
if ($path[0]=="commuter" && isset($path[1])){
  return true;
}else{
  return false;
}',
          ),
          'not' => FALSE,
        ),
      ),
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
          0 => 1,
          1 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left_nav_menu',
          1 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '69.7322057787174',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'left_nav_menu' => array(
        'type' => 'region',
        'title' => 'left-nav-menu',
        'width' => '30.267794221282596',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'left-nav-menu',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'bread_crumbs',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'bread_crumbs' => array(
        'type' => 'region',
        'title' => 'Bread Crumbs',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => 'breadcrumbs',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'left_nav_menu' => NULL,
      'bread_crumbs' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b646040f-5d32-4351-a266-44a9b93f737c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a0a00813-172f-4e58-a376-6684ff7c6052';
    $pane->panel = 'bread_crumbs';
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
    $pane->uuid = 'a0a00813-172f-4e58-a376-6684ff7c6052';
    $display->content['new-a0a00813-172f-4e58-a376-6684ff7c6052'] = $pane;
    $display->panels['bread_crumbs'][0] = 'new-a0a00813-172f-4e58-a376-6684ff7c6052';
    $pane = new stdClass();
    $pane->pid = 'new-e3485690-4ec2-4ab7-81fc-b442a4a186f9';
    $pane->panel = 'center';
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
        0 => 'argument_term_1.tid',
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e3485690-4ec2-4ab7-81fc-b442a4a186f9';
    $display->content['new-e3485690-4ec2-4ab7-81fc-b442a4a186f9'] = $pane;
    $display->panels['center'][0] = 'new-e3485690-4ec2-4ab7-81fc-b442a4a186f9';
    $pane = new stdClass();
    $pane->pid = 'new-1f9a40cf-9f9d-4ded-a9cb-8a555bf80d69';
    $pane->panel = 'left_nav_menu';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Menu Title',
      'title' => '',
      'body' => '<?php
echo \'<h2>\';

$temp=$_REQUEST[\'q\'];
$Tpath=explode(\'/\',$temp);

//Tpath[0] == "commuter"
//Tpath[1] == [Commuter Type]

$menu_name=str_replace("-"," ",$Tpath[1]);
$menu_name=strtoupper($menu_name);

echo $menu_name;

echo \'</h2>\';
?>
',
      'format' => 'php_code',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'left-nav-menu',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1f9a40cf-9f9d-4ded-a9cb-8a555bf80d69';
    $display->content['new-1f9a40cf-9f9d-4ded-a9cb-8a555bf80d69'] = $pane;
    $display->panels['left_nav_menu'][0] = 'new-1f9a40cf-9f9d-4ded-a9cb-8a555bf80d69';
    $pane = new stdClass();
    $pane->pid = 'new-39abf02b-2349-4574-823a-fa23f1c28650';
    $pane->panel = 'left_nav_menu';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Menu children of commuter pages',
      'title' => '',
      'body' => '<?php
//Located in custom WHS module
display_children_menu(arg(2));
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
    $pane->uuid = '39abf02b-2349-4574-823a-fa23f1c28650';
    $display->content['new-39abf02b-2349-4574-823a-fa23f1c28650'] = $pane;
    $display->panels['left_nav_menu'][1] = 'new-39abf02b-2349-4574-823a-fa23f1c28650';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context_4'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context_5';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Services - Main Landing Page',
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
          'name' => 'php',
          'settings' => array(
            'description' => 'If this is a "services" vocab entry',
            'php' => '$WhichTerm=arg(2);

$Term=taxonomy_term_load($WhichTerm);

//2 is the VID for SERVICES (master list only -- the individual service categories are their own VID\'s).
if ($Term->vid==2) {return TRUE;}else{return FALSE;}',
          ),
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

//We need to load the taxonomy term (that\'s what is actually in the URL)
//arg(x)
//(0) = taxonomy
//(1) = term
//(2) = TID

$term=taxonomy_term_load(arg(2));
$title=strtoupper($term->name);

  echo \'<div class="directorate_title">\';
   echo \'<h2>\';
     echo \'SERVICES: \'.$title;
   echo \'</h2>\';
  echo \'</div>\';

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
    $pane->pid = 'new-6660acb9-0a2d-4a3f-98e1-8f593a093205';
    $pane->panel = 'directorate_table';
    $pane->type = 'block';
    $pane->subtype = 'quicktabs-whs_services_tabs';
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
    $pane->uuid = '6660acb9-0a2d-4a3f-98e1-8f593a093205';
    $display->content['new-6660acb9-0a2d-4a3f-98e1-8f593a093205'] = $pane;
    $display->panels['directorate_table'][2] = 'new-6660acb9-0a2d-4a3f-98e1-8f593a093205';
    $pane = new stdClass();
    $pane->pid = 'new-f1f3945b-4f08-45ce-8a5e-1be2a23ea849';
    $pane->panel = 'directorate_table';
    $pane->type = 'views';
    $pane->subtype = 'announcements_whs_dir';
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
    $pane->uuid = 'f1f3945b-4f08-45ce-8a5e-1be2a23ea849';
    $display->content['new-f1f3945b-4f08-45ce-8a5e-1be2a23ea849'] = $pane;
    $display->panels['directorate_table'][3] = 'new-f1f3945b-4f08-45ce-8a5e-1be2a23ea849';
    $pane = new stdClass();
    $pane->pid = 'new-94c8d1ad-5fa0-4f04-ad02-1a1e0d34a1f5';
    $pane->panel = 'directorate_table';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = FALSE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'Only show if NON-COMMUTER PAGE',
            'php' => 'if (!isset($_REQUEST[\'commuter\'])) {return TRUE;}else{return FALSE;}',
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Quicktabs Jquery on the Panel',
      'title' => '',
      'body' => '<?php

// CONTROL WHICH TABS ARE SHOWN HERE - presently just TID flag in the URL.  Could be expanded as needed.
$WHS_default=TRUE;
$WhichDir=$_REQUEST[\'DID\'];
$WhichAnnouncement=$_REQUEST[\'announcement\'];
$page_type="";

if ($WhichDir!="" && $WhichDir!=0) {
    $page_type="main_landing";
}

if ($WhichAnnouncement!="" && $WhichAnnouncement!=0) {
    $page_type="announcement";
}

//Code for tabs on announcement page
if ($page_type=="announcement") {
  $WHS_default=FALSE;
  $node=node_load($WhichAnnouncement);
    echo \'
   <script>
      //Equivalent in DRUPAL to document.ready
       (function($){
       for (x=0; x<20;x=x+1){
         $(".tab"+x).hide();
       }
       //Change the tab to show this is an announcement
       $(".tab9 a").text("Announcement: \'.$node->title.\'");
       $(".tab9").show();
       })(jQuery);
    </script>
    \';
  return;
}//End checking if this is a directorate landing page.



//Code for DIRECTORATE INFORMATION page (home page/landing page) would go here.
if ($page_type=="main_landing") {
  global $user;
  $WHS_default=FALSE;

  //If the user is not logged, then hide favorites.  Can\'t store favorites if you don\'t have an account.
  //SRH Nov 2015

    echo \'
   <script>
      //Equivalent in DRUPAL to document.ready
       (function($){
    \';

    //Only knock out favorites if we are NOT logged in
    if ($user->uid==0) {
      echo \'
          //Favorites
          $(".tab6").hide();   
      \';
    } //End checking if we are signed in
    
    echo \'
          //Tabs for program pages
          $(".tab3").hide(); 
          $(".tab4").hide(); 
          $(".tab5").hide(); 
          $(".tab7").hide(); 
          //Announcement
          $(".tab9").hide();
       })(jQuery);
    </script>
    \';
  return;
}//End checking if this is a directorate landing page.


//Check to see if this is a PROGRAM / SUB-PROGRAM page
if (isset($_REQUEST[\'tid\'])) {
  $WHS_default=FALSE;
//Determine if this is a program landing page or description landing page (services).  This is controlled by a field on the taxonomy term
$term=taxonomy_term_load($_REQUEST[\'tid\']);

if ($term!="") {
  $page_type=$term->field_select_a_page_template[\'und\'][0][\'value\'];
}

if ($page_type!="detail"){
    //PROGRAM PAGE
    //If this is a program landing page, hide the tabs from the normal home page, and show the tabs related to service content.  This is done on the QUICKTABS on the home page.  See QUICKTABS under
    //admin->services
    echo \'
   <script>
      //Equivalent in DRUPAL to document.ready
       (function($){
          //NOTE!  Tabs are described on the QUICKTABS page (the first one is 0 and proceeds from there).  "tabXX" is assigned in the CODE as a hack to QUICKTABS.  See line 638
         //Three directorate/homepage tabs get hidden on the service page.
         for (x=0; x<3;x=x+1){
           $(".tab"+x).hide();
         }
        //Favorites
        $(".tab6").hide();   
       //Top Tools
        $(".tab8").hide();
       //Announcements
        $(".tab9").hide();

       //Show the tabs related to SERVICES
        $(".tab3").show(); 
        $(".tab4").show(); 
        $(".tab5").show(); 
        $(".tab7").show(); 
    })(jQuery);
    </script>
    \';
  }else{  //DETAIL page
    echo \'
   <script>
      //Equivalent in DRUPAL to document.ready
       (function($){
          //NOTE!  Tabs are described on the QUICKTABS page (the first one is 0 and proceeds from there).  "tabXX" is assigned in the CODE as a hack to QUICKTABS.  See line 638
         //Three directorate/homepage tabs get hidden on the service page.

    for (x=0; x<20;x=x+1){
      $(".tab"+x).hide();
    }

    $(".tab3").show();
    $(".tab3 a").html("Service Detail Page");

    })(jQuery);
    </script>
    \';
  }//End checking for detail/program service page

}else{  
    //Anything else that is NOT a service page.
  echo \'
 <script>
   //Equivalent in DRUPAL to document.ready
  (function($){
    //NOTE!  Tabs are described on the QUICKTABS page (the first one is 0 and proceeds from there).  "tabXX" is assigned in the CODE as a hack to QUICKTABS.  See line 638
    //Three directorate/homepage tabs get shown on NON-service page.
    for (x=0; x<3;x=x+1){
      $(".tab"+x).show();
    }
    $(".tab6").show(); //Favorite

    //Hide the tabs related to SERVICES
    $(".tab3").hide();  //Information
    $(".tab4").hide();  //Service Eligibility
    $(".tab5").hide();  //Related Links
    $(".tab7").hide(); //How to obtain
    $(".tab9").hide(); //Announcements
  })(jQuery);
</script>
\';

} //End checking if this is a TID page (service) or not

if ($WHS_default==TRUE) {
  echo \'
   <script>
      //Equivalent in DRUPAL to document.ready
       (function($){
          //NOTE!  Tabs are described on the QUICKTABS page (the first one is 0 and proceeds from there).  "tabXX" is assigned in the CODE as a hack to QUICKTABS.  See line 638
         //Three directorate/homepage tabs get hidden on the service page.
         for (x=0; x<20;x=x+1){
           $(".tab"+x).hide();
         }
        //Show the services only tab
        $(".tab2").css("margin-left","37px");
        $(".tab2").show();

        //Clear the title
        $(".directorate_title h2").text("WHS Service Options");

    })(jQuery);
    </script>
    \';
}


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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '94c8d1ad-5fa0-4f04-ad02-1a1e0d34a1f5';
    $display->content['new-94c8d1ad-5fa0-4f04-ad02-1a1e0d34a1f5'] = $pane;
    $display->panels['directorate_table'][4] = 'new-94c8d1ad-5fa0-4f04-ad02-1a1e0d34a1f5';
    $pane = new stdClass();
    $pane->pid = 'new-d9dd0115-918b-4ae7-9201-e449edc92825';
    $pane->panel = 'directorate_tools';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'CUSTOM -- blue bar at top of right column',
      'title' => '',
      'body' => '<div class="home_blue_bar icons"><h2>Information</h2></div>',
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
    $pane->uuid = 'd9dd0115-918b-4ae7-9201-e449edc92825';
    $display->content['new-d9dd0115-918b-4ae7-9201-e449edc92825'] = $pane;
    $display->panels['directorate_tools'][0] = 'new-d9dd0115-918b-4ae7-9201-e449edc92825';
    $pane = new stdClass();
    $pane->pid = 'new-bf9dde2c-06c1-458b-aa73-531c0c32780a';
    $pane->panel = 'directorate_tools';
    $pane->type = 'views';
    $pane->subtype = 'whs_announcements_sticky';
    $pane->shown = TRUE;
    $pane->access = array();
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
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'sticky-announcements',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'bf9dde2c-06c1-458b-aa73-531c0c32780a';
    $display->content['new-bf9dde2c-06c1-458b-aa73-531c0c32780a'] = $pane;
    $display->panels['directorate_tools'][1] = 'new-bf9dde2c-06c1-458b-aa73-531c0c32780a';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'e7191a31-6da2-4013-a819-8bfffb1b3700';
    $display->content['new-e7191a31-6da2-4013-a819-8bfffb1b3700'] = $pane;
    $display->panels['directorate_tools'][2] = 'new-e7191a31-6da2-4013-a819-8bfffb1b3700';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context_5'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context_6';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Services - Program Information Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(),
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
    $pane->pid = 'new-3f083807-e975-46ef-8a42-76c3bf752729';
    $pane->panel = 'directorate_table';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'CUSTOM -- get NID (program) associated with this term',
      'title' => '',
      'body' => '<?php
//The view auto pulls the TID from arg(2) in the URL.
$WhichNode=views_embed_view("whs_service_return_node_associated_with_program","block");

$NID=(int)ltrim(rtrim(strip_tags($WhichNode)));

$_SESSION[\'service_program\']=$NID;
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
    $pane->uuid = '3f083807-e975-46ef-8a42-76c3bf752729';
    $display->content['new-3f083807-e975-46ef-8a42-76c3bf752729'] = $pane;
    $display->panels['directorate_table'][1] = 'new-3f083807-e975-46ef-8a42-76c3bf752729';
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

//We need to load the taxonomy term (that\'s what is actually in the URL)
//arg(x)
//(0) = taxonomy
//(1) = term
//(2) = TID

//In this case, the taxonomy ID is actually the name of the program -- just as in the directorate pages.
//This causes a problem, as we need the name of the Service vocabulary as the title (just like we would need the name of the directorate)
$term=taxonomy_term_load(arg(2));
$VID=$term->vid;
$vocab=taxonomy_vocabulary_load($VID);

$title=strtoupper($vocab->name);

  echo \'<div class="directorate_title">\';
   echo \'<h2>\';
     echo $title;
   echo \'</h2>\';
  echo \'</div>\';

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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '2b7fd7f5-77c4-4df4-a8d7-774996daf303';
    $display->content['new-2b7fd7f5-77c4-4df4-a8d7-774996daf303'] = $pane;
    $display->panels['directorate_table'][2] = 'new-2b7fd7f5-77c4-4df4-a8d7-774996daf303';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '2539e6f6-f79b-437c-9067-6a2e0a317bac';
    $display->content['new-2539e6f6-f79b-437c-9067-6a2e0a317bac'] = $pane;
    $display->panels['directorate_table'][3] = 'new-2539e6f6-f79b-437c-9067-6a2e0a317bac';
    $pane = new stdClass();
    $pane->pid = 'new-195f684b-2135-43c8-a211-cbb7b1654af1';
    $pane->panel = 'directorate_table';
    $pane->type = 'block';
    $pane->subtype = 'quicktabs-quicktabs_control_whs_services_t';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '195f684b-2135-43c8-a211-cbb7b1654af1';
    $display->content['new-195f684b-2135-43c8-a211-cbb7b1654af1'] = $pane;
    $display->panels['directorate_table'][4] = 'new-195f684b-2135-43c8-a211-cbb7b1654af1';
    $pane = new stdClass();
    $pane->pid = 'new-5a359928-9bf8-467f-91c1-bfd63fd679b1';
    $pane->panel = 'directorate_table';
    $pane->type = 'block';
    $pane->subtype = 'quicktabs-whs_home_page_service_table';
    $pane->shown = FALSE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'Show if NON-COMMUTER page',
            'php' => 'if (!isset($_REQUEST[\'commuter\'])) {return TRUE;}else{return FALSE;}',
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '5a359928-9bf8-467f-91c1-bfd63fd679b1';
    $display->content['new-5a359928-9bf8-467f-91c1-bfd63fd679b1'] = $pane;
    $display->panels['directorate_table'][5] = 'new-5a359928-9bf8-467f-91c1-bfd63fd679b1';
    $pane = new stdClass();
    $pane->pid = 'new-94c8d1ad-5fa0-4f04-ad02-1a1e0d34a1f5';
    $pane->panel = 'directorate_table';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = FALSE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'Only show if NON-COMMUTER PAGE',
            'php' => 'if (!isset($_REQUEST[\'commuter\'])) {return TRUE;}else{return FALSE;}',
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Quicktabs Jquery on the Panel',
      'title' => '',
      'body' => '<?php

// CONTROL WHICH TABS ARE SHOWN HERE - presently just TID flag in the URL.  Could be expanded as needed.
$WHS_default=TRUE;
$WhichDir=$_REQUEST[\'DID\'];
$WhichAnnouncement=$_REQUEST[\'announcement\'];
$page_type="";

if ($WhichDir!="" && $WhichDir!=0) {
    $page_type="main_landing";
}

if ($WhichAnnouncement!="" && $WhichAnnouncement!=0) {
    $page_type="announcement";
}

//Code for tabs on announcement page
if ($page_type=="announcement") {
  $WHS_default=FALSE;
  $node=node_load($WhichAnnouncement);
    echo \'
   <script>
      //Equivalent in DRUPAL to document.ready
       (function($){
       for (x=0; x<20;x=x+1){
         $(".tab"+x).hide();
       }
       //Change the tab to show this is an announcement
       $(".tab9 a").text("Announcement: \'.$node->title.\'");
       $(".tab9").show();
       })(jQuery);
    </script>
    \';
  return;
}//End checking if this is a directorate landing page.



//Code for DIRECTORATE INFORMATION page (home page/landing page) would go here.
if ($page_type=="main_landing") {
  global $user;
  $WHS_default=FALSE;

  //If the user is not logged, then hide favorites.  Can\'t store favorites if you don\'t have an account.
  //SRH Nov 2015

    echo \'
   <script>
      //Equivalent in DRUPAL to document.ready
       (function($){
    \';

    //Only knock out favorites if we are NOT logged in
    if ($user->uid==0) {
      echo \'
          //Favorites
          $(".tab6").hide();   
      \';
    } //End checking if we are signed in
    
    echo \'
          //Tabs for program pages
          $(".tab3").hide(); 
          $(".tab4").hide(); 
          $(".tab5").hide(); 
          $(".tab7").hide(); 
          //Announcement
          $(".tab9").hide();
       })(jQuery);
    </script>
    \';
  return;
}//End checking if this is a directorate landing page.


//Check to see if this is a PROGRAM / SUB-PROGRAM page
if (isset($_REQUEST[\'tid\'])) {
  $WHS_default=FALSE;
//Determine if this is a program landing page or description landing page (services).  This is controlled by a field on the taxonomy term
$term=taxonomy_term_load($_REQUEST[\'tid\']);

if ($term!="") {
  $page_type=$term->field_select_a_page_template[\'und\'][0][\'value\'];
}

if ($page_type!="detail"){
    //PROGRAM PAGE
    //If this is a program landing page, hide the tabs from the normal home page, and show the tabs related to service content.  This is done on the QUICKTABS on the home page.  See QUICKTABS under
    //admin->services
    echo \'
   <script>
      //Equivalent in DRUPAL to document.ready
       (function($){
          //NOTE!  Tabs are described on the QUICKTABS page (the first one is 0 and proceeds from there).  "tabXX" is assigned in the CODE as a hack to QUICKTABS.  See line 638
         //Three directorate/homepage tabs get hidden on the service page.
         for (x=0; x<3;x=x+1){
           $(".tab"+x).hide();
         }
        //Favorites
        $(".tab6").hide();   
       //Top Tools
        $(".tab8").hide();
       //Announcements
        $(".tab9").hide();

       //Show the tabs related to SERVICES
        $(".tab3").show(); 
        $(".tab4").show(); 
        $(".tab5").show(); 
        $(".tab7").show(); 
    })(jQuery);
    </script>
    \';
  }else{  //DETAIL page
    echo \'
   <script>
      //Equivalent in DRUPAL to document.ready
       (function($){
          //NOTE!  Tabs are described on the QUICKTABS page (the first one is 0 and proceeds from there).  "tabXX" is assigned in the CODE as a hack to QUICKTABS.  See line 638
         //Three directorate/homepage tabs get hidden on the service page.

    for (x=0; x<20;x=x+1){
      $(".tab"+x).hide();
    }

    $(".tab3").show();
    $(".tab3 a").html("Service Detail Page");

    })(jQuery);
    </script>
    \';
  }//End checking for detail/program service page

}else{  
    //Anything else that is NOT a service page.
  echo \'
 <script>
   //Equivalent in DRUPAL to document.ready
  (function($){
    //NOTE!  Tabs are described on the QUICKTABS page (the first one is 0 and proceeds from there).  "tabXX" is assigned in the CODE as a hack to QUICKTABS.  See line 638
    //Three directorate/homepage tabs get shown on NON-service page.
    for (x=0; x<3;x=x+1){
      $(".tab"+x).show();
    }
    $(".tab6").show(); //Favorite

    //Hide the tabs related to SERVICES
    $(".tab3").hide();  //Information
    $(".tab4").hide();  //Service Eligibility
    $(".tab5").hide();  //Related Links
    $(".tab7").hide(); //How to obtain
    $(".tab9").hide(); //Announcements
  })(jQuery);
</script>
\';

} //End checking if this is a TID page (service) or not

if ($WHS_default==TRUE) {
  echo \'
   <script>
      //Equivalent in DRUPAL to document.ready
       (function($){
          //NOTE!  Tabs are described on the QUICKTABS page (the first one is 0 and proceeds from there).  "tabXX" is assigned in the CODE as a hack to QUICKTABS.  See line 638
         //Three directorate/homepage tabs get hidden on the service page.
         for (x=0; x<20;x=x+1){
           $(".tab"+x).hide();
         }
        //Show the services only tab
        $(".tab2").css("margin-left","37px");
        $(".tab2").show();

        //Clear the title
        $(".directorate_title h2").text("WHS Service Options");

    })(jQuery);
    </script>
    \';
}


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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '94c8d1ad-5fa0-4f04-ad02-1a1e0d34a1f5';
    $display->content['new-94c8d1ad-5fa0-4f04-ad02-1a1e0d34a1f5'] = $pane;
    $display->panels['directorate_table'][6] = 'new-94c8d1ad-5fa0-4f04-ad02-1a1e0d34a1f5';
    $pane = new stdClass();
    $pane->pid = 'new-30f4447c-68fe-4bb4-b851-6e8188cecc60';
    $pane->panel = 'directorate_tools';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(),
    );
    $pane->configuration = array(
      'admin_title' => 'Favorite Button',
      'title' => '',
      'body' => '<?php
echo \'<div class="home_blue_bar icons">\';

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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '30f4447c-68fe-4bb4-b851-6e8188cecc60';
    $display->content['new-30f4447c-68fe-4bb4-b851-6e8188cecc60'] = $pane;
    $display->panels['directorate_tools'][0] = 'new-30f4447c-68fe-4bb4-b851-6e8188cecc60';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8ccc461f-42a6-4d23-b8ac-7320c5c7ed48';
    $display->content['new-8ccc461f-42a6-4d23-b8ac-7320c5c7ed48'] = $pane;
    $display->panels['directorate_tools'][1] = 'new-8ccc461f-42a6-4d23-b8ac-7320c5c7ed48';
    $pane = new stdClass();
    $pane->pid = 'new-4cf0e08f-0830-49a0-aff7-d2fdf5d94619';
    $pane->panel = 'directorate_tools';
    $pane->type = 'block';
    $pane->subtype = 'whs_taxonomy_menu-taxonomy_menu';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(),
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '4cf0e08f-0830-49a0-aff7-d2fdf5d94619';
    $display->content['new-4cf0e08f-0830-49a0-aff7-d2fdf5d94619'] = $pane;
    $display->panels['directorate_tools'][2] = 'new-4cf0e08f-0830-49a0-aff7-d2fdf5d94619';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'e7191a31-6da2-4013-a819-8bfffb1b3700';
    $display->content['new-e7191a31-6da2-4013-a819-8bfffb1b3700'] = $pane;
    $display->panels['directorate_tools'][3] = 'new-e7191a31-6da2-4013-a819-8bfffb1b3700';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context_6'] = $handler;

  return $export;
}
