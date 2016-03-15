<?php

// $Id: template.php,v 1.1.2.1 2010/11/11 14:08:01 danprobo Exp $

function whs_preprocess_html(&$variables) {
  drupal_add_css(path_to_theme() . '/style.ie6.css', array('group' => CSS_THEME, 'browsers' => array('IE' => 'IE 6', '!IE' => FALSE), 'preprocess' => FALSE));
  drupal_add_css(path_to_theme() . '/style.ie8.css', array('group' => CSS_THEME, 'browsers' => array('IE' => 'IE 8', '!IE' => FALSE), 'preprocess' => FALSE));
}


function whs_breadcrumb($variables) {
   $sep = ' >> ';
   $breadcrumb = $variables['breadcrumb'];
  if (!empty($breadcrumb)) //
  {
	$breadcrumb[] =  drupal_get_title();
    	return  implode($sep, $breadcrumb) ;
  }else{
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
	$sub_menu="";
	$element=$variables['element'];
	$WhichMenu=$element['#title'];
	$Original_Menu=$element['#original_link']['menu_name'];
	//First, check taxonomy.  Is this a taxonomy menu for a services page?  if so, then we need to change the #href value for this entry to
	//point to the on-page anchor.  The actual page link is handled in the center of the page from a view.  Aug 2014
	switch ($Original_Menu) {
		case "menu-directorate-menu":
			//Get the NID (group ID for the directorate) from the element
			//The SECOND entry is the NID. Jan 2015
			$WhichNID=explode('/',$element['#href']);			
			$GID=$WhichNID[1];
			$element["#localized_options"]['query']=array("DID"=>$GID);
			$element['#href']='<front>';
			$variables['element']=$element;
		break;

		case "main-menu":
			//We need to specify the "on page" link for menu items related to services.  See QUICKTABS.  No longer calling a separate page.
			//FEB 2015  SRH  per Grace/Kevin
			    $vocabulary = taxonomy_vocabulary_load_multiple(NULL, array('name' => $element['#title']));

			if (count($vocabulary)>0) {
			    $vid = reset($vocabulary)->vid;
			}else{
				$vid="";
			}


			/*
			if ($vid!="") {
				$element["#localized_options"]['query']=array(
					"vid"=>$vid,
					"qt-whs_home_page_service_table"=>'2',
				);
				$element["#localized_options"]['fragment']="";

				$element['#href']='<front>';

				$variables['element']=$element;
			}//End checking if this is a service (only services are in the taxonomy)
			*/

		break;

		case "menu-contracting-and-procurement":
			//Get the NID (group ID for the directorate) from the element
			//The SECOND entry is the NID. Jan 2015
			$WhichNID=explode('/',$element['#href']);			
			$GID=$WhichNID[1];
			$element["#localized_options"]['query']=array("DID"=>$GID);
			$element['#href']='<front>';
			$variables['element']=$element;
		break;


		case "menu-building-and-facilities":
		case "menu-executive-and-administrative":
		case "menu-financial-services":
		case "menu-information-technoloy":
		case "menu-people-services":
		case "menu-safety-security-and-privacy":
		case "menu-visitor-services":
			//For all "leafs" in the contracting-and-procurement menu, change the href's to onpage anchors.
			//Note -- you must use URL + fragment option in order to capture the onpage anchor.  Otherwise, the "#" is translated as %23
			//and will not work.
			//The substr corresponds to the first letter of the menu option, and in turn is set as a field on the taxonomy term page "on page link"
			//See page.tpl for overriding the page['content']variable.  

			$root=substr($Original_Menu,5);
			$temp=explode('/',$element['#original_link']['link_path']);
			$TID=$temp[2];
			$Term=taxonomy_term_load($TID);
			$Location="";

			if (isset($Term->field_location['und'][0]['value']))
				$Location=$Term->field_location['und'][0]['value'];

			if ($Location=="Pentagon" || $Location=="") {			
				$element['#href']=url($_SERVER['SERVER_NAME'].'/services/'.$root,array('fragment'=>strtolower(substr($WhichMenu,0,1))));
			}else{
				//Hide the menu item if this is not a pentagon link (or empty).  Note, the default is always pentagon.  See the field in taxonomy terms.
				//See whs.css for menu-hidden (a simple display none)
				//$element['#original_link']['hidden']='hidden';
				$element['#localized_options']['attributes']['class'][]='menu-hidden';
				$element['#attributes']['class'][]='menu-hidden';
				//display_variable($element);
			}
			$variables['element']=$element;
		break;

	}//Menu type switch


	//This function hijacks the main menu and adds children to the landing page options based on existing (or not!) 	
	//taxonomy terms or organic group types.  SRH  Jul 2014.
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
			//We are not using the custom code here -- instead this is controlled from within the taxonomy vocabulary edit page.
			//I originally overrode core drupal to allow for custom pathing; however, that is no longer needed.  I'll leave the code
			//but for taxonomies -- use custom URL when creating the path for each term, and it will be picked up in the menu automatically.
			//Aug 2014  SRH

			return;

			$children=get_categories_menu($WhichMenu, $element);
			$HasChildren=1;
		break;

		case "Organization":
			//This function is directly below the present function
			//Load OG into a menu and customize the link.  Aug 2014 SRH
			//This function is located below (custom)
			$children=get_organic_groups_menu($WhichMenu, $element);
			$HasChildren=1;
		break;


		case "menu-contracting-and-procurement":
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
		$element['#below']['#menu']['dynamic '.$safe_term.' XXX (see template.php)']['link']['title']=$safe_term;
		$element['#below']['#menu']['dynamic '.$safe_term.' XXX (see template.php)']['link']['href']='services/'.$safe_term;
		$element['#below']['#menu']['dynamic '.$safe_term.' XXX (see template.php)']['link']['class'][]='term-link';
		$SetFlag=1;

	} //End cycling through each taxonomy term and creating a menu entry for it.

	return $SetFlag;
}//End function GET_CATEGORIES_MENU



function get_organic_groups_menu($WhichMenu, &$element) {
	module_load_include('inc','pathauto','pathauto');

	//Load the directorates
	$results=views_get_view_result('organization_list');

	//display_variable($results);
	//die;

	//We need to indicate there are additional elements if, in fact, there are. (passed back to $children in the calling procedure)
	$SetFlag=0;

	foreach ($results as $directorate) {
		$safe_org=pathauto_cleanstring($directorate->node_title);

		//The filed "link" in the view returns the NID of this menu item.  Get the clean name
		$clean_path=drupal_get_path_alias('node/'.$directorate->nid);



		//For each new menu item, create the default values and arrays.
		$element['#below']['#menu']['dynamic '.$safe_org.' XXX (see template.php)']['link']=whs_set_menu_element($element);
		$element['#below']['#menu']['dynamic '.$safe_org.' XXX (see template.php)']['link']['link_title']=$safe_org;
		$element['#below']['#menu']['dynamic '.$safe_org.' XXX (see template.php)']['link']['title']=$safe_org;
		$element['#below']['#menu']['dynamic '.$safe_org.' XXX (see template.php)']['link']['href']=$clean_path;
		//$element['#below']['#menu']['dynamic '.$safe_term.' XXX (see template.php)']['link']['class']='menu-link';	
		$element['#below']['#menu']['dynamic '.$safe_org.' XXX (see template.php)']['link']['localized_options']['attributes']['class'][]='menu-link';
		$element['#below']['#menu']['dynamic '.$safe_org.' XXX (see template.php)']['link']['localized_options']['attributes']['class'][]='menu-link-og';


		//display_variable($element);
		//die;

		$SetFlag=1;

	} //End cycling through each organization OG entry term and creating a menu entry for it.

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