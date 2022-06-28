<?php
/**
 * @file
 * B21 theme settings.
 */

if (module_exists('color')) {
  $form['general'] = array(
    '#type' => 'fieldset',
    '#title' => t('General settings'),
    '#collapsible' => TRUE,
  );
  $fields = array(
    'mainbg',
  );
  foreach ($fields as $field) {
    $form['general'][$field] = color_get_color_element($form['theme']['#value'], $field, $form);
  }
}
