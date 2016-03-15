<?php
// $Id: page.tpl.php,v 1.8.2.4 2010/11/19 14:42:44 danprobo Exp $?>






<div id="mainwrapper">
<div id="header">

<div id="header-wrapper">


<?php



	//Is there a classification bar at the top of the screen?	
	if ($page['top_classification'])	{
		echo '<div id="top-classification">';
		print render ($page['top_classification']);
		echo '</div>';
	} // End checking for top classification bar
?>

	<?php if ($logo): ?> 
		<div id="logo-wrapper">
			<div class="logo">
				<a href="<?php print $base_path ?>" title="<?php print t('Home') ?>"><img src="<?php print $logo ?>" alt="<?php print t('Home') ?>" /></a>
			</div>
		</div><!-- end logo wrapper -->
	<?php endif; ?>


	<?php if ($site_name || $site_slogan) : ?>
		<div id="branding-wrapper">
			<?php if ($site_name) : ?>
				<?php if ($is_front) : ?>
					<h1 class="site-name"><a href="<?php print $base_path ?>" title="<?php print $site_name ?>"><?php print $site_name ?></a></h1>
				<?php endif; ?>
				<?php if (!$is_front) : ?>
					<h2 class="site-name"><a href="<?php print $base_path ?>" title="<?php print $site_name ?>"><?php print $site_name ?></a></h2>
				<?php endif; ?>
			<?php endif; ?>
			<?php if ($site_slogan) : ?>
				<div class='site-slogan'><?php print $site_slogan; ?></div>
			<?php endif; ?>
        	</div><!-- end branding wrapper -->
	<?php endif; ?>
	
	<!-- SEARCH REGION -->
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



      </div><!-- end header-wrapper -->
</div> <!-- /header -->
<div style="clear:both"></div>

<div id="menu">
<div id="rounded-menu-left"></div>
<?php if ($main_menu || $page['superfish_menu']): ?>

  <?php
	//We only want to use superfish (Nice Menus)
	//if there is something IN superfish.  Otherwise, default 
	//to generic main menu. Jul 2014

	if ($page['superfish_menu']!="") {
		echo '<div id="superfish">';
			print render ($page['superfish_menu']); 
						
		echo '</div>';
	}else{
		echo '<div id="nav">';
     			print theme('links__system_main_menu', array				('links' => $main_menu));
		echo '</div>';
 	}//End checking if this is a superfish or regular menu.
  ?>

<?php endif; ?>
<div id="rounded-menu-right"></div>
</div> <!-- end menu -->
<div style="clear:both"></div>

<div id="alert-bar"><?php print render ($page['alert_bar']); ?></div>

<?php if ($page['highlighted']): ?><div id="mission-wrapper"><div id="mission"><?php print render ($page['highlighted']); ?></div></div><?php endif; ?>

 <?php if($page['preface_first'] || $page['preface_middle'] || $page['preface_last']) : ?>
    <div style="clear:both"></div>
    <div id="preface-wrapper" class="in<?php print (bool) $page['preface_first'] + (bool) $page['preface_middle'] + (bool) $page['preface_last']; ?>">
          <?php if($page['preface_first']) : ?>
          <div class="column A">
            <?php print render ($page['preface_first']); ?>
          </div>
          <?php endif; ?>
          <?php if($page['preface_middle']) : ?>
          <div class="column B">
            <?php print render ($page['preface_middle']); ?>
          </div>
          <?php endif; ?>
          <?php if($page['preface_last']) : ?>
          <div class="column C">
            <?php print render ($page['preface_last']); ?>
          </div>
          <?php endif; ?>
      <div style="clear:both"></div>
    </div>
    <?php endif; ?>

<div style="clear:both"></div>
<div id="wrapper">

    <?php if ($page['sidebar_first']): ?>
      <div id="sidebar-left" class="column sidebar"><div class="section">
        <?php print render($page['sidebar_first']); ?>
      </div></div> <!-- end sidebar-first -->
    <?php endif; ?>

<div id="content">
			<a id="main-content"></a>
			<?php if ($page['content_top']) : ?><div class="content-top"><?php print render ($page['content_top']); ?></div>
			<?php endif; ?>
			<?php if ($page['call_to_action'] && $is_front) : ?><div class="call_to_action"><?php print render ($page['call_to_action']); ?></div>
			<?php endif; ?>
			<!-- This is now controlled from within a block to allow for easier coordination and movement.  Aug 2014
				<?php if (!$is_front) print "<div class=breadcrumb>" . $breadcrumb . "</div>"; ?> 
			-->
			<?php if ($show_messages) { print $messages; }; ?>
      		<?php print render($title_prefix); ?>
      			<?php if ($title): ?>
        				<h1 class="title" id="page-title">
         			 		<?php print $title; ?> <a href="/node/add/user-favorite-links?add=this&url=<?php echo urlencode($_SERVER['REQUEST_URI']); ?>&title=<?php echo urlencode($title); ?>">(add to front)</a>
        				</h1>
     				 <?php endif; ?>
      		<?php print render($title_suffix); ?>
      		<?php if ($tabs && $user->uid != 25): ?>
        			<div class="tabs">
          				<?php print render($tabs); ?>
        			</div>
      		<?php endif; ?>
      		<?php print render($page['help']); ?>
      		<?php if ($action_links): ?>
        			<ul class="action-links">
          				<?php print render($action_links); ?>
        			</ul>
      		<?php endif; ?>
		      <?php 
		      	//We need to convert %23's back to #'s.  This happens on the left menu.  Drupal URL override in template.php is not controlling this
		      	//beyond displaying properly.  SRH August 2014
		      	if (isset($page['content']['system_main']['content']['#markup']))  {
		      		$page['content']['system_main']['content']['#markup']=str_replace('%23','#',$page['content']['system_main']['content']['#markup']);
		      	} 
		      if (isset($page['content'])) : ?><div class="content-middle"><?php print render ($page['content']); 
		      ?>
		      </div>
			<?php endif; ?>
			<?php if ($page['content_bottom']) : ?><div class="content-bottom"><?php print render ($page['content_bottom']); ?></div>
			<?php endif; ?>

</div> <!-- end content -->

    <?php if ($page['sidebar_second']): ?>
      <div id="sidebar-right" class="column sidebar"><div class="section">
        <?php print render($page['sidebar_second']); ?>
      </div></div> <!-- end sidebar-second -->
    <?php endif; ?>
<div style="clear:both"></div>
</div> <!-- end wrapper -->


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


 <?php if($page['bottom_1'] || $page['bottom_2'] || $page['bottom_3'] || $page['bottom_4']) : ?>
    <div style="clear:both"></div><!-- Do not touch -->
    <div id="bottom-wrapper" class="in<?php print (bool) $page['bottom_1'] + (bool) $page['bottom_2'] + (bool) $page['bottom_3'] + (bool) $page['bottom_4']; ?>">
          <?php if($page['bottom_1']) : ?>
          <div class="column A">
            <?php print render ($page['bottom_1']); ?>
          </div>
          <?php endif; ?>
          <?php if($page['bottom_2']) : ?>
          <div class="column B">
            <?php print render ($page['bottom_2']); ?>
          </div>
          <?php endif; ?>
          <?php if($page['bottom_3']) : ?>
          <div class="column C">
            <?php print render ($page['bottom_3']); ?>
          </div>
          <?php endif; ?>
          <?php if($page['bottom_4']) : ?>
          <div class="column D">
            <?php print render ($page['bottom_4']); ?>
          </div>
          <?php endif; ?>
      <div style="clear:both"></div>
    </div><!-- end bottom -->
    <?php endif; ?>

<div style="clear:both"></div>

<div id="footer-wrapper">
	<!-- This is the feedback tab located at the bottom of every page -->
	<div class="feedback_tab"><a href="/contact"><img src="/sites/all/themes/WHS/images/Feedback.png"></a></div>
	
	<?php if ($page['footer']): ?>

		<div id="footer">
		 <?php print render ($page['footer']); ?>
		</div>
	<?php endif; ?>

	<?php if($secondary_menu) : ?>
		<div id="subnav-wrapper">
			<?php //print theme('links__system_secondary_menu', array('links' => $secondary_menu, 'attributes' => array('id' => 'subnav', 'class' => array('links', 'clearfix')))); ?>
		</div>
	<?php endif; ?>

</div> <!-- end footer wrapper -->

<?php
	//Is there a classification bar at the bottom of the screen?	
	if ($page['bottom_classification'])	{
		echo '<div id="bottom-classification">';
		print render ($page['bottom_classification']);
		echo '</div>';
	} // End checking for bottom classification bar
?>


<div style="clear:both"></div>
 
</div>
</div>
<?php if ($user->uid == 25): ?>
<style>#toolbar { display:none; }</style>
<?php endif; ?>