<?php
/**
 * @file
 * home_page.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function home_page_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-directorate-menu.
  $menus['menu-directorate-menu'] = array(
    'menu_name' => 'menu-directorate-menu',
    'title' => 'Directorate Menu',
    'description' => '',
  );
  // Exported menu: menu-lower-footer-menu.
  $menus['menu-lower-footer-menu'] = array(
    'menu_name' => 'menu-lower-footer-menu',
    'title' => 'Lower Footer Menu',
    'description' => 'Links in the lower of the two footer menus.',
  );
  // Exported menu: menu-top-footer-menu.
  $menus['menu-top-footer-menu'] = array(
    'menu_name' => 'menu-top-footer-menu',
    'title' => 'Top footer menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Directorate Menu');
  t('Links in the lower of the two footer menus.');
  t('Lower Footer Menu');
  t('Top footer menu');


  return $menus;
}
