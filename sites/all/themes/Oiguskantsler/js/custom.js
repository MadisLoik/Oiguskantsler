function load_more_s(arv,type,language) {
    //alert(arv);
    
    
    if(type==2){
    var button = $('#load_more_u');
    
    var loaded = $('#load_more_u').attr('loaded_value');
    
    var to_add = 5;
    
    var new_value = parseInt(loaded) + parseInt(to_add); 
    
    $('#load_more_u').attr('loaded_value',new_value);
    
   $('#ajax-target-extra').append( $('<div/>').load("/node/get/ajax/11/"+loaded+"/"+type+"/"+language) );
        
    }
    if(type==1){
    
    var button = $('#load_more_s');
    
    var loaded = $('#load_more_s').attr('loaded_value');
    
    var to_add = 5;
    
    var new_value = parseInt(loaded) + parseInt(to_add); 
    
    $('#load_more_s').attr('loaded_value',new_value);
    
   $('#ajax-target').append( $('<div/>').load("/node/get/ajax/11/"+loaded+"/"+type+"/"+language) );
    
   // jQuery("#ajax-target").load("/node/get/ajax/11/"+loaded+"/"+type+"/"+language);
        
    }

}

$(document).ready(function(){
 
   /* Accordion */
  
   $.each($('blockquote'), function( index, value ) {
      
      console.log(index);
      
      var $thisBlockquote = $(this);
      $thisBlockquote.prev().addClass('toggleMe');
      $thisBlockquote.prev().on('click', function(){
         
         $thisBlockquote.slideToggle();
         
      });
      
   });

   /* Hide menu if sidebar contains form */
   if ($(".region.region-sidebar-first").find("form").length > 0){
    
      $('.region .sidemenu').hide();
    
   }
   
   
    /* Dokumendi liik*/
    
    $('#menetluse_liik').on('change', function() {
        
        var v = $(this).val();
      
        if(v == 3){
            $('#ml1').show();
            $('#ml2').hide();
            $('#ml3').hide();
        }else if(v == 4){
            $('#ml1').hide();
            $('#ml2').show();
            $('#ml3').hide();
        }else if(v == 5){
            $('#ml1').hide();
            $('#ml2').hide();
            $('#ml3').show();
        }else{
            $('#ml1,#ml2,#ml3').hide();
        }
        
    });

 
});