Installation Instructions
1. Place user_favorite_links folder into sites/all/modules/custom
2. Go to Administrative Modules page. Refresh a few times in case any issues occur. 
3. Go to Custom/User Favorite Links and activate.Give it 10 minutes to create a new menu structure and run the install code. YOu will know it is complete if 'install complete' appears in green at the top of the modules page.
4. Check the Menu, Views, and Content Type pages. There should be a 'User Favorite Links' entry under each. 
5. If a 'User Favorite Links' entry does not exist for views, go to /admin/structure/views and Click import. Open the views-userlinks.inc in the user_favorite_links module folder and copy and paste the code into the import box. Do not complete view name. Click save. 
6. If a 'user Favorite Links' entry does not exist for content type, go to admin/structure/types/import. Open the contenttype-userlinks.inc in the user_favorite_links module folder. Copy and paste the code into the import box. Click save.

Theming Instructions
1. To theme, copy the user_favorite_links.css into your theme directory. Add it to your .info file. It includes examples for theming the buttons. For theming the table, just use .view-user-favorite-links table, etc. 

Block Configuration Instructions
1. To configure the block, a block should exist on admin/structure/block called 'User Favorite Links.' Use that and not 'User Favorite Menu'. Click configure. 
2. In CSS Classes enter user_favorite_links. 
3. Use Region Settings to specify the area.
4. Use Pages Settings to specify which pages the block should appear on.
5. Set Roles to Authenticated users.

Usage Instructions
1. By default, it will display whs.mil as the default link to logged in users who have no links. If you wish to edit that  - Edit the Global Text Area in No Results Area on the view.
2. If user wishes to add new links, they click 'add new link.' A pop up window appears. They enter the link and hit save. The window should close.
3. If user wishes to edit a link, they click edit beside the link.  
4. If user wishes to add link on a specific page on the site, they click 'Add This Link'.
5. If links do not appear automatically, user can click the refresh option.
6. If user wishes to reorder links, they can edit the order field. By default, the links will order by order # and then title. 
7. By default, site will display the top 10 user favorite links. If a user has more than 10 they can click the 'View All Links' which will show all their links. On this page, user/favorite, users can also delete links.
