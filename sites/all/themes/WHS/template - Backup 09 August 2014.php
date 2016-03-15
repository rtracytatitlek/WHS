<?php
// $Id: template.php,v 1.1.2.1 2010/11/11 14:08:01 danprobo Exp $

function whs_preprocess_html(&$variables) {
  drupal_add_css(path_to_theme() . '/style.ie6.css', array('group' => CSS_THEME, 'browsers' => array('IE' => 'IE 6', '!IE' => FALSE), 'preprocess' => FALSE));
}

function whs_breadcrumb($variables) {
   $sep = ' >> ';
   $breadcrumb = $variables['breadcrumb'];

  if (!empty($breadcrumb)) //
  {
	$breadcrumb[] =  drupal_get_title();
    return  implode($sep, $breadcrumb) ;
  }
  else 
  {
    return t("Home");
  }
   
}

function WHS_preprocess_page(&$variables) {
  drupal_add_library('system', 'ui');
  drupal_add_library('system', 'ui.accordion');
  drupal_add_library('system', 'effects.highlight');
  drupal_add_library('system', 'ui.tabs');

}

function WHS_preprocess_menu_link(&$variables) {
	//This function hijacks the main menu and adds children to the landing page options based on existing (or not!) 	//taxonomy terms.  SRH  Jul 2014.
	//Note that the value of VARIABLE will be changed based on the addition of new children as
	//approrpiate.  Children are added as taxonomy vocabs/terms.  However, the code
	//must be manually changed below (at the SWITCH) to actually scan for these per menu item.
	//This menu is located under MENU -> Main menu.  Note that there MUST be one item or the child/drop down won't work through menuing
	
	$sub_menu="";
	$element=$variables['element'];
	$WhichMenu=$element['#title'];

	//Alright, now we need to test to see if this is one of 
	//the landing pages to inject content.  Note -- we don't 
	//actually build the JS to display - that is handled by 
	//NICE MENUS (superfish).  We just add taxonomy terms as 
	//children.
	$HasChildren=0;

//display_variable($WhichMenu);
//die;
	switch ($WhichMenu) {
		
		case "Services":
			//This function is directly below the present function.
			$children=get_categories_menu($WhichMenu, $element);
			$HasChildren=1;

			break;
	}//End SWITCH case check for taxonomy child menu


	if ($HasChildren==1) {
		if ($children) {
			//This should set the "child" flag if the parent does not already have children.
			//THIS IS NOT WORKING AT THE MOMENT.  Need to fix this.  Presently, there must
			//be at least one child in order to add the other terms dynamically.  Jul 2014
			$element["#original_link"]['has_children']="1";
			$element["#original_link"]['depth']="-1";
		}

	}//End checking HASCHILDREN

if ($HasChildren==1 && $children) {
	//Note -- this will return the altered elements to the calling procedure (by reference &)
	$variables['element']=$element;
}
//display_variable($element);
//die;

//display_variable($variables);
//die;
}//End function MENU_LINK


	
function get_categories_menu($WhichMenu, &$element) {
	module_load_include('inc','pathauto','pathauto');
	$current_category=arg(2);
	$vocab=taxonomy_vocabulary_machine_name_load('services');
	$tree=taxonomy_get_tree($vocab->vid,0,1);

	//We need to indicate there are additional elements if, in fact, there are. (passed back to $children in the calling procedure)
	$SetFlag=0;
	foreach ($tree as $term) {
		$safe_term=pathauto_cleanstring($term->name);
		//For each new menu item, create the default values and arrays.
		$element['#below']['#menu']['dynamic '.$safe_term.' XXX (see template.php)']['link']=whs_set_menu_element($element);
	
		$element['#below']['#menu']['dynamic '.$safe_term.' XXX (see template.php)']['link']['link_title']=$safe_term;
		$element['#below']['#menu']['dynamic '.$safe_term.' XXX (see template.php)']['link']['title']=$term->name;
		$element['#below']['#menu']['dynamic '.$safe_term.' XXX (see template.php)']['link']['href']='services/'.$safe_term;
		$SetFlag=1;
	} //End cycling through each taxonomy term and creating a menu entry for it.

	return $SetFlag;
}//End function GET_CATEGORIES_MENU

function whs_set_menu_element (&$element) {
	//This function is called by get_categories_menu to create a child element if none
	//exists.  Will return a properly formatted "shell" menu item.
	//display_variable($element["#original_link"]["menu_name"]);
	//die;
	
	$menu_item=array(
		"menu_name"=>$element["#original_link"]["menu_name"],
		"mlid"=>"0",
		"plid"=>$element["#original_link"]["mlid"],
		"module"=>'menu',
		"hidden"=>"0",
		"link_path"=> "",
		"router_path"=>"",
		"link_title"=>"",
    	"options"=>array("attributes"=>array("title"=>"")),
    	"external"=>"1",
  		"has_children"=>"0",
  		"expanded"=>"0",
  		"weight"=>"-50",
  		"depth"=>"2",
  		"customized"=>"1",
  		"p1"=>$element["#original_link"]["mlid"],
  		"updated"=>"0",
  		"load_functions"=>"",
  		"to_arg_functions"=>"",
  		"access_callback"=>"",
    	"access_arguments"=>"",
  		"page_callback"=>"",
  		"page_arguments"=>"",
  		"delivery_callback"=>"",
  		"tab_parent"=>"",
  		"tab_root"=>"",
  		"title"=>"",
  		"title_callback"=>"",
  		"title_arguments"=>"",
  		"theme_callback"=>"",
  		"theme_arguments"=>"",
  		"type"=>"",
  		"description"=>"",
  		"in_active_trail"=>FALSE,
  		"access"=>1,
  		"href"=>"",
  		"localized_options"=>array("attributes"=>array("title"=>"")),
  	);
  	
  	return $menu_item;
  	
	
}//End function WHS_SET_MENU_ELEMENT

