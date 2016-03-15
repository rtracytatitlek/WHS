<?php
/**
 * @file
 * home_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function home_page_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_3';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Home Page Non-CAC',
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
        5 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'If logged in FALSE else TRUE',
            'php' => '//For now, always return true.
//When we have CAC access under control, we will lock to CAC users (i.e. provide different home pages logged in/not logged in)
//Oct 2015
global $user;

if ($user->uid==0) {return TRUE;}else{return FALSE;}',
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
//See Custom module
display_panel_title();
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
    $pane->pid = 'new-5a359928-9bf8-467f-91c1-bfd63fd679b1';
    $pane->panel = 'directorate_table';
    $pane->type = 'block';
    $pane->subtype = 'quicktabs-whs_home_page_service_table';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'Show if NON-COMMUTER page',
            'php' => '//Display this quicktab group only if this is the commuter page.
if (isset($_REQUEST[\'commuter\'])) {return FALSE;}

if (arg(0)=="commuter" || arg(1)=="commuter") {
  return FALSE;
}

return TRUE;',
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
    $pane->uuid = '5a359928-9bf8-467f-91c1-bfd63fd679b1';
    $display->content['new-5a359928-9bf8-467f-91c1-bfd63fd679b1'] = $pane;
    $display->panels['directorate_table'][3] = 'new-5a359928-9bf8-467f-91c1-bfd63fd679b1';
    $pane = new stdClass();
    $pane->pid = 'new-e3f7b90d-5b30-488d-bcf1-1baa92fe6c5a';
    $pane->panel = 'directorate_table';
    $pane->type = 'block';
    $pane->subtype = 'quicktabs-commuter_options';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'Show COMMUTER page',
            'php' => '//Display this quicktab group only if this is the commuter page.
if (isset($_REQUEST[\'commuter\'])) {return TRUE;}

if (arg(0)=="commuter" || arg(1)=="commuter") {
  return TRUE;
}

return FALSE;',
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'e3f7b90d-5b30-488d-bcf1-1baa92fe6c5a';
    $display->content['new-e3f7b90d-5b30-488d-bcf1-1baa92fe6c5a'] = $pane;
    $display->panels['directorate_table'][4] = 'new-e3f7b90d-5b30-488d-bcf1-1baa92fe6c5a';
    $pane = new stdClass();
    $pane->pid = 'new-b3cd227d-a161-4ad2-b3f8-f23bcf88ff02';
    $pane->panel = 'directorate_table';
    $pane->type = 'block';
    $pane->subtype = 'quicktabs-test';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
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
    $pane->uuid = 'b3cd227d-a161-4ad2-b3f8-f23bcf88ff02';
    $display->content['new-b3cd227d-a161-4ad2-b3f8-f23bcf88ff02'] = $pane;
    $display->panels['directorate_table'][5] = 'new-b3cd227d-a161-4ad2-b3f8-f23bcf88ff02';
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'f1f3945b-4f08-45ce-8a5e-1be2a23ea849';
    $display->content['new-f1f3945b-4f08-45ce-8a5e-1be2a23ea849'] = $pane;
    $display->panels['directorate_table'][6] = 'new-f1f3945b-4f08-45ce-8a5e-1be2a23ea849';
    $pane = new stdClass();
    $pane->pid = 'new-44f3f53a-7151-4bc9-927c-693917ad24fe';
    $pane->panel = 'directorate_table';
    $pane->type = 'views';
    $pane->subtype = 'directorate_information';
    $pane->shown = FALSE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'Hide IF Service pages',
            'php' => '//DO not show the additional information boxes on Service home page
if (isset($_REQUEST[\'vid\'])) {return FALSE;}else{return TRUE;}',
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '6',
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
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '44f3f53a-7151-4bc9-927c-693917ad24fe';
    $display->content['new-44f3f53a-7151-4bc9-927c-693917ad24fe'] = $pane;
    $display->panels['directorate_table'][7] = 'new-44f3f53a-7151-4bc9-927c-693917ad24fe';
    $pane = new stdClass();
    $pane->pid = 'new-94c8d1ad-5fa0-4f04-ad02-1a1e0d34a1f5';
    $pane->panel = 'directorate_table';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'Only implement on NON-Commuter pages',
            'php' => 'if (!isset($_REQUEST[\'commuter\'])) {return TRUE;}else{return FALSE;}',
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Quicktabs Jquery on the Panel (including announcement display)',
      'title' => '',
      'body' => '<?php
//See custom.module
control_tabs();
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
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '94c8d1ad-5fa0-4f04-ad02-1a1e0d34a1f5';
    $display->content['new-94c8d1ad-5fa0-4f04-ad02-1a1e0d34a1f5'] = $pane;
    $display->panels['directorate_table'][8] = 'new-94c8d1ad-5fa0-4f04-ad02-1a1e0d34a1f5';
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
  $export['node_view_panel_context_3'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_4';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -25;
  $handler->conf = array(
    'title' => 'Emergency Landing (Single Pane - Table Content)',
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
        6 => array(
          'name' => 'string_equal',
          'settings' => array(
            'operator' => '=',
            'value' => 'emergency',
            'case' => 0,
          ),
          'context' => 'argument_string_1',
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
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 74.906678442917993,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'breadcrumbs',
          1 => 'favorites',
        ),
        'parent' => 'main',
        'class' => 'information',
      ),
      'breadcrumbs' => array(
        'type' => 'region',
        'title' => 'breadcrumbs',
        'width' => '59.34797849964945',
        'width_type' => '%',
        'parent' => '1',
        'class' => 'breadcrumbs',
      ),
      'favorites' => array(
        'type' => 'region',
        'title' => 'favorites',
        'width' => '40.65202150035055',
        'width_type' => '%',
        'parent' => '1',
        'class' => 'favorites',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'left_nav' => NULL,
      'right_rss_and_news' => NULL,
      'breadcrumbs' => NULL,
      'favorites' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '6ace6e0f-9c9c-43a0-ad85-b67cb3a76ca0';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7b96a6f4-b08f-492d-b4ef-c0ed84ebf3ef';
    $pane->panel = 'breadcrumbs';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'breadcrumbs',
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
    $pane->uuid = '7b96a6f4-b08f-492d-b4ef-c0ed84ebf3ef';
    $display->content['new-7b96a6f4-b08f-492d-b4ef-c0ed84ebf3ef'] = $pane;
    $display->panels['breadcrumbs'][0] = 'new-7b96a6f4-b08f-492d-b4ef-c0ed84ebf3ef';
    $pane = new stdClass();
    $pane->pid = 'new-a1ec90c2-4360-46bf-9092-f29dc1fbee3b';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'block-10';
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
    $pane->uuid = 'a1ec90c2-4360-46bf-9092-f29dc1fbee3b';
    $display->content['new-a1ec90c2-4360-46bf-9092-f29dc1fbee3b'] = $pane;
    $display->panels['center'][0] = 'new-a1ec90c2-4360-46bf-9092-f29dc1fbee3b';
    $pane = new stdClass();
    $pane->pid = 'new-2dc000f6-c42a-4c11-a164-4b6afb376405';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'emergency_contacts';
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
    $pane->uuid = '2dc000f6-c42a-4c11-a164-4b6afb376405';
    $display->content['new-2dc000f6-c42a-4c11-a164-4b6afb376405'] = $pane;
    $display->panels['center'][1] = 'new-2dc000f6-c42a-4c11-a164-4b6afb376405';
    $pane = new stdClass();
    $pane->pid = 'new-c8ebd9aa-ee10-4c94-b061-2b7e2bc71ba6';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'block-11';
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
    $pane->uuid = 'c8ebd9aa-ee10-4c94-b061-2b7e2bc71ba6';
    $display->content['new-c8ebd9aa-ee10-4c94-b061-2b7e2bc71ba6'] = $pane;
    $display->panels['center'][2] = 'new-c8ebd9aa-ee10-4c94-b061-2b7e2bc71ba6';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_4'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_5';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'Home Page - Logged In',
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
        4 => array(
          'name' => 'context_exists',
          'settings' => array(
            'exists' => '0',
          ),
          'context' => 'argument_string_1',
          'not' => FALSE,
        ),
        5 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'If logged in FALSE else TRUE',
            'php' => '//For now, always return true.
//When we have CAC access under control, we will lock to CAC users (i.e. provide different home pages logged in/not logged in)
//Oct 2015
global $user;

if ($user->uid==0) {return FALSE;}else{return TRUE;}',
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
      'body' => '<span id="working-area"></span>

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
//See Custom module
display_panel_title();
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
    $pane->pid = 'new-5a359928-9bf8-467f-91c1-bfd63fd679b1';
    $pane->panel = 'directorate_table';
    $pane->type = 'block';
    $pane->subtype = 'quicktabs-whs_home_page_service_table';
    $pane->shown = TRUE;
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '5a359928-9bf8-467f-91c1-bfd63fd679b1';
    $display->content['new-5a359928-9bf8-467f-91c1-bfd63fd679b1'] = $pane;
    $display->panels['directorate_table'][3] = 'new-5a359928-9bf8-467f-91c1-bfd63fd679b1';
    $pane = new stdClass();
    $pane->pid = 'new-e3f7b90d-5b30-488d-bcf1-1baa92fe6c5a';
    $pane->panel = 'directorate_table';
    $pane->type = 'block';
    $pane->subtype = 'quicktabs-commuter_options';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'Show COMMUTER page',
            'php' => '//Display this quicktab group only if this is the commuter page.
if (isset($_REQUEST[\'commuter\'])) {return TRUE;}else{return FALSE;}',
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'e3f7b90d-5b30-488d-bcf1-1baa92fe6c5a';
    $display->content['new-e3f7b90d-5b30-488d-bcf1-1baa92fe6c5a'] = $pane;
    $display->panels['directorate_table'][4] = 'new-e3f7b90d-5b30-488d-bcf1-1baa92fe6c5a';
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'f1f3945b-4f08-45ce-8a5e-1be2a23ea849';
    $display->content['new-f1f3945b-4f08-45ce-8a5e-1be2a23ea849'] = $pane;
    $display->panels['directorate_table'][5] = 'new-f1f3945b-4f08-45ce-8a5e-1be2a23ea849';
    $pane = new stdClass();
    $pane->pid = 'new-44f3f53a-7151-4bc9-927c-693917ad24fe';
    $pane->panel = 'directorate_table';
    $pane->type = 'views';
    $pane->subtype = 'directorate_information';
    $pane->shown = FALSE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'Hide IF Service pages',
            'php' => '//DO not show the additional information boxes on Service home page
if (isset($_REQUEST[\'vid\'])) {return FALSE;}else{return TRUE;}',
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '6',
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '44f3f53a-7151-4bc9-927c-693917ad24fe';
    $display->content['new-44f3f53a-7151-4bc9-927c-693917ad24fe'] = $pane;
    $display->panels['directorate_table'][6] = 'new-44f3f53a-7151-4bc9-927c-693917ad24fe';
    $pane = new stdClass();
    $pane->pid = 'new-94c8d1ad-5fa0-4f04-ad02-1a1e0d34a1f5';
    $pane->panel = 'directorate_table';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
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
control_tabs();
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
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '94c8d1ad-5fa0-4f04-ad02-1a1e0d34a1f5';
    $display->content['new-94c8d1ad-5fa0-4f04-ad02-1a1e0d34a1f5'] = $pane;
    $display->panels['directorate_table'][7] = 'new-94c8d1ad-5fa0-4f04-ad02-1a1e0d34a1f5';
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
  $export['node_view_panel_context_5'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_6';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Program Detail Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'program_detail_page',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        5 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'If DETAIL page',
            'php' => '//Node paages

$NID=arg(1);

$node=node_load($NID);
if ($node->type="service_program_sub_page") {return TRUE;}

return FALSE;
',
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
          0 => 'directorate_table',
          1 => 'program_and_detail_menu',
        ),
        'parent' => 'main',
        'class' => 'top_home',
      ),
      'directorate_table' => array(
        'type' => 'region',
        'title' => 'Directorate Table',
        'width' => '58.781435012501774',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
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
      'program_and_detail_menu' => array(
        'type' => 'region',
        'title' => 'Program and Detail Menu',
        'width' => '18.21177907183223',
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
      'right_rss_and_news' => NULL,
      'directorate_menu' => NULL,
      'directorate_table' => NULL,
      'directorate_tools' => NULL,
      'lower_right' => NULL,
      'breadcrumbs' => NULL,
      'program_and_detail_menu' => NULL,
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
    $pane->pid = 'new-e8ca235b-5328-4d41-8398-a999dfb01d63';
    $pane->panel = 'directorate_table';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'CUSTOM:  Set Breadcrumb and pathing',
      'title' => '',
      'body' => '<?php
//$_SESSION[\'directorate\'] is set in custom.module at:
//See get_active_directorate()
//See display_user()
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
    $pane->uuid = 'e8ca235b-5328-4d41-8398-a999dfb01d63';
    $display->content['new-e8ca235b-5328-4d41-8398-a999dfb01d63'] = $pane;
    $display->panels['directorate_table'][0] = 'new-e8ca235b-5328-4d41-8398-a999dfb01d63';
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
      'body' => '<span id="working-area"></span>

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
    $pane->uuid = 'c8141f8f-7f6e-4715-94db-034646ca8b98';
    $display->content['new-c8141f8f-7f6e-4715-94db-034646ca8b98'] = $pane;
    $display->panels['directorate_table'][1] = 'new-c8141f8f-7f6e-4715-94db-034646ca8b98';
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
//See Custom module
display_panel_title();
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
    $pane->pid = 'new-7d933e5b-3d2e-4200-b266-382467bf3b1d';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '7d933e5b-3d2e-4200-b266-382467bf3b1d';
    $display->content['new-7d933e5b-3d2e-4200-b266-382467bf3b1d'] = $pane;
    $display->panels['directorate_table'][3] = 'new-7d933e5b-3d2e-4200-b266-382467bf3b1d';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '2539e6f6-f79b-437c-9067-6a2e0a317bac';
    $display->content['new-2539e6f6-f79b-437c-9067-6a2e0a317bac'] = $pane;
    $display->panels['directorate_table'][4] = 'new-2539e6f6-f79b-437c-9067-6a2e0a317bac';
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'f1f3945b-4f08-45ce-8a5e-1be2a23ea849';
    $display->content['new-f1f3945b-4f08-45ce-8a5e-1be2a23ea849'] = $pane;
    $display->panels['directorate_table'][5] = 'new-f1f3945b-4f08-45ce-8a5e-1be2a23ea849';
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
    $pane->pid = 'new-7f728df4-63fc-4c3c-8e9d-e7e90748e081';
    $pane->panel = 'program_and_detail_menu';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Blue bar with icons',
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
    $pane->uuid = '7f728df4-63fc-4c3c-8e9d-e7e90748e081';
    $display->content['new-7f728df4-63fc-4c3c-8e9d-e7e90748e081'] = $pane;
    $display->panels['program_and_detail_menu'][0] = 'new-7f728df4-63fc-4c3c-8e9d-e7e90748e081';
    $pane = new stdClass();
    $pane->pid = 'new-4cf0e08f-0830-49a0-aff7-d2fdf5d94619';
    $pane->panel = 'program_and_detail_menu';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '4cf0e08f-0830-49a0-aff7-d2fdf5d94619';
    $display->content['new-4cf0e08f-0830-49a0-aff7-d2fdf5d94619'] = $pane;
    $display->panels['program_and_detail_menu'][1] = 'new-4cf0e08f-0830-49a0-aff7-d2fdf5d94619';
    $pane = new stdClass();
    $pane->pid = 'new-351f0377-c802-4ae7-bc7b-24bd87e106b6';
    $pane->panel = 'program_and_detail_menu';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '351f0377-c802-4ae7-bc7b-24bd87e106b6';
    $display->content['new-351f0377-c802-4ae7-bc7b-24bd87e106b6'] = $pane;
    $display->panels['program_and_detail_menu'][2] = 'new-351f0377-c802-4ae7-bc7b-24bd87e106b6';
    $pane = new stdClass();
    $pane->pid = 'new-e7191a31-6da2-4013-a819-8bfffb1b3700';
    $pane->panel = 'program_and_detail_menu';
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
    $display->panels['program_and_detail_menu'][3] = 'new-e7191a31-6da2-4013-a819-8bfffb1b3700';
    $pane = new stdClass();
    $pane->pid = 'new-fab62555-c7ec-43d2-8160-62cb57c6b405';
    $pane->panel = 'program_and_detail_menu';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'fab62555-c7ec-43d2-8160-62cb57c6b405';
    $display->content['new-fab62555-c7ec-43d2-8160-62cb57c6b405'] = $pane;
    $display->panels['program_and_detail_menu'][4] = 'new-fab62555-c7ec-43d2-8160-62cb57c6b405';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_6'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function home_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'landing_pages';
  $page->task = 'page';
  $page->admin_title = 'Landing Pages';
  $page->admin_description = 'This group of pages represent the top level landing pages from the WHS site.';
  $page->path = 'home/!page';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'page' => array(
      'id' => 1,
      'identifier' => 'landing page',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 1,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_landing_pages_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'landing_pages';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Program Detail Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'program_detail_page',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        5 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'If DETAIL page',
            'php' => '//Check to see if this is a PROGRAM / SUB-PROGRAM page
//NOTE:  For node testing, we would need to load the node (arg(2)) and determine if it is content type "detail"
//At the moment, we just test TID 
if (!isset($_REQUEST[\'tid\'])) {
  return FALSE;
}


//Determine if this is a program landing page or description landing page (services).  This is controlled by a field on the taxonomy term
$term=taxonomy_term_load($_REQUEST[\'tid\']);

if ($term!="") {
  $page_type=$term->field_select_a_page_template[\'und\'][0][\'value\'];
}
if ($page_type!="detail"){
    return FALSE;
}

return TRUE;
',
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
          0 => 'directorate_table',
          1 => 'program_and_detail_menu',
        ),
        'parent' => 'main',
        'class' => 'top_home',
      ),
      'directorate_table' => array(
        'type' => 'region',
        'title' => 'Directorate Table',
        'width' => '58.781435012501774',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
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
      'program_and_detail_menu' => array(
        'type' => 'region',
        'title' => 'Program and Detail Menu',
        'width' => '18.21177907183223',
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
      'right_rss_and_news' => NULL,
      'directorate_menu' => NULL,
      'directorate_table' => NULL,
      'directorate_tools' => NULL,
      'lower_right' => NULL,
      'breadcrumbs' => NULL,
      'program_and_detail_menu' => NULL,
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
    $pane->pid = 'new-e8ca235b-5328-4d41-8398-a999dfb01d63';
    $pane->panel = 'directorate_table';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'CUSTOM:  Set Breadcrumb and pathing',
      'title' => '',
      'body' => '<?php
//$_SESSION[\'directorate\'] is set in custom.module at:
//See get_active_directorate()
//See display_user()
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
    $pane->uuid = 'e8ca235b-5328-4d41-8398-a999dfb01d63';
    $display->content['new-e8ca235b-5328-4d41-8398-a999dfb01d63'] = $pane;
    $display->panels['directorate_table'][0] = 'new-e8ca235b-5328-4d41-8398-a999dfb01d63';
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
      'body' => '<span id="working-area"></span>

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
    $pane->uuid = 'c8141f8f-7f6e-4715-94db-034646ca8b98';
    $display->content['new-c8141f8f-7f6e-4715-94db-034646ca8b98'] = $pane;
    $display->panels['directorate_table'][1] = 'new-c8141f8f-7f6e-4715-94db-034646ca8b98';
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
//See Custom module
display_panel_title();
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
    $pane->pid = 'new-5a359928-9bf8-467f-91c1-bfd63fd679b1';
    $pane->panel = 'directorate_table';
    $pane->type = 'block';
    $pane->subtype = 'quicktabs-whs_home_page_service_table';
    $pane->shown = TRUE;
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '5a359928-9bf8-467f-91c1-bfd63fd679b1';
    $display->content['new-5a359928-9bf8-467f-91c1-bfd63fd679b1'] = $pane;
    $display->panels['directorate_table'][4] = 'new-5a359928-9bf8-467f-91c1-bfd63fd679b1';
    $pane = new stdClass();
    $pane->pid = 'new-e3f7b90d-5b30-488d-bcf1-1baa92fe6c5a';
    $pane->panel = 'directorate_table';
    $pane->type = 'block';
    $pane->subtype = 'quicktabs-commuter_options';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'Show COMMUTER page',
            'php' => '//Display this quicktab group only if this is the commuter page.
if (isset($_REQUEST[\'commuter\'])) {return TRUE;}else{return FALSE;}',
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
    $pane->uuid = 'e3f7b90d-5b30-488d-bcf1-1baa92fe6c5a';
    $display->content['new-e3f7b90d-5b30-488d-bcf1-1baa92fe6c5a'] = $pane;
    $display->panels['directorate_table'][5] = 'new-e3f7b90d-5b30-488d-bcf1-1baa92fe6c5a';
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'f1f3945b-4f08-45ce-8a5e-1be2a23ea849';
    $display->content['new-f1f3945b-4f08-45ce-8a5e-1be2a23ea849'] = $pane;
    $display->panels['directorate_table'][6] = 'new-f1f3945b-4f08-45ce-8a5e-1be2a23ea849';
    $pane = new stdClass();
    $pane->pid = 'new-44f3f53a-7151-4bc9-927c-693917ad24fe';
    $pane->panel = 'directorate_table';
    $pane->type = 'views';
    $pane->subtype = 'directorate_information';
    $pane->shown = FALSE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'Hide IF Service pages',
            'php' => '//DO not show the additional information boxes on Service home page
if (isset($_REQUEST[\'vid\'])) {return FALSE;}else{return TRUE;}',
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '6',
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
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '44f3f53a-7151-4bc9-927c-693917ad24fe';
    $display->content['new-44f3f53a-7151-4bc9-927c-693917ad24fe'] = $pane;
    $display->panels['directorate_table'][7] = 'new-44f3f53a-7151-4bc9-927c-693917ad24fe';
    $pane = new stdClass();
    $pane->pid = 'new-94c8d1ad-5fa0-4f04-ad02-1a1e0d34a1f5';
    $pane->panel = 'directorate_table';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
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
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '94c8d1ad-5fa0-4f04-ad02-1a1e0d34a1f5';
    $display->content['new-94c8d1ad-5fa0-4f04-ad02-1a1e0d34a1f5'] = $pane;
    $display->panels['directorate_table'][8] = 'new-94c8d1ad-5fa0-4f04-ad02-1a1e0d34a1f5';
    $pane = new stdClass();
    $pane->pid = 'new-5b4f1ee5-45cb-413d-b856-3d3ae9655b81';
    $pane->panel = 'directorate_table';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'DELETE ME',
      'title' => '',
      'body' => '   <script>
      //Equivalent in DRUPAL to document.ready
       (function($){

console.log(window);

       })(jQuery);
    </script>
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
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = '5b4f1ee5-45cb-413d-b856-3d3ae9655b81';
    $display->content['new-5b4f1ee5-45cb-413d-b856-3d3ae9655b81'] = $pane;
    $display->panels['directorate_table'][9] = 'new-5b4f1ee5-45cb-413d-b856-3d3ae9655b81';
    $pane = new stdClass();
    $pane->pid = 'new-7f728df4-63fc-4c3c-8e9d-e7e90748e081';
    $pane->panel = 'program_and_detail_menu';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Blue bar with icons',
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
    $pane->uuid = '7f728df4-63fc-4c3c-8e9d-e7e90748e081';
    $display->content['new-7f728df4-63fc-4c3c-8e9d-e7e90748e081'] = $pane;
    $display->panels['program_and_detail_menu'][0] = 'new-7f728df4-63fc-4c3c-8e9d-e7e90748e081';
    $pane = new stdClass();
    $pane->pid = 'new-4cf0e08f-0830-49a0-aff7-d2fdf5d94619';
    $pane->panel = 'program_and_detail_menu';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '4cf0e08f-0830-49a0-aff7-d2fdf5d94619';
    $display->content['new-4cf0e08f-0830-49a0-aff7-d2fdf5d94619'] = $pane;
    $display->panels['program_and_detail_menu'][1] = 'new-4cf0e08f-0830-49a0-aff7-d2fdf5d94619';
    $pane = new stdClass();
    $pane->pid = 'new-351f0377-c802-4ae7-bc7b-24bd87e106b6';
    $pane->panel = 'program_and_detail_menu';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '351f0377-c802-4ae7-bc7b-24bd87e106b6';
    $display->content['new-351f0377-c802-4ae7-bc7b-24bd87e106b6'] = $pane;
    $display->panels['program_and_detail_menu'][2] = 'new-351f0377-c802-4ae7-bc7b-24bd87e106b6';
    $pane = new stdClass();
    $pane->pid = 'new-e7191a31-6da2-4013-a819-8bfffb1b3700';
    $pane->panel = 'program_and_detail_menu';
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
    $display->panels['program_and_detail_menu'][3] = 'new-e7191a31-6da2-4013-a819-8bfffb1b3700';
    $pane = new stdClass();
    $pane->pid = 'new-fab62555-c7ec-43d2-8160-62cb57c6b405';
    $pane->panel = 'program_and_detail_menu';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'fab62555-c7ec-43d2-8160-62cb57c6b405';
    $display->content['new-fab62555-c7ec-43d2-8160-62cb57c6b405'] = $pane;
    $display->panels['program_and_detail_menu'][4] = 'new-fab62555-c7ec-43d2-8160-62cb57c6b405';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_landing_pages_panel_context_10';
  $handler->task = 'page';
  $handler->subtask = 'landing_pages';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Home Page Non-CAC',
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
        5 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'If logged in FALSE else TRUE',
            'php' => '//For now, always return true.
//When we have CAC access under control, we will lock to CAC users (i.e. provide different home pages logged in/not logged in)
//Oct 2015
global $user;

if ($user->uid==0) {return TRUE;}else{return FALSE;}',
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
$title="";

//This function lives in custom.module
$directorate=get_active_directorate();
//Returns ["name"] and ["nid"]
$title=$directorate[\'name\'];

if ($title!="") {
  
  //Get the location, too.  This is set and controlled from the CUSTOM.MODULE under location_control() function.  Displayed in the menu bar.
  $loc=$_SESSION[\'location\'];

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
    $pane->pid = 'new-5a359928-9bf8-467f-91c1-bfd63fd679b1';
    $pane->panel = 'directorate_table';
    $pane->type = 'block';
    $pane->subtype = 'quicktabs-whs_home_page_service_table';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'Show if NON-COMMUTER page',
            'php' => '//Display this quicktab group only if this is the commuter page.
if (isset($_REQUEST[\'commuter\'])) {return FALSE;}

if (arg(0)=="commuter" || arg(1)=="commuter") {
  return FALSE;
}

return TRUE;',
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
    $pane->uuid = '5a359928-9bf8-467f-91c1-bfd63fd679b1';
    $display->content['new-5a359928-9bf8-467f-91c1-bfd63fd679b1'] = $pane;
    $display->panels['directorate_table'][3] = 'new-5a359928-9bf8-467f-91c1-bfd63fd679b1';
    $pane = new stdClass();
    $pane->pid = 'new-e3f7b90d-5b30-488d-bcf1-1baa92fe6c5a';
    $pane->panel = 'directorate_table';
    $pane->type = 'block';
    $pane->subtype = 'quicktabs-commuter_options';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'Show COMMUTER page',
            'php' => '//Display this quicktab group only if this is the commuter page.
if (isset($_REQUEST[\'commuter\'])) {return TRUE;}

if (arg(0)=="commuter" || arg(1)=="commuter") {
  return TRUE;
}

return FALSE;',
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'e3f7b90d-5b30-488d-bcf1-1baa92fe6c5a';
    $display->content['new-e3f7b90d-5b30-488d-bcf1-1baa92fe6c5a'] = $pane;
    $display->panels['directorate_table'][4] = 'new-e3f7b90d-5b30-488d-bcf1-1baa92fe6c5a';
    $pane = new stdClass();
    $pane->pid = 'new-b3cd227d-a161-4ad2-b3f8-f23bcf88ff02';
    $pane->panel = 'directorate_table';
    $pane->type = 'block';
    $pane->subtype = 'quicktabs-test';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
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
    $pane->uuid = 'b3cd227d-a161-4ad2-b3f8-f23bcf88ff02';
    $display->content['new-b3cd227d-a161-4ad2-b3f8-f23bcf88ff02'] = $pane;
    $display->panels['directorate_table'][5] = 'new-b3cd227d-a161-4ad2-b3f8-f23bcf88ff02';
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'f1f3945b-4f08-45ce-8a5e-1be2a23ea849';
    $display->content['new-f1f3945b-4f08-45ce-8a5e-1be2a23ea849'] = $pane;
    $display->panels['directorate_table'][6] = 'new-f1f3945b-4f08-45ce-8a5e-1be2a23ea849';
    $pane = new stdClass();
    $pane->pid = 'new-44f3f53a-7151-4bc9-927c-693917ad24fe';
    $pane->panel = 'directorate_table';
    $pane->type = 'views';
    $pane->subtype = 'directorate_information';
    $pane->shown = FALSE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'Hide IF Service pages',
            'php' => '//DO not show the additional information boxes on Service home page
if (isset($_REQUEST[\'vid\'])) {return FALSE;}else{return TRUE;}',
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '6',
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
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '44f3f53a-7151-4bc9-927c-693917ad24fe';
    $display->content['new-44f3f53a-7151-4bc9-927c-693917ad24fe'] = $pane;
    $display->panels['directorate_table'][7] = 'new-44f3f53a-7151-4bc9-927c-693917ad24fe';
    $pane = new stdClass();
    $pane->pid = 'new-94c8d1ad-5fa0-4f04-ad02-1a1e0d34a1f5';
    $pane->panel = 'directorate_table';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'Only implement on NON-Commuter pages',
            'php' => 'if (!isset($_REQUEST[\'commuter\'])) {return TRUE;}else{return FALSE;}',
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Quicktabs Jquery on the Panel (including announcement display)',
      'title' => '',
      'body' => '<?php

// CONTROL WHICH TABS ARE SHOWN HERE - presently just TID flag in the URL.  Could be expanded as needed.
$WHS_default=TRUE;
$WhichDir=$_REQUEST[\'DID\'];
$WhichAnnouncement=$_REQUEST[\'announcement\'];
$page_type="";

//We don\'t do anything with this if we\'re on a commuter page.
if (arg(0)=="commuter" || arg(1)=="commuter") {return;}

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
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '94c8d1ad-5fa0-4f04-ad02-1a1e0d34a1f5';
    $display->content['new-94c8d1ad-5fa0-4f04-ad02-1a1e0d34a1f5'] = $pane;
    $display->panels['directorate_table'][8] = 'new-94c8d1ad-5fa0-4f04-ad02-1a1e0d34a1f5';
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
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_landing_pages_panel_context_11';
  $handler->task = 'page';
  $handler->subtask = 'landing_pages';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'Home Page - Logged In',
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
        4 => array(
          'name' => 'context_exists',
          'settings' => array(
            'exists' => '0',
          ),
          'context' => 'argument_string_1',
          'not' => FALSE,
        ),
        5 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'If logged in FALSE else TRUE',
            'php' => '//For now, always return true.
//When we have CAC access under control, we will lock to CAC users (i.e. provide different home pages logged in/not logged in)
//Oct 2015
global $user;

if ($user->uid==0) {return FALSE;}else{return TRUE;}',
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
    $pane->pid = 'new-e8ca235b-5328-4d41-8398-a999dfb01d63';
    $pane->panel = 'directorate_table';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'CUSTOM:  Set Breadcrumb and pathing',
      'title' => '',
      'body' => '<?php
//$_SESSION[\'directorate\'] is set in custom.module at:
//See get_active_directorate()
//See display_user()
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
    $pane->uuid = 'e8ca235b-5328-4d41-8398-a999dfb01d63';
    $display->content['new-e8ca235b-5328-4d41-8398-a999dfb01d63'] = $pane;
    $display->panels['directorate_table'][0] = 'new-e8ca235b-5328-4d41-8398-a999dfb01d63';
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
      'body' => '<span id="working-area"></span>

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
    $pane->uuid = 'c8141f8f-7f6e-4715-94db-034646ca8b98';
    $display->content['new-c8141f8f-7f6e-4715-94db-034646ca8b98'] = $pane;
    $display->panels['directorate_table'][1] = 'new-c8141f8f-7f6e-4715-94db-034646ca8b98';
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
//See Custom module
display_panel_title();
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
    $pane->pid = 'new-5a359928-9bf8-467f-91c1-bfd63fd679b1';
    $pane->panel = 'directorate_table';
    $pane->type = 'block';
    $pane->subtype = 'quicktabs-whs_home_page_service_table';
    $pane->shown = TRUE;
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '5a359928-9bf8-467f-91c1-bfd63fd679b1';
    $display->content['new-5a359928-9bf8-467f-91c1-bfd63fd679b1'] = $pane;
    $display->panels['directorate_table'][4] = 'new-5a359928-9bf8-467f-91c1-bfd63fd679b1';
    $pane = new stdClass();
    $pane->pid = 'new-e3f7b90d-5b30-488d-bcf1-1baa92fe6c5a';
    $pane->panel = 'directorate_table';
    $pane->type = 'block';
    $pane->subtype = 'quicktabs-commuter_options';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'Show COMMUTER page',
            'php' => '//Display this quicktab group only if this is the commuter page.
if (isset($_REQUEST[\'commuter\'])) {return TRUE;}else{return FALSE;}',
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
    $pane->uuid = 'e3f7b90d-5b30-488d-bcf1-1baa92fe6c5a';
    $display->content['new-e3f7b90d-5b30-488d-bcf1-1baa92fe6c5a'] = $pane;
    $display->panels['directorate_table'][5] = 'new-e3f7b90d-5b30-488d-bcf1-1baa92fe6c5a';
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'f1f3945b-4f08-45ce-8a5e-1be2a23ea849';
    $display->content['new-f1f3945b-4f08-45ce-8a5e-1be2a23ea849'] = $pane;
    $display->panels['directorate_table'][6] = 'new-f1f3945b-4f08-45ce-8a5e-1be2a23ea849';
    $pane = new stdClass();
    $pane->pid = 'new-44f3f53a-7151-4bc9-927c-693917ad24fe';
    $pane->panel = 'directorate_table';
    $pane->type = 'views';
    $pane->subtype = 'directorate_information';
    $pane->shown = FALSE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'Hide IF Service pages',
            'php' => '//DO not show the additional information boxes on Service home page
if (isset($_REQUEST[\'vid\'])) {return FALSE;}else{return TRUE;}',
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '6',
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
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '44f3f53a-7151-4bc9-927c-693917ad24fe';
    $display->content['new-44f3f53a-7151-4bc9-927c-693917ad24fe'] = $pane;
    $display->panels['directorate_table'][7] = 'new-44f3f53a-7151-4bc9-927c-693917ad24fe';
    $pane = new stdClass();
    $pane->pid = 'new-94c8d1ad-5fa0-4f04-ad02-1a1e0d34a1f5';
    $pane->panel = 'directorate_table';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
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
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '94c8d1ad-5fa0-4f04-ad02-1a1e0d34a1f5';
    $display->content['new-94c8d1ad-5fa0-4f04-ad02-1a1e0d34a1f5'] = $pane;
    $display->panels['directorate_table'][8] = 'new-94c8d1ad-5fa0-4f04-ad02-1a1e0d34a1f5';
    $pane = new stdClass();
    $pane->pid = 'new-5b4f1ee5-45cb-413d-b856-3d3ae9655b81';
    $pane->panel = 'directorate_table';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'DELETE ME',
      'title' => '',
      'body' => '   <script>
      //Equivalent in DRUPAL to document.ready
       (function($){

console.log(window);

       })(jQuery);
    </script>
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
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = '5b4f1ee5-45cb-413d-b856-3d3ae9655b81';
    $display->content['new-5b4f1ee5-45cb-413d-b856-3d3ae9655b81'] = $pane;
    $display->panels['directorate_table'][9] = 'new-5b4f1ee5-45cb-413d-b856-3d3ae9655b81';
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
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_landing_pages_panel_context_5';
  $handler->task = 'page';
  $handler->subtask = 'landing_pages';
  $handler->handler = 'panel_context';
  $handler->weight = -27;
  $handler->conf = array(
    'title' => 'Training ',
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
        6 => array(
          'name' => 'string_equal',
          'settings' => array(
            'operator' => '=',
            'value' => 'training',
            'case' => 0,
          ),
          'context' => 'argument_string_1',
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
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left_nav',
          1 => 'center',
          2 => 'right_rss_and_news',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '49.781364936702374',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'left_nav' => array(
        'type' => 'region',
        'title' => 'Left NAV',
        'width' => '25.093321557081577',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      'right_rss_and_news' => array(
        'type' => 'region',
        'title' => 'Right RSS and News',
        'width' => '25.125313506215296',
        'width_type' => '%',
        'parent' => 'main-row',
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
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '6ace6e0f-9c9c-43a0-ad85-b67cb3a76ca0';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ac4403c7-8a1c-4046-9cd7-f2e2fab8569a';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'block-9';
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
    $pane->uuid = 'ac4403c7-8a1c-4046-9cd7-f2e2fab8569a';
    $display->content['new-ac4403c7-8a1c-4046-9cd7-f2e2fab8569a'] = $pane;
    $display->panels['center'][0] = 'new-ac4403c7-8a1c-4046-9cd7-f2e2fab8569a';
    $pane = new stdClass();
    $pane->pid = 'new-4d446136-d94a-498c-bf96-e4eb1fad9f72';
    $pane->panel = 'left_nav';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p>LEFT NAV Training PAGE -- logged in</p>
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4d446136-d94a-498c-bf96-e4eb1fad9f72';
    $display->content['new-4d446136-d94a-498c-bf96-e4eb1fad9f72'] = $pane;
    $display->panels['left_nav'][0] = 'new-4d446136-d94a-498c-bf96-e4eb1fad9f72';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_landing_pages_panel_context_7';
  $handler->task = 'page';
  $handler->subtask = 'landing_pages';
  $handler->handler = 'panel_context';
  $handler->weight = -26;
  $handler->conf = array(
    'title' => 'WHS Contacts',
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
        6 => array(
          'name' => 'string_equal',
          'settings' => array(
            'operator' => '=',
            'value' => 'contacts',
            'case' => 0,
          ),
          'context' => 'argument_string_1',
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
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left_nav',
          1 => 'center',
          2 => 'right_rss_and_news',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '49.781364936702374',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'left_nav' => array(
        'type' => 'region',
        'title' => 'Left NAV',
        'width' => '25.093321557081577',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      'right_rss_and_news' => array(
        'type' => 'region',
        'title' => 'Right RSS and News',
        'width' => '25.125313506215296',
        'width_type' => '%',
        'parent' => 'main-row',
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
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '6ace6e0f-9c9c-43a0-ad85-b67cb3a76ca0';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2e77c0e1-b052-4f70-97b3-ad0998254d51';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'whs_contacts';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2e77c0e1-b052-4f70-97b3-ad0998254d51';
    $display->content['new-2e77c0e1-b052-4f70-97b3-ad0998254d51'] = $pane;
    $display->panels['center'][0] = 'new-2e77c0e1-b052-4f70-97b3-ad0998254d51';
    $pane = new stdClass();
    $pane->pid = 'new-89b72b33-3b90-4dd2-96a7-7a5f15d06d8a';
    $pane->panel = 'left_nav';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-directorate-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'rounded_corners',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '89b72b33-3b90-4dd2-96a7-7a5f15d06d8a';
    $display->content['new-89b72b33-3b90-4dd2-96a7-7a5f15d06d8a'] = $pane;
    $display->panels['left_nav'][0] = 'new-89b72b33-3b90-4dd2-96a7-7a5f15d06d8a';
    $pane = new stdClass();
    $pane->pid = 'new-59506900-89bb-46c2-9ecf-c4cb3f149895';
    $pane->panel = 'left_nav';
    $pane->type = 'block';
    $pane->subtype = 'block-22';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '59506900-89bb-46c2-9ecf-c4cb3f149895';
    $display->content['new-59506900-89bb-46c2-9ecf-c4cb3f149895'] = $pane;
    $display->panels['left_nav'][1] = 'new-59506900-89bb-46c2-9ecf-c4cb3f149895';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_landing_pages_panel_context_8';
  $handler->task = 'page';
  $handler->subtask = 'landing_pages';
  $handler->handler = 'panel_context';
  $handler->weight = -25;
  $handler->conf = array(
    'title' => 'Emergency',
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
        6 => array(
          'name' => 'string_equal',
          'settings' => array(
            'operator' => '=',
            'value' => 'emergency',
            'case' => 0,
          ),
          'context' => 'argument_string_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'threecol_33_34_33_stacked';
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
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 74.906678442917993,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'breadcrumbs',
          1 => 'favorites',
        ),
        'parent' => 'main',
        'class' => 'information',
      ),
      'breadcrumbs' => array(
        'type' => 'region',
        'title' => 'breadcrumbs',
        'width' => '59.34797849964945',
        'width_type' => '%',
        'parent' => '1',
        'class' => 'breadcrumbs',
      ),
      'favorites' => array(
        'type' => 'region',
        'title' => 'favorites',
        'width' => '40.65202150035055',
        'width_type' => '%',
        'parent' => '1',
        'class' => 'favorites',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'left_nav' => NULL,
      'right_rss_and_news' => NULL,
      'breadcrumbs' => NULL,
      'favorites' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '6ace6e0f-9c9c-43a0-ad85-b67cb3a76ca0';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-dbd1823a-5a8d-48b8-99ea-741ee7577dd4';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'block-31';
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
    $pane->css = array(
      'css_id' => 'emergency-links-landingPage',
      'css_class' => 'emergency-links-col1',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'dbd1823a-5a8d-48b8-99ea-741ee7577dd4';
    $display->content['new-dbd1823a-5a8d-48b8-99ea-741ee7577dd4'] = $pane;
    $display->panels['left'][0] = 'new-dbd1823a-5a8d-48b8-99ea-741ee7577dd4';
    $pane = new stdClass();
    $pane->pid = 'new-612bc785-9164-49a9-9f37-06aca9553355';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'block-32';
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
    $pane->css = array(
      'css_id' => 'emergency-links-landingPage2',
      'css_class' => 'emergency-links-col2',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '612bc785-9164-49a9-9f37-06aca9553355';
    $display->content['new-612bc785-9164-49a9-9f37-06aca9553355'] = $pane;
    $display->panels['middle'][0] = 'new-612bc785-9164-49a9-9f37-06aca9553355';
    $pane = new stdClass();
    $pane->pid = 'new-8c360da2-0b95-4cf0-a3af-4e84d2ed18af';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'block-33';
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
    $pane->css = array(
      'css_id' => 'emergency-links-landingPage3',
      'css_class' => 'emergency-links-col3',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8c360da2-0b95-4cf0-a3af-4e84d2ed18af';
    $display->content['new-8c360da2-0b95-4cf0-a3af-4e84d2ed18af'] = $pane;
    $display->panels['right'][0] = 'new-8c360da2-0b95-4cf0-a3af-4e84d2ed18af';
    $pane = new stdClass();
    $pane->pid = 'new-a1ec90c2-4360-46bf-9092-f29dc1fbee3b';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'block-10';
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
    $pane->uuid = 'a1ec90c2-4360-46bf-9092-f29dc1fbee3b';
    $display->content['new-a1ec90c2-4360-46bf-9092-f29dc1fbee3b'] = $pane;
    $display->panels['top'][0] = 'new-a1ec90c2-4360-46bf-9092-f29dc1fbee3b';
    $pane = new stdClass();
    $pane->pid = 'new-2dc000f6-c42a-4c11-a164-4b6afb376405';
    $pane->panel = 'top';
    $pane->type = 'views';
    $pane->subtype = 'emergency_contacts';
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
    $pane->uuid = '2dc000f6-c42a-4c11-a164-4b6afb376405';
    $display->content['new-2dc000f6-c42a-4c11-a164-4b6afb376405'] = $pane;
    $display->panels['top'][1] = 'new-2dc000f6-c42a-4c11-a164-4b6afb376405';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_landing_pages_panel_context_9';
  $handler->task = 'page';
  $handler->subtask = 'landing_pages';
  $handler->handler = 'panel_context';
  $handler->weight = -24;
  $handler->conf = array(
    'title' => 'Emergency Landing (Single Pane - Table Content)',
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
        6 => array(
          'name' => 'string_equal',
          'settings' => array(
            'operator' => '=',
            'value' => 'emergency',
            'case' => 0,
          ),
          'context' => 'argument_string_1',
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
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 74.906678442917993,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'breadcrumbs',
          1 => 'favorites',
        ),
        'parent' => 'main',
        'class' => 'information',
      ),
      'breadcrumbs' => array(
        'type' => 'region',
        'title' => 'breadcrumbs',
        'width' => '59.34797849964945',
        'width_type' => '%',
        'parent' => '1',
        'class' => 'breadcrumbs',
      ),
      'favorites' => array(
        'type' => 'region',
        'title' => 'favorites',
        'width' => '40.65202150035055',
        'width_type' => '%',
        'parent' => '1',
        'class' => 'favorites',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'left_nav' => NULL,
      'right_rss_and_news' => NULL,
      'breadcrumbs' => NULL,
      'favorites' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '6ace6e0f-9c9c-43a0-ad85-b67cb3a76ca0';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7b96a6f4-b08f-492d-b4ef-c0ed84ebf3ef';
    $pane->panel = 'breadcrumbs';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'breadcrumbs',
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
    $pane->uuid = '7b96a6f4-b08f-492d-b4ef-c0ed84ebf3ef';
    $display->content['new-7b96a6f4-b08f-492d-b4ef-c0ed84ebf3ef'] = $pane;
    $display->panels['breadcrumbs'][0] = 'new-7b96a6f4-b08f-492d-b4ef-c0ed84ebf3ef';
    $pane = new stdClass();
    $pane->pid = 'new-a1ec90c2-4360-46bf-9092-f29dc1fbee3b';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'block-10';
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
    $pane->uuid = 'a1ec90c2-4360-46bf-9092-f29dc1fbee3b';
    $display->content['new-a1ec90c2-4360-46bf-9092-f29dc1fbee3b'] = $pane;
    $display->panels['center'][0] = 'new-a1ec90c2-4360-46bf-9092-f29dc1fbee3b';
    $pane = new stdClass();
    $pane->pid = 'new-2dc000f6-c42a-4c11-a164-4b6afb376405';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'emergency_contacts';
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
    $pane->uuid = '2dc000f6-c42a-4c11-a164-4b6afb376405';
    $display->content['new-2dc000f6-c42a-4c11-a164-4b6afb376405'] = $pane;
    $display->panels['center'][1] = 'new-2dc000f6-c42a-4c11-a164-4b6afb376405';
    $pane = new stdClass();
    $pane->pid = 'new-c8ebd9aa-ee10-4c94-b061-2b7e2bc71ba6';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'block-11';
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
    $pane->uuid = 'c8ebd9aa-ee10-4c94-b061-2b7e2bc71ba6';
    $display->content['new-c8ebd9aa-ee10-4c94-b061-2b7e2bc71ba6'] = $pane;
    $display->panels['center'][2] = 'new-c8ebd9aa-ee10-4c94-b061-2b7e2bc71ba6';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['landing_pages'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'service_type_contracting_and_procurement';
  $page->task = 'page';
  $page->admin_title = 'Service type - contracting and procurement';
  $page->admin_description = 'These are all pages in the contracting and procurement service group';
  $page->path = 'home/service/contracting-and-procurement/%type';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'type' => array(
      'id' => 1,
      'identifier' => 'String',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 1,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_service_type_contracting_and_procurement_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'service_type_contracting_and_procurement';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Base page',
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
          'name' => 'context_exists',
          'settings' => array(
            'exists' => '0',
          ),
          'context' => 'argument_string_1',
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
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left_menu',
          1 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '66.32170566190966',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'left_menu' => array(
        'type' => 'region',
        'title' => 'Left menu',
        'width' => '33.67829433809035',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'left_menu' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'de323456-9db8-4ff3-939b-fe7e335236b6';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-92cc2b19-8ae1-4b7e-864c-fdf964a206a9';
    $pane->panel = 'left_menu';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-contracting-and-procurement';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
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
    $pane->uuid = '92cc2b19-8ae1-4b7e-864c-fdf964a206a9';
    $display->content['new-92cc2b19-8ae1-4b7e-864c-fdf964a206a9'] = $pane;
    $display->panels['left_menu'][0] = 'new-92cc2b19-8ae1-4b7e-864c-fdf964a206a9';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['service_type_contracting_and_procurement'] = $page;

  return $pages;

}
