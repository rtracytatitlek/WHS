<?php
/**
 * @file
 * services.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function services_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_emergency-info:home/emergency
  $menu_links['main-menu_emergency-info:home/emergency'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'home/emergency',
    'router_path' => 'home',
    'link_title' => 'Emergency Info',
    'options' => array(
      'attributes' => array(
        'title' => 'WHS Emergency information.',
        'class' => array(
          0 => 'last',
        ),
      ),
      'identifier' => 'main-menu_emergency-info:home/emergency',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: main-menu_home:<front>
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'home',
        ),
      ),
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_organization:home/organization
  $menu_links['main-menu_organization:home/organization'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'home/organization',
    'router_path' => 'home',
    'link_title' => 'Organization',
    'options' => array(
      'identifier' => 'main-menu_organization:home/organization',
      'attributes' => array(
        'title' => 'WHS Organizational structure.',
        'class' => array(
          0 => 'tab',
          1 => 'down-arrow-II',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: main-menu_training:home/training
  $menu_links['main-menu_training:home/training'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'home/training',
    'router_path' => 'home',
    'link_title' => 'Training',
    'options' => array(
      'attributes' => array(
        'title' => 'WHS Training and Continuing Education Activities.',
        'class' => array(
          0 => 'tab',
        ),
      ),
      'identifier' => 'main-menu_training:home/training',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_whs-contacts:home/contacts
  $menu_links['main-menu_whs-contacts:home/contacts'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'home/contacts',
    'router_path' => 'home',
    'link_title' => 'WHS Contacts',
    'options' => array(
      'attributes' => array(
        'title' => 'WHS Contact Form and Information.',
        'class' => array(
          0 => 'tab',
        ),
      ),
      'identifier' => 'main-menu_whs-contacts:home/contacts',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Emergency Info');
  t('Home');
  t('Organization');
  t('Training');
  t('WHS Contacts');


  return $menu_links;
}
