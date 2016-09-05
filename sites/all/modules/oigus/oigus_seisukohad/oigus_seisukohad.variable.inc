<?php
/**
 * Implements hook_variable_info().
 */
function oigus_seisukohad_variable_info($options) {
  $variables = array();
  
  $variables['oigus_seisukohad_valitsemisala'] = array(
    'type' => 'vocabulary_name',
    'title' => t('Valitsemisala', array(), $options),
    'required' => TRUE,
  );
  
  $variables['oigus_seisukohad_dokumendi_liik'] = array(
    'type' => 'vocabulary_name',
    'title' => t('Dokumendi liik', array(), $options),
    'required' => TRUE,
  );
  
  $variables['oigus_seisukohad_menetluse_liik'] = array(
    'type' => 'vocabulary_name',
    'title' => t('Menetluse liik', array(), $options),
    'required' => TRUE,
  );
  
  $variables['oigus_seisukohad_sildid'] = array(
    'type' => 'vocabulary_name',
    'title' => t('Sildid', array(), $options),
    'required' => TRUE,
  );
  
  return $variables;
}
