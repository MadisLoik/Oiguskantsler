<?php
/**
 * Implements hook_variable_info().
 */
function oigus_miscellaneous_variable_info($options) {
  $variables = array();

  $variables['oigus_miscellaneous_laste_oigused_link_enabled'] = array(
    'type' => 'boolean',
    'title' => t('Kuva link "Laste õigused".', array(), $options),
    'default' => TRUE,
  );

  return $variables;
}
