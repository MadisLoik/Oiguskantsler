<?php
/**
 * Implements hook_variable_info().
 */
function oigus_asutus_variable_info($options) {
  $variables = array();
  
  $variables['oigus_asutus_asutused'] = array(
    'type' => 'vocabulary_name',
    'title' => t('Asutused', array(), $options),
    'required' => TRUE,
  );
  
  return $variables;
}
