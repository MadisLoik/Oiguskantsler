<?php
/**
 * Settings page
 */
function oiguskantsler_information_settings(){
	return drupal_get_form('oiguskantsler_information_settings_form');
}


/**
 * Form for settings page
 */
function oiguskantsler_information_settings_form($form_state,$mid = 0){
    

////////////////////////////////////////////////Front page top text//////////////////////////////////////////////////////////////////////////////
  $footer = variable_get('front_page_top_text_eesti', array('value' => '', 'format' => NULL));
  
  $form['front_page_top_text_eesti'] = array(
      
    '#type' => 'text_format',
    
    '#title' => t('Front page top text eesti: '),
    
    '#default_value' => $footer['value'],
    
    '#size' => 255,
    
    '#required' => FALSE,
    
  );  ////////////////////////////////////////////////Front page top text//////////////////////////////////////////////////////////////////////////////
  $footer = variable_get('front_page_top_text_inglise', array('value' => '', 'format' => NULL));
  
  $form['front_page_top_text_inglise'] = array(
      
    '#type' => 'text_format',
    
    '#title' => t('Front page top text inglise: '),
    
    '#default_value' => $footer['value'],
    
    '#size' => 255,
    
    '#required' => FALSE,
    
  );  ////////////////////////////////////////////////Front page top text//////////////////////////////////////////////////////////////////////////////
  $footer = variable_get('front_page_top_text_vene', array('value' => '', 'format' => NULL));
  
  $form['front_page_top_text_vene'] = array(
      
    '#type' => 'text_format',
    
    '#title' => t('Front page top text vene: '),
    
    '#default_value' => $footer['value'],
    
    '#size' => 255,
    
    '#required' => FALSE,
    
  );   
////////////////////////////////////////////////Footer contact information/////////////////////////////////////////////////////////////////////////////
  $footer = variable_get('footer_contact_information', array('value' => '', 'format' => NULL));
  
  $form['footer_contact_information'] = array(
      
    '#type' => 'text_format',
    
    '#title' => t('Footer info text: '),
    
    '#default_value' => $footer['value'],
    
    '#size' => 255,
    
    '#required' => FALSE,
    
  );   
////////////////////////////////////////////////Personal suur kirjeldus////////////////////////////////////////////////////////////////////////////
  $footer = variable_get('personal_n_kirjeldus', array('value' => '', 'format' => NULL));
  
  $form['personal_n_kirjeldus'] = array(
      
    '#type' => 'text_format',
    
    '#title' => t('Nõunike kirjeldus eesti: '),
    
    '#default_value' => $footer['value'],
    
    '#size' => 255,
    
    '#required' => FALSE,
    
  ); 
////////////////////////////////////////////////Personal suur  inglise kirjeldus////////////////////////////////////////////////////////////////////////////
  $footer = variable_get('personal_n_inglise_kirjeldus', array('value' => '', 'format' => NULL));
  
  $form['personal_n_inglise_kirjeldus'] = array(
      
    '#type' => 'text_format',
    
    '#title' => t('Nõunike kirjeldus inglise: '),
    
    '#default_value' => $footer['value'],
    
    '#size' => 255,
    
    '#required' => FALSE,
    
  ); 
////////////////////////////////////////////////Personal suur  vene kirjeldus////////////////////////////////////////////////////////////////////////////
  $footer = variable_get('personal_n_vene_kirjeldus', array('value' => '', 'format' => NULL));
  
  $form['personal_n_vene_kirjeldus'] = array(
      
    '#type' => 'text_format',
    
    '#title' => t('Nõunike kirjeldus vene: '),
    
    '#default_value' => $footer['value'],
    
    '#size' => 255,
    
    '#required' => FALSE,
    
  );    
     
////////////////////////////////////////////////Personal Sotsiaalsete õiguste osakond eesti kirjeldus////////////////////////////////////////////////////////////////////////////
  $footer = variable_get('personal_s_o_e', array('value' => '', 'format' => NULL));
  
  $form['personal_s_o_e'] = array(
      
    '#type' => 'text_format',
    
    '#title' => t('Sotsiaalsete õiguste osakond eesti: '),
    
    '#default_value' => $footer['value'],
    
    '#size' => 255,
    
    '#required' => FALSE,
    
  );    
   
     
////////////////////////////////////////////////Personal Sotsiaalsete õiguste osakond inglise kirjeldus////////////////////////////////////////////////////////////////////////////
  $footer = variable_get('personal_s_o_i', array('value' => '', 'format' => NULL));
  
  $form['personal_s_o_i'] = array(
      
    '#type' => 'text_format',
    
    '#title' => t('Sotsiaalsete õiguste osakond inglise: '),
    
    '#default_value' => $footer['value'],
    
    '#size' => 255,
    
    '#required' => FALSE,
    
  );    
         
////////////////////////////////////////////////Personal Sotsiaalsete õiguste osakond vene kirjeldus////////////////////////////////////////////////////////////////////////////
  $footer = variable_get('personal_s_o_v', array('value' => '', 'format' => NULL));
  
  $form['personal_s_o_v'] = array(
      
    '#type' => 'text_format',
    
    '#title' => t('Sotsiaalsete õiguste osakond vene: '),
    
    '#default_value' => $footer['value'],
    
    '#size' => 255,
    
    '#required' => FALSE,
    
  );    
    
     
////////////////////////////////////////////////Personal Ettevõtluskeskkonna osakond eesti kirjeldus////////////////////////////////////////////////////////////////////////////
  $footer = variable_get('personal_s_ek_e', array('value' => '', 'format' => NULL));
  
  $form['personal_s_ek_e'] = array(
      
    '#type' => 'text_format',
    
    '#title' => t('Ettevõtluskeskkonna osakond eesti kirjeldus: '),
    
    '#default_value' => $footer['value'],
    
    '#size' => 255,
    
    '#required' => FALSE,
    
  );    
   
     
////////////////////////////////////////////////Personal Ettevõtluskeskkonna osakond inglise kirjeldus////////////////////////////////////////////////////////////////////////////
  $footer = variable_get('personal_s_ek_i', array('value' => '', 'format' => NULL));
  
  $form['personal_s_ek_i'] = array(
      
    '#type' => 'text_format',
    
    '#title' => t('Ettevõtluskeskkonna osakond inglise kirjeldus: '),
    
    '#default_value' => $footer['value'],
    
    '#size' => 255,
    
    '#required' => FALSE,
    
  );    
         
////////////////////////////////////////////////Personal Ettevõtluskeskkonna osakond vene kirjeldus////////////////////////////////////////////////////////////////////////////
  $footer = variable_get('personal_s_ek_v', array('value' => '', 'format' => NULL));
  
  $form['personal_s_ek_v'] = array(
      
    '#type' => 'text_format',
    
    '#title' => t('Ettevõtluskeskkonna osakond vene kirjeldus: '),
    
    '#default_value' => $footer['value'],
    
    '#size' => 255,
    
    '#required' => FALSE,
    
  );  
    
     
////////////////////////////////////////////////Personal Õiguskorra kaitse osakond eesti kirjeldus////////////////////////////////////////////////////////////////////////////
  $footer = variable_get('personal_s_ok_e', array('value' => '', 'format' => NULL));
  
  $form['personal_s_ok_e'] = array(
      
    '#type' => 'text_format',
    
    '#title' => t('Õiguskorra kaitse osakond eesti kirjeldus: '),
    
    '#default_value' => $footer['value'],
    
    '#size' => 255,
    
    '#required' => FALSE,
    
  );    
   
     
////////////////////////////////////////////////Õiguskorra kaitse osakond inglise kirjeldus////////////////////////////////////////////////////////////////////////////
  $footer = variable_get('personal_s_ok_i', array('value' => '', 'format' => NULL));
  
  $form['personal_s_ok_i'] = array(
      
    '#type' => 'text_format',
    
    '#title' => t('Õiguskorra kaitse osakond inglise kirjeldus: '),
    
    '#default_value' => $footer['value'],
    
    '#size' => 255,
    
    '#required' => FALSE,
    
  );    
         
////////////////////////////////////////////////Personal Õiguskorra kaitse osakond vene kirjeldus////////////////////////////////////////////////////////////////////////////
  $footer = variable_get('personal_s_ok_v', array('value' => '', 'format' => NULL));
  
  $form['personal_s_ok_v'] = array(
      
    '#type' => 'text_format',
    
    '#title' => t('Õiguskorra kaitse osakond vene kirjeldus: '),
    
    '#default_value' => $footer['value'],
    
    '#size' => 255,
    
    '#required' => FALSE,
    
  );    
    
     
////////////////////////////////////////////////Personal Kontrollkäikude osakond////////////////////////////////////////////////////////////////////////////
  $footer = variable_get('personal_s_kk_e', array('value' => '', 'format' => NULL));
  
  $form['personal_s_kk_e'] = array(
      
    '#type' => 'text_format',
    
    '#title' => t('Kontrollkäikude osakond eesti kirjeldus: '),
    
    '#default_value' => $footer['value'],
    
    '#size' => 255,
    
    '#required' => FALSE,
    
  );    
   
     
////////////////////////////////////////////////Kontrollkäikude osakondinglise kirjeldus////////////////////////////////////////////////////////////////////////////
  $footer = variable_get('personal_s_kk_i', array('value' => '', 'format' => NULL));
  
  $form['personal_s_kk_i'] = array(
      
    '#type' => 'text_format',
    
    '#title' => t('Kontrollkäikude osakond inglise kirjeldus: '),
    
    '#default_value' => $footer['value'],
    
    '#size' => 255,
    
    '#required' => FALSE,
    
  );    
         
////////////////////////////////////////////////Kontrollkäikude osakond vene kirjeldus////////////////////////////////////////////////////////////////////////////
  $footer = variable_get('personal_s_kk_v', array('value' => '', 'format' => NULL));
  
  $form['personal_s_kk_v'] = array(
      
    '#type' => 'text_format',
    
    '#title' => t('Kontrollkäikude osakond vene kirjeldus: '),
    
    '#default_value' => $footer['value'],
    
    '#size' => 255,
    
    '#required' => FALSE,
    
  );    
     
////////////////////////////////////////////////Personal Laste ja noorte õiguste osakond////////////////////////////////////////////////////////////////////////////
  $footer = variable_get('personal_s_lno_e', array('value' => '', 'format' => NULL));
  
  $form['personal_s_lno_e'] = array(
      
    '#type' => 'text_format',
    
    '#title' => t('Laste ja noorte õiguste osakond eesti kirjeldus: '),
    
    '#default_value' => $footer['value'],
    
    '#size' => 255,
    
    '#required' => FALSE,
    
  );    
   
     
////////////////////////////////////////////////Laste ja noorte õiguste osakond kirjeldus////////////////////////////////////////////////////////////////////////////
  $footer = variable_get('personal_s_lno_i', array('value' => '', 'format' => NULL));
  
  $form['personal_s_lno_i'] = array(
      
    '#type' => 'text_format',
    
    '#title' => t('Laste ja noorte õiguste osakond inglise kirjeldus: '),
    
    '#default_value' => $footer['value'],
    
    '#size' => 255,
    
    '#required' => FALSE,
    
  );    
         
////////////////////////////////////////////////Laste ja noorte õiguste osakond vene kirjeldus////////////////////////////////////////////////////////////////////////////
  $footer = variable_get('personal_s_lno_v', array('value' => '', 'format' => NULL));
  
  $form['personal_s_lno_v'] = array(
      
    '#type' => 'text_format',
    
    '#title' => t('Laste ja noorte õiguste osakond vene kirjeldus: '),
    
    '#default_value' => $footer['value'],
    
    '#size' => 255,
    
    '#required' => FALSE,
    
  );  
     
////////////////////////////////////////////////Personal Üldosakond////////////////////////////////////////////////////////////////////////////
  $footer = variable_get('personal_s_yo_e', array('value' => '', 'format' => NULL));
  
  $form['personal_s_yo_e'] = array(
      
    '#type' => 'text_format',
    
    '#title' => t('Üldosakond eesti kirjeldus: '),
    
    '#default_value' => $footer['value'],
    
    '#size' => 255,
    
    '#required' => FALSE,
    
  );    
   
     
////////////////////////////////////////////////Üldosakond kirjeldus////////////////////////////////////////////////////////////////////////////
  $footer = variable_get('personal_s_yo_i', array('value' => '', 'format' => NULL));
  
  $form['personal_s_yo_i'] = array(
      
    '#type' => 'text_format',
    
    '#title' => t('Üldosakond inglise kirjeldus: '),
    
    '#default_value' => $footer['value'],
    
    '#size' => 255,
    
    '#required' => FALSE,
    
  );    
         
////////////////////////////////////////////////Üldosakond vene kirjeldus////////////////////////////////////////////////////////////////////////////
  $footer = variable_get('personal_s_yo_v', array('value' => '', 'format' => NULL));
  
  $form['personal_s_yo_v'] = array(
      
    '#type' => 'text_format',
    
    '#title' => t('Üldosakond vene kirjeldus: '),
    
    '#default_value' => $footer['value'],
    
    '#size' => 255,
    
    '#required' => FALSE,
    
  );    
    
     
////////////////////////////////////////////////Personal  Õigusteenistus////////////////////////////////////////////////////////////////////////////
  $footer = variable_get('personal_s_ot_e', array('value' => '', 'format' => NULL));
  
  $form['personal_s_ot_e'] = array(
      
    '#type' => 'text_format',
    
    '#title' => t(' Õigusteenistus eesti kirjeldus: '),
    
    '#default_value' => $footer['value'],
    
    '#size' => 255,
    
    '#required' => FALSE,
    
  );    
   
     
//////////////////////////////////////////////// Õigusteenistus inglise kirjeldus////////////////////////////////////////////////////////////////////////////
  $footer = variable_get('personal_s_ot_i', array('value' => '', 'format' => NULL));
  
  $form['personal_s_ot_i'] = array(
      
    '#type' => 'text_format',
    
    '#title' => t(' Õigusteenistus inglise kirjeldus: '),
    
    '#default_value' => $footer['value'],
    
    '#size' => 255,
    
    '#required' => FALSE,
    
  );    
         
//////////////////////////////////////////////// Õigusteenistus vene kirjeldus////////////////////////////////////////////////////////////////////////////
  $footer = variable_get('personal_s_ot_v', array('value' => '', 'format' => NULL));
  
  $form['personal_s_ot_v'] = array(
      
    '#type' => 'text_format',
    
    '#title' => t(' Õigusteenistus vene kirjeldus: '),
    
    '#default_value' => $footer['value'],
    
    '#size' => 255,
    
    '#required' => FALSE,
    
  );    
    

//////////////////////////////////////////////// Õigusteenistus facebook////////////////////////////////////////////////////////////////////////////
  $footer = variable_get('fb_oigus', array('value' => '', 'format' => NULL));
  
  $form['fb_oigus'] = array(
      
    '#type' => 'textfield',
    
    '#title' => t(' Õigusteenistus facebook kirjeldus: '),
    
    '#default_value' => $footer['value'],
    
    '#size' => 255,
    
    '#required' => FALSE,
    
  );  
//////////////////////////////////////////////// Õigusteenistus twitter////////////////////////////////////////////////////////////////////////////
  $footer = variable_get('tw_oigus', array('value' => '', 'format' => NULL));
  
  $form['tw_oigus'] = array(
      
    '#type' => 'textfield',
    
    '#title' => t(' Õigusteenistus twitter kirjeldus: '),
    
    '#default_value' => $footer['value'],
    
    '#size' => 255,
    
    '#required' => FALSE,
    
  );    
    
    	return system_settings_form($form);
}
