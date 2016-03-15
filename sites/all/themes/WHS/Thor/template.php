<?php
// $Id: template.php,v 1.1.2.1 2010/11/11 14:08:01 danprobo Exp $

function whsmil_preprocess_html(&$variables) {
  drupal_add_css(path_to_theme() . '/style.ie6.css', array('group' => CSS_THEME, 'browsers' => array('IE' => 'IE 6', '!IE' => FALSE), 'preprocess' => FALSE));
}

function whsmil_breadcrumb($variables) {
   $sep = ' >> ';
   $breadcrumb = $variables['breadcrumb'];

  if (!empty($breadcrumb)) 
  {
	$breadcrumb[] =  drupal_get_title();
    return  implode($sep, $breadcrumb) ;
  }
  else 
  {
    return t("Home");
  }
   
}

function WHSMIL_preprocess_page(&$variables) {
  drupal_add_library('system', 'ui');
  drupal_add_library('system', 'ui.accordion');
  drupal_add_library('system', 'effects.highlight');
  drupal_add_library('system', 'ui.tabs');
}