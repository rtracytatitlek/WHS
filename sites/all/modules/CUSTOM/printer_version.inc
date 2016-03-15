<?php

?>
<div id="content">
			<a id="main-content"></a>
		<?php
		print render($page['call_to_action']);
		?>	
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
