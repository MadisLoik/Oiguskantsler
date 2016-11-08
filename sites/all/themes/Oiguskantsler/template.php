<?php
/**
 * @file
 * The primary PHP file for this theme.
 */
function Oiguskantsler_menu_link(array $variables) {
    $element = $variables['element'];
    $sub_menu = '';

    if ($element['#below']) {
        $sub_menu = drupal_render($element['#below']);
    }
    if ($element['#href'] == t('https://#')) {
        $output = '' . $element['#title'] . '';
    }
    elseif($element['#href'] == t('http://#')) {
        $output = '' . $element['#title'] . '';
    }
    else {
        $output = l($element['#title'], $element['#href'], $element['#localized_options']);
    }
    
    return '' . $output . $sub_menu . "\n";
}
/**
* Replacement for theme_webform_element() to enable descriptions to come BEFORE the field to be filled out.
*/
function Oiguskantsler_webform_element($variables) {
  $element = $variables['element'];
  $value = $variables['element']['#children'];

  $wrapper_classes = array(
    'form-item',
  );
  $output = '<div class="' . implode(' ', $wrapper_classes) . '" id="' . $element['#id'] . '-wrapper">' . "\n";
  $required = !empty($element['#required']) ? '<span class="form-required" title="' . t('This field is required.') . '">*</span>' : '';

  if (!empty($element['#title'])) {
    $title = $element['#title'];
    $output .= ' <label for="' . $element['#id'] . '">' . t('!title: !required', array('!title' => filter_xss_admin($title), '!required' => $required)) . "</label>\n";
  }
  
  
 
  $output .= '<div class="webform_custom" id="' . $element['#id'] . '">' . $value . '</div>' . "\n";
  if(isset($element['#attributes']['title']) and $element['#attributes']['data-toggle']=='tooltip'){
     $output .= ' <div class="kirjeldus">' . $element['#attributes']['title']. "</div>\n";
  }
  else{
  if (!empty($element['#webform_component']['extra']['description'])) {
    $output .= ' <div class="kirjeldus">' . $element['#webform_component']['extra']['description'] . "</div>\n";
  }}
  $output .= "</div>\n";

  return $output;
}