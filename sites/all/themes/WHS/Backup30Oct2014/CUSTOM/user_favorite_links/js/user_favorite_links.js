(function($){
$(document).ready(function(){
	 $( ".user_favorite_links .deletelink a" ).click(function() {
					deletewin = window.open(this.href, "Delete Link", "width=400, height=375");
					 event.preventDefault();
					// setTimeout( function() {deletewin.close}, 3000);	
	});
	
	 $( ".user_favorite_links .newwindow a" ).click(function() {
                    window.open(this.href, "User Favorite Links", "width=400, height=375");
                    event.preventDefault();
					setTimeout( function() {location.reload()}, 10500); //Refresh page to show new link
	});
	
	 $( ".user_favorite_links a.newwindow" ).click(function() {
                    window.open(this.href, "User Favorite Links", "width=400, height=375");
                    event.preventDefault();
					setTimeout( function() {location.reload()}, 10500); //Refresh page to show new link
	});
	 $( ".user_favorite_links .refreshlink" ).click(function() {
					location.reload();
	 });

	$('.js .page-node-add-user-favorite-links input.form-submit').click(function(){
		setTimeout( function() {window.close();}, 1500); //Delay closing window until after action executes
	});
		$('.js .page-node-edit.node-type-user-favorite-links input.form-submit').click(function(){
		setTimeout( function() {window.close();}, 1800); //Delay closing window until after action executes
	});
});
})(jQuery);
