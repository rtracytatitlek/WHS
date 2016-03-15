<?php
/**
 * @file
 * blocks_sitewide.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function blocks_sitewide_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Commuter Table - Crystal City';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->__pk = '1957d115-1298-4516-8ee0-a196718825e4';
  $fe_block_boxes->__unique_info = 'ô¶|¼.-Ö™á(É]a';
  $fe_block_boxes->machine_name = 'block_commuter_table_crystal';
  $fe_block_boxes->body = '<?php
display_variable($_REQUEST);
?>

<!-- This should be moved to a node -- do this on the final system so that the node mapping is correct -->
<div class="commuter_quicktab_wrapper">
  <div class="commuter_title">Transportation Options - Crystal City</div>
  <span class="commuter_description_wrapper">
    <table class="commuter_description_table">
      <tr class="commuter_description_row">
        <td class="commuter_description">
          Visiting, working in, and traveling between the Pentagon, Mark Center, ad affiliated offices is made convenient through a number of public and WHS-administered transportation options for government employees, contractors, and eligible visitors.  Select the appropriate category below for information on driving, public-transportation, and commuter options.
         </td>
     </tr>
    </table>
  </span>

  <span class="commuter_icon_wrapper">
  <table class="commuter_icon_table">
    <tr class="commuter_icon_1st_row">
      <td class="commuter_icon_td">
        <a href="?commuter=1&location=pentagon&option=1&qt-commuter_options=0#qt-commuter_options">
          <img src="<?php echo theme_path();?>/images/Icons/bike.png" alt="bicycle">
        <br>
        <div class="icon_text">Individual Options</div>
        </a>
      </td>

      <td class="commuter_icon_td">
        <a href="?commuter=1&location=pentagon&option=2&qt-commuter_options=0#qt-commuter_options">
          <img src="<?php echo theme_path();?>/images/Icons/bus.png" alt="bus">
        <br>
        <div class="icon_text">Shuttle Services</div>
        </a>
      </td>

      <td class="commuter_icon_td">
        <a href="?commuter=1&location=pentagon&option=4&qt-commuter_options=0#qt-commuter_options">
          <img src="<?php echo theme_path();?>/images/Icons/car.png" alt="car">
        <br>
        <div class="icon_text">RideShare</div>
        </a>
      </td>

    </tr>
    <tr class="commuter_icon_2nd_row">
      <td class="commuter_icon_td">
        <a href="?commuter=1&location=pentagon&option=5&qt-commuter_options=0#qt-commuter_options">
          <img src="<?php echo theme_path();?>/images/Icons/handicap.png" alt="wheelchair">
        <br>
        <div class="icon_text">Mobility Options</div>
        </a>
      </td>

      <td class="commuter_icon_td">
        <a href="?commuter=1&location=pentagon&option=6&qt-commuter_options=0#qt-commuter_options">
          <img src="<?php echo theme_path();?>/images/Icons/mass_transit.png" alt="mass transit">
        <br>
        <div class="icon_text">Mass Transit</div>
        </a>
      </td>

      <td class="commuter_icon_td">
        <a href="?commuter=1&location=pentagon&option=7&qt-commuter_options=0#qt-commuter_options">
          <img src="<?php echo theme_path();?>/images/Icons/metro.png" alt="metro">
        <br>
        <div class="icon_text">Metro Rail</div>
        </a>
      </td>
    </tr>

  </table>
  </span>

</div>';

  $export['block_commuter_table_crystal'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Commuter Table - Mark Center';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->__pk = 'b52a539b-64de-4b86-a4b1-05cab8979835';
  $fe_block_boxes->__unique_info = 'gk¼À4ÛUË”vïZ*Ô{';
  $fe_block_boxes->machine_name = 'block_commuter_table_mark_center';
  $fe_block_boxes->body = '<?php
display_variable($_REQUEST);
?>

<!-- This should be moved to a node -- do this on the final system so that the node mapping is correct -->
<div class="commuter_quicktab_wrapper">
  <div class="commuter_title">Transportation Options - Mark Center</div>
  <span class="commuter_description_wrapper">
    <table class="commuter_description_table">
      <tr class="commuter_description_row">
        <td class="commuter_description">
          Visiting, working in, and traveling between the Pentagon, Mark Center, ad affiliated offices is made convenient through a number of public and WHS-administered transportation options for government employees, contractors, and eligible visitors.  Select the appropriate category below for information on driving, public-transportation, and commuter options.
         </td>
     </tr>
    </table>
  </span>

  <span class="commuter_icon_wrapper">
  <table class="commuter_icon_table">
    <tr class="commuter_icon_1st_row">
      <td class="commuter_icon_td">
        <a href="?commuter=1&location=pentagon&option=1&qt-commuter_options=0#qt-commuter_options">
          <img src="<?php echo theme_path();?>/images/Icons/bike.png" alt="bicycle">
        <br>
        <div class="icon_text">Individual Options</div>
        </a>
      </td>

      <td class="commuter_icon_td">
        <a href="?commuter=1&location=pentagon&option=2&qt-commuter_options=0#qt-commuter_options">
          <img src="<?php echo theme_path();?>/images/Icons/bus.png" alt="bus">
        <br>
        <div class="icon_text">Shuttle Services</div>
        </a>
      </td>

      <td class="commuter_icon_td">
        <a href="?commuter=1&location=pentagon&option=4&qt-commuter_options=0#qt-commuter_options">
          <img src="<?php echo theme_path();?>/images/Icons/car.png" alt="car">
        <br>
        <div class="icon_text">RideShare</div>
        </a>
      </td>

    </tr>
    <tr class="commuter_icon_2nd_row">
      <td class="commuter_icon_td">
        <a href="?commuter=1&location=pentagon&option=5&qt-commuter_options=0#qt-commuter_options">
          <img src="<?php echo theme_path();?>/images/Icons/handicap.png" alt="wheelchair">
        <br>
        <div class="icon_text">Mobility Options</div>
        </a>
      </td>

      <td class="commuter_icon_td">
        <a href="?commuter=1&location=pentagon&option=6&qt-commuter_options=0#qt-commuter_options">
          <img src="<?php echo theme_path();?>/images/Icons/mass_transit.png" alt="mass transit">
        <br>
        <div class="icon_text">Mass Transit</div>
        </a>
      </td>

      <td class="commuter_icon_td">
        <a href="?commuter=1&location=pentagon&option=7&qt-commuter_options=0#qt-commuter_options">
          <img src="<?php echo theme_path();?>/images/Icons/metro.png" alt="metro">
        <br>
        <div class="icon_text">Metro Rail</div>
        </a>
      </td>
    </tr>

  </table>
  </span>

</div>';

  $export['block_commuter_table_mark_center'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Commuter Table - Pentagon';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->__pk = '527a3222-93be-4466-a8c5-1898bcb6d10a';
  $fe_block_boxes->__unique_info = 'þ1p£c¬Ž“Qs+S ';
  $fe_block_boxes->machine_name = 'block_commuter_table_pentagon';
  $fe_block_boxes->body = '<!-- This should be moved to a node -- do this on the final system so that the node mapping is correct -->
<div class="commuter_quicktab_wrapper">
  <div class="commuter_title">Transportation Options - Pentagon</div>
  <span class="commuter_description_wrapper">
    <table class="commuter_description_table">
      <tr class="commuter_description_row">
        <td class="commuter_description">
          Visiting, working in, and traveling between the Pentagon, Mark Center, ad affiliated offices is made convenient through a number of public and WHS-administered transportation options for government employees, contractors, and eligible visitors.  Select the appropriate category below for information on driving, public-transportation, and commuter options.
         </td>
     </tr>
    </table>
  </span>

  <span class="commuter_icon_wrapper">
  <table class="commuter_icon_table">
    <tr class="commuter_icon_1st_row">
      <td class="commuter_icon_td">
        <a href="?commuter=1&location=pentagon&option=1&qt-commuter_options=0#qt-commuter_options">
          <img src="<?php echo theme_path();?>/images/Icons/bike.png" alt="bicycle">
        <br>
        <div class="icon_text">Individual Options</div>
        </a>
      </td>

      <td class="commuter_icon_td">
        <a href="?commuter=1&location=pentagon&option=2&qt-commuter_options=0#qt-commuter_options">
          <img src="<?php echo theme_path();?>/images/Icons/bus.png" alt="bus">
        <br>
        <div class="icon_text">Shuttle Services</div>
        </a>
      </td>

      <td class="commuter_icon_td">
        <a href="?commuter=1&location=pentagon&option=4&qt-commuter_options=0#qt-commuter_options">
          <img src="<?php echo theme_path();?>/images/Icons/car.png" alt="car">
        <br>
        <div class="icon_text">RideShare</div>
        </a>
      </td>

    </tr>
    <tr class="commuter_icon_2nd_row">
      <td class="commuter_icon_td">
        <a href="?commuter=1&location=pentagon&option=5&qt-commuter_options=0#qt-commuter_options">
          <img src="<?php echo theme_path();?>/images/Icons/handicap.png" alt="wheelchair">
        <br>
        <div class="icon_text">Mobility Options</div>
        </a>
      </td>

      <td class="commuter_icon_td">
        <a href="?commuter=1&location=pentagon&option=6&qt-commuter_options=0#qt-commuter_options">
          <img src="<?php echo theme_path();?>/images/Icons/mass_transit.png" alt="mass transit">
        <br>
        <div class="icon_text">Mass Transit</div>
        </a>
      </td>

      <td class="commuter_icon_td">
        <a href="?commuter=1&location=pentagon&option=7&qt-commuter_options=0#qt-commuter_options">
          <img src="<?php echo theme_path();?>/images/Icons/metro.png" alt="metro">
        <br>
        <div class="icon_text">Metro Rail</div>
        </a>
      </td>
    </tr>

  </table>
  </span>

</div>';

  $export['block_commuter_table_pentagon'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Text in the center of the Directorate Information Bar';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->__pk = 'f8b3132c-2001-4ea8-b88b-6bcbde42815e';
  $fe_block_boxes->__unique_info = '0xâÒ©QKó(Èb°…I+';
  $fe_block_boxes->machine_name = 'block_directorate_center_info';
  $fe_block_boxes->body = '<?
$WhichDirectorate=$_SESSION[\'directorate\'];

echo \'<div class="directorate_top_middle">\';

$roles=check_role();

//It is possible more than one role will be returned.  We need to prioritize as follows:
//1 = group member;  2 = WHS employee; 3 = customer or other
if ($roles[\'Group\']==TRUE || $roles[\'Admin\']==TRUE) {
//Display nothing here for middle.  This is done in boxes (panes) above this pane to account for default and custom GROUP content.
        return;
}//End checking if this is a GROUP display

if ($roles[\'Employee\']==TRUE) {

	$view=\'organization_directorate_top_row\';
	$display=\'block_2\';
	$arg=array($WhichDirectorate);
	
	$results=views_get_view($view);
        $results->set_display($display);
        $results->set_arguments($arg);
        echo $results->render();      
        return;
}//End checking if this is an EMPLOYEE display

//Treat everyone else as a customer
	$view=\'organization_directorate_top_row\';
	$display=\'block_5\';
	$arg=array($WhichDirectorate);
	
	$results=views_get_view($view);
        $results->set_display($display);
        $results->set_arguments($arg);
        echo $results->render();      
        return;


echo \'</div>\';

?>';

  $export['block_directorate_center_info'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Called from the home page tab group. Holds favorites';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->__pk = 'dc997a67-9b52-4698-96ff-c56bf58fd2e0';
  $fe_block_boxes->__unique_info = '§î5èrŽ\'úÎ¡;"®ßë';
  $fe_block_boxes->machine_name = 'block_favorites';
  $fe_block_boxes->body = '<h2>  Display FAVORITES here.  This is a BLOCK that can hold content. </h2>';

  $export['block_favorites'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Footer -- logo and location (left)';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->__pk = 'c23d782a-dfce-4918-a8d3-5f4e8c74b9e0';
  $fe_block_boxes->__unique_info = 'ùl°ù9Ž´j“ÿÇˆO';
  $fe_block_boxes->machine_name = 'block_footer';
  $fe_block_boxes->body = '<!-- See WHS.CSS for controls *under footer section -->

<div class="footeraddress">
  <img alt="WHS Logo" src="<?php echo theme_path()?>/images/logo-footer.png" style="height:62px; width:63px" />

  <div class="imagetext">
     <strong>Washington Headquarters Services</strong><br />
     1155 Defense Pentagon<br />
     Washington, DC 20301-1155
   </div>
</div>
';

  $export['block_footer'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Icon links below the services icon on the home page.';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->__pk = NULL;
  $fe_block_boxes->__unique_info = NULL;
  $fe_block_boxes->machine_name = 'block_icon_links';
  $fe_block_boxes->body = '<div class="home-page-icons">
  <div id="extra-link"><a href="#"><img src="<?php echo theme_path();?>/images/MyBiz.png" class="home-icon-img"></a></div>
  <div id="extra-link"><a href="#"><img src="<?php echo theme_path();?>/images/pipeline.png" class="home-icon-img"></a></div>
  <div id="extra-link"><a href="#"><img src="<?php echo theme_path();?>/images/DAM_Straight_Talk.png" class="home-icon-img"></a></div>
  <div id="extra-link"><a href="#"><img src="<?php echo theme_path();?>/images/CFC.png" class="home-icon-img"></a></div>
</div>';

  $export['block_icon_links'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'jquery general routines (right side nav)';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->__pk = 'aa48dc43-e1d9-441a-9182-23e3078b6a49';
  $fe_block_boxes->__unique_info = '‚A—/qò3kyJé`';
  $fe_block_boxes->machine_name = 'block_jquery3';
  $fe_block_boxes->body = ' <script>
  //Equivalent in DRUPAL to document.ready
   (function($){

//This controls the right side menu (services).  The code for this is in the custom module whs_taxonomy_menu
//SRH Feb 2015
//Update in Nov 2015


$("li.collapsed").click(function(e){
// "e" represents each iteration of the LI\'s in the tree (parent->child).  Jquery automatically cycles through EACH family members (e) for all LI\'s in the tree.  See RETURN FALSE to break out.
/* 
  //Diagnostics.
  console.log(this);
  console.log(e);
  alert(e.toElement.localName);
  alert(e.toElement.localName == "a");
*/
  //If we don\'t disqualify "<a>" from processing, the LI "umbrella" covers all click on children elements (of which <A> is a subset of each LI in the family tree).
  //We could have used TARGET also, however, toElement is a more accurate rep.
  if(e.toElement.localName == "a") return;
  //Toggle the sub-menus on and off based on clicking on th LI\'s.
  $(this).toggleClass("collapsed expanded");

  //THIS IS CRITICAL.  To stop the "click" from effecting EACH LI child of the prent LI, you must break out of the click routine.
  return false;
});




})(jQuery);

</script>';

  $export['block_jquery3'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'JQuery controller for Quicktab display (tabs)';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->__pk = NULL;
  $fe_block_boxes->__unique_info = NULL;
  $fe_block_boxes->machine_name = 'block_jquery_footer_1';
  $fe_block_boxes->body = '<?php

// CONTROL WHICH TABS ARE SHOWN HERE - presently just TID flag in the URL.  Could be expanded as needed.

if (isset($_REQUEST[\'tid\'])) {

//Determine if this is a program landing page or description landing page (services).  This is controlled by a field on the taxonomy term
$term=taxonomy_term_load($_REQUEST[\'tid\']);

$page_type=$term->field_select_a_page_template[\'und\'][0][\'value\'];

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
        //Hide th announcement tab. Only used for....announcements!
        $(".tab8").hide();           

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

    for (x=0; x<8;x=x+1){
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
    $(".tab8").hide(); //Announcement
  })(jQuery);
</script>
\';
} //End checking if this is a TID page (service) or not



?>
';

  $export['block_jquery_footer_1'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Text to display in the notice area for each directorate';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->__pk = 'dcf8b882-604d-4a86-9ae1-125cb5fd20de';
  $fe_block_boxes->__unique_info = '€ecý‰9@Âª…ßÇ×Êp';
  $fe_block_boxes->machine_name = 'block_notice_area';
  $fe_block_boxes->body = '<?php
//echo \'<div class="ui-accordion-header ui-helper-reset ui-state-default ui-corner-all" role="tab" aria-expanded="false" tabindex="1">\';
//echo \'<span class="ui-icon ui-icon-triangle-1-e"></span>\';
display_directorate_information();
//echo \'</div>\';
?>
';

  $export['block_notice_area'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'OPM Status indicator (Green/Red)';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->__pk = '7ff10a10-9913-46b4-963a-ba76b68a4575';
  $fe_block_boxes->__unique_info = 'Ï9ˆˆ?®òX]›ú";_ö';
  $fe_block_boxes->machine_name = 'block_opm';
  $fe_block_boxes->body = '<?php

echo \'<div id="block-indicator-block-opmIndicator-block" class="block-opmIndicator-block">\';
  try {
    //This function is controlled in the OPM custom module.  Essentially an RSS pull from the OPM main site.
//NOTE!  Turned this off because there is not connection to an outside network from the DEV environment.  Just causes errors.  UNCOMMENT THIS BEFORE TESTING ON A LIVE NETWORK.  16 Jun 2014 Hanover
    echo getOPMStatus();
  }//End trying to load the OPM Status
  
  catch (Exception $e) {
        watchdog ("PHP","Unable to load OPM module: ".$e->getMessage());
  }
echo \'</div>\';
?>';

  $export['block_opm'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Service Pages (category, landing, and detail) on the home page';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->__pk = '45544921-b09c-403d-a554-cfa56fb8ee32';
  $fe_block_boxes->__unique_info = 'QÍÊá…ø¬B"vß|1ÄÖð';
  $fe_block_boxes->machine_name = 'block_service_pages';
  $fe_block_boxes->body = '<?php

  //This checks out the URL to determine if a VID has been set (this is done if the user has already selected a service category).
  //If not, then show the category table (with icons). If it is set, then show all the top level programs for that category instead.
  //VID is set in the VIEW:  WHS Service Table
  //TID is set if there is a speicific program selected
  //SRH  Feb 2015
 
//First, are we viewing a node?
$taxonomy=return_taxonomy(); //This is in the custom module.  Will convert a node/xxx to its linked TID and VID.  Returns FALSE if not node in URL

if ($taxonomy[\'tid\']==FALSE) {
  $temp=taxonomy_term_load(arg(2));
  $TID=$temp->tid;
  $VID=$temp->vid;
}else{
  //get the VID from the taxonomy
  $TID=$taxonomy[\'tid\'];
  $VID=$taxonomy[\'vid\'];
}

if ($TID=="") {$TID=$_REQUEST[\'tid\'];}
if ($VID=="") {$VID=$_REQUEST[\'vid\'];}


  if ($VID!="" && $TID==""){
    display_service_content($VID,0);
  }else if ($VID!="" && $TID!=""){
    display_service_content($VID,$TID);
  }else{
    display_service_content(-1,0);
  }

?>
';

  $export['block_service_pages'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Get Weather (uses weather custom mod - RSS feed)';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->__pk = 'c809fa72-43fe-4ba7-9486-115797505836';
  $fe_block_boxes->__unique_info = '/i±¤â·ƒ®„ -Ô¯až';
  $fe_block_boxes->machine_name = 'block_weather';
  $fe_block_boxes->body = '<?php

function base_url() {
return $base_url;
}

echo \'<div id="block-weather-block-weather-block" class="block-weather-block">\';
  try {
    //This function is controlled in the weather custom module.  Essentially an RSS pull from the weather underground.
//NOTE!  Turned this off because there is not connection to an outside network from the DEV environment.  Just causes errors.  UNCOMMENT THIS BEFORE TESTING ON A LIVE NETWORK.  16 Jun 2014 Hanover
    echo getWeatherDoD();
  }//End trying to load the weather
  
  catch (Exception $e) {
        watchdog ("PHP","Unable to load weather module: ".$e->getMessage());
  }
echo \'</div>\';
?>';

  $export['block_weather'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Emergency Links (Column 1) - Located on Emergency Landing Page';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->__pk = '52f77cea-55a9-4aef-b76a-d80ce302f1c2';
  $fe_block_boxes->__unique_info = 'FõL»=™FÉ7òømn';
  $fe_block_boxes->machine_name = 'emergency_links_col1';
  $fe_block_boxes->body = '<div class="emergency_page_links">

	<div class="first_column">  
		<div class="column_header">Federal Emergency Management Resources Links</div>		
		<a href="#" class="table_data_link">Are your ready?  Guide</a>
		<a href="#" class="table_data_link">Centers for Disease Control and Prevention (CDC)</a>
		<a href="#" class="table_data_link">Citizen Corps</a>
		<a href="#" class="table_data_link">Federal Emergency Management Agency (FEMA)</a>
	</div>

</div>';

  $export['emergency_links_col1'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Emergency Links (Column 2) - Located on Emergency Landing Page';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->__pk = '99dc5bdf-c404-4a68-b5bf-ee00d8fd4e91';
  $fe_block_boxes->__unique_info = '‰çlEF—êº’„¤ûãk4';
  $fe_block_boxes->machine_name = 'emergency_links_col2';
  $fe_block_boxes->body = '<div class="emergency_page_links">
	
	<div class="second_column">  	
        <div class="column_header">State Emergency Management Resources Links</div>
        <a href="#" class="table_data_link">District of Columbia - Homeland Security and Emergency Management Agency</a>
		<a href="#" class="table_data_link">Maryland - Emergency Management Agency</a>
		<a href="#" class="table_data_link">Virginia - Department of Emergency Management</a>	
	</div>

</div>';

  $export['emergency_links_col2'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Emergency Links (Column 3) - Located on Emergency Landing Page';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->__pk = '145d9451-4843-4d40-93d7-ac1b94d00dbb';
  $fe_block_boxes->__unique_info = '·¿Ïó#IB=pH­â';
  $fe_block_boxes->machine_name = 'emergency_links_col3';
  $fe_block_boxes->body = '<div class="emergency_page_links">
	
	<div class="third_column">  	
        <div class="column_header">Regional Resources Links</div>
        <a href="#" class="table_data_link">American Red Cross National Capital Region</a>
		<a href="#" class="table_data_link">Metropolitan Washington Council of Governments</a>
		<a href="#" class="table_data_link">National Capital Region News and Information</a>
	</div>

</div>';

  $export['emergency_links_col3'] = $fe_block_boxes;

  return $export;
}
