(function ($) {
	$(document).ready(function(){
		
		var Page = {
			
        	init: function(){
				
				this.initPage();
				this.initForm();
				this.initMenu();
        	},
			
			initPage: function(){
				
				// Animations
				$('.slogan').show().addClass('animated fadeInUp');
					
			},
			
			initForm: function(){
				
				$('#datefrom').daterangepicker({
			        singleDatePicker: true,
			        showDropdowns: true,
			        locale: {
			            format: 'DD.MM.YYYY'
			        }
			    });

				
			},
			
			initMenu: function(){
				
				// Fixed menu
				$(window).scroll(function() {
					
					var $content 	= $("section");
					var $menu 		= $(".navbar-main");
					
					var window_offset = $content.offset().top - $(window).scrollTop() - $menu.height();
					
					if(window_offset < 0){
						$menu.addClass('fixed');
					}else{
						$menu.removeClass('fixed');
					}
					
					
				//	console.log(window_offset);
				});
				
			},
			
        };

        Page.init();

	});

}) (jQuery);