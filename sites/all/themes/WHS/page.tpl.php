<?php
// $Id: page.tpl.php,v 1.8.2.4 2010/11/19 14:42:44 danprobo Exp $
?>
<div id="mainwrapper">
	
	<div id="header">

	  <div id="header-wrapper">

		<?php

			$Print_Flag=FALSE;
			//Always check to see if this page reload calls for saving a favorite.

			//Check to see if this is a PRINT page.  Called when a user clicks the "PRINT" button from an article/tax page.
			//*********************************
			if (isset($_REQUEST['print'])) {

				//Required to decompress the passed page variable.  Page is reset to 0 otherwise
	
				$temp=$_REQUEST['page'];
				$firstpass=urldecode($temp);
				//$page=unserialize($firstpass);
				//$page_a=json_decode($temp);


				$Print_Flag=TRUE;
		
				$vid=$_REQUEST['vid'];
				$tid=$_REQUEST['tid'];

				$term=taxonomy_term_load($tid);

				$URL="?vid=$vid&tid=$tid&qt-whs_home_page_service_table=2";
				global $base_path;

				//OFfer to show print menu

				echo '<div class="print_page_button">';
					echo '<input type="submit" class="print_button" value="PRINT NOW" onclick="window.print()">';
					echo '<input type="submit" class="return_button" value="RETURN TO REGULAR PAGE" onclick="window.location.href=\''.$base_path.$URL.'\';">';
				echo '</div>';

			}//End checking for valid PRINT


			//Should we be storing or deleting this page from favorites
			//**********************************
			if (isset($_REQUEST['task'])){
				$task=$_REQUEST['task'];
			}else{
				$task=0;
			}

			if ($task=="1") {
				//This function is located in whs_custom.module
				//NOV 2014
				favorites($_REQUEST['q'],"1");
			}//End checking if we need to add this page to favorites


			//On print pages, we only want the center content
			if ($Print_Flag!=TRUE) {

				//Is there a classification bar at the top of the screen?	
				if ($page['top_classification'])	{
					echo '<div id="top-classification">';
						print render ($page['top_classification']);
					echo '</div>';
				} // End checking for top classification bar



				//Still in the HEADER, but now able to revert to standard TPL functionality/layout.
		?>

				<!-- ********* ALERT BAR *********** -->
				<div id="alert-bar"><?php print render ($page['alert_bar']); ?></div>


				<!-- ********* LOGO SECTION (PREFACE FIRST) *******  -->
				<?php if ($logo): ?> 
					<div id="logo-wrapper">
						<div class="logo">
							<a href="<?php print $base_path ?>" title="<?php print t('Home') ?>"><img src="<?php print $logo ?>" alt="<?php print t('Home') ?>" /></a>
							<?php print render ($page['preface_first']); ?>
						</div>
					</div><!-- end logo wrapper -->
				<?php endif; ?>
	
				<!-- ********* SEARCH REGION//FEED ICONS ******** -->
     				<?php if ($page['top_middle_search_box']): ?>
			  		<div id="top-middle-search-box">
					    <?php print render ($page['top_middle_search_box']); ?>
				 	</div>
				<?php endif; ?>

				<?php if ($page['search_box']): ?>
					<div id="search-box">
						<?php print render ($page['search_box']); ?>
					</div><!-- /search-box -->
				<?php endif; ?>

				<?php if ($feed_icons): ?>
					<div class="feed-wrapper">
						<?php print $feed_icons; ?>
					</div>
				<?php endif; ?>
			<?php
			}//End checking if we are on a PRINT page only -- hide things we don't need if we are
			?>

		<!-- This indent would be take by the closer for PHP which is already closed above...see ?> -->

	    </div><!-- end header-wrapper -->
	</div> <!-- /header -->
	
	<!-- **** Still in DIV MAINWRAPPER from the top -->

	<div style="clear:both"></div>


	<?php 
	if ($Print_Flag!=TRUE) {

		//<!-- ****** MAIN USER MENU ******* -->
		echo '<div id="menu">';
			echo '<div id="rounded-menu-left"></div>';

			//We only want to use superfish (Nice Menus)
			//if there is something IN superfish.  Otherwise, default 
			//to generic main menu. Jul 2014
			if ($page['superfish_menu']!="") {
				echo '<div id="superfish">';
					print render ($page['superfish_menu']); 

					//Display the location of the user.  Default is PENTAGON
					//This function is controlled in custom.module
					echo location_control();

		

					//Render the USER NAME on the menu bar.
					echo '<div class="user-info">
						Welcome, 
						<span class="uName-highlight">';
							global $user;
							if (!$user->name) {
								$name="Guest";
							}else{
								$name=$user->name;
							}
							print $name;
							
						echo '</span>';
					echo '</div>';
				echo '</div>';
			}else{
				echo '<div id="nav">';
		     			print theme('links__system_main_menu', array('links' => $main_menu));
				echo '</div>';
		 	}//End checking if this is a superfish or regular menu.

			echo '<div id="rounded-menu-right"></div>';
		echo '</div> <!-- end menu -->';
	}//End checking if we are on a print page or not.
	?>

	<!-- Still in DIV MAINWRAPPER -->

      	<div style="clear:both"></div>
	

	<!--  ***** SIDEBAR FIRST (left sidebar) ****** -->
    		<?php if ($page['sidebar_first']): ?>
			<div id="sidebar-left" class="column sidebar">
				<div class="section">
				        <?php print render($page['sidebar_first']); ?>
			      	</div>
			</div> <!-- end sidebar-first -->
  		<?php endif; ?>
	
	<!-- **** Still in DIV MAINWRAPPER from the top -->


	<!-- ****** MAIN CONTENT ******** -->
	<!-- **************************** -->
	<div id="content">
		<a id="main-content"></a>
		<?php if ($page['call_to_action'] && $is_front) : ?>
			<div class="call_to_action">
				<?php print render ($page['content_top']); ?></div>
				<?php print render ($page['call_to_action']); ?>
			</div>
		<?php endif; ?>

		<!-- **** BREADCRUMBS are controlled on PANEL page now. **** -->
		<?php //if (!$is_front) print "<div class=breadcrumb>" . $breadcrumb . "</div>"; ?> 


		<!-- **** MESSAGES **** -->
		<?php if ($show_messages) { print $messages; }; ?>


		<!-- **** TITLE **** -->
	      	<?php print render($title_prefix); ?>
	      		<?php if ($title): ?>
        			<h1 class="title" id="page-title">
         		 		<?php print $title; ?> <a href="/node/add/user-favorite-links?add=this&url=<?php echo urlencode($_SERVER['REQUEST_URI']); ?>&title=<?php echo urlencode($title); ?>">(add to front)</a>
        			</h1>
     			 <?php endif; ?>
     
	 	<?php print render($title_suffix); ?>

		<!-- ***** TABS **** -->
		<?php if ($tabs && $user->uid != 25): ?>
        		<div class="tabs">
          			<?php print render($tabs); ?>
        		</div>
	      	<?php endif; ?>

		<!-- **** HELP **** -->
      		<?php print render($page['help']); ?>

		<!-- **** ACTION LINKS**** -->
      		<?php if ($action_links): ?>
       			<ul class="action-links">
       				<?php print render($action_links); ?>
       			</ul>
      		<?php endif; ?>


		<!--*** MAIN PAGE CONTENT *** -->
		<?php 
		    	//We need to convert %23's back to #'s.  This happens on the left menu.  Drupal URL override in template.php is not controlling this
		      	//beyond displaying properly.  SRH August 2014

		      	if (isset($page['content']['system_main']['content']['#markup']))  {
		      		$page['content']['system_main']['content']['#markup']=str_replace('%23','#',$page['content']['system_main']['content']['#markup']);
		      	} 
		      	
			if (isset($page['content'])) {
				echo '<div class="content-middle">';
					print render ($page['content']); 
				echo '</div>';
			}

		?>
	
		<!-- ****** BOTTOM MAIN CONTENT ***** -->
		<?php if ($page['content_bottom']) : ?>
			<div class="content-bottom">
				<?php print render ($page['content_bottom']); ?>
			</div>
		<?php endif; ?>

	<!-- End DIV Content (main content)-->
	</div>


	<!-- **** Still in DIV MAINWRAPPER from the top -->

	<!-- **** SIDEBARD SECOND (right side) ***** -->
		<?php if ($page['sidebar_second']): ?>
			<div id="sidebar-right" class="column sidebar">
				<div class="section">
				        <?php print render($page['sidebar_second']); ?>
	      			</div>
			</div> <!-- end sidebar-second -->
		<?php endif; ?>

	<div style="clear:both"></div>



	</div> <!-- end wrapper -->


	<!-- **** Still in DIV MAINWRAPPER from the top -->

	<!-- **** BOTTOM content boxes outside of MAIN CONTENT **** -->
	<?php if($page['bottom_first'] || $page['bottom_middle'] || $page['bottom_last']) : ?>
			<div style="clear:both"></div>
    			<div id="bottom-teaser" class="in<?php print (bool) $page['bottom_first'] + (bool) $page['bottom_middle'] + (bool) $page['bottom_last']; ?>">
		          	<?php if($page['bottom_first']) : ?>
			        	<div class="column A">
						<?php print render ($page['bottom_first']); ?>
			          	</div>
				<?php endif; ?>
				<?php if($page['bottom_middle']) : ?>
					<div class="column B">
						<?php print render ($page['bottom_middle']); ?>
          				</div>
         			<?php endif; ?>
		          	<?php if($page['bottom_last']) : ?>
	         			<div class="column C">
						<?php print render ($page['bottom_last']); ?>
					</div>
				<?php endif; ?>

			      	<div style="clear:both"></div>
    			</div> <!-- end bottom first etc. -->

    	<?php endif; ?>


	<!-- **** Still in DIV MAINWRAPPER from the top -->


	<div style="clear:both"></div>



	<?php
	//On print pages, we only want the center content -- so hide the footer.
	if ($Print_Flag!=TRUE) {
		?>

		<!-- ****** FOOTER ****** -->
		<div id="footer-wrapper">
			<!-- This is the feedback tab located at the bottom of every page -->
			<div class="feedback_tab"><a href="mailto:whs_support@whs.gov">
				<img src="<?php echo theme_path();?>/images/Feedback.png"></a>
			</div>

			<?php if ($page['footer']): ?>
				<div id="footer">
					 <?php print render ($page['footer']); ?>
				</div>
			<?php endif; ?>
	
			<!-- *** SECONDARY MENU *** -->

			<?php if($secondary_menu) : ?>
				<div id="subnav-wrapper">
					<?php //print theme('links__system_secondary_menu', array('links' => $secondary_menu, 'attributes' => array('id' => 'subnav', 'class' => array('links', 'clearfix')))); ?>
				</div>
			<?php endif; ?>
		</div>
		<?php
		// ********* BOTTOM CLASSIFICATION *****
		//Is there a classification bar at the bottom of the screen?	
		if ($page['bottom_classification'])	{
			echo '<div id="bottom-classification">';
				print render ($page['bottom_classification']);
			echo '</div>';
		} // End checking for bottom classification bar
		?>

		<div style="clear:both"></div>

	<?php 
	} //End checking if this is a print page 
	?>


<!-- Close the MAINWRAPPER -->

</div>