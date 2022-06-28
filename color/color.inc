<?php
$info = array(
  // Available colors and color labels used in theme.
  'fields' => array(
    'mainbg' => t('Main background'),
  ),
  // Pre-defined color schemes.
  'schemes' => array(
    'default' => array(
      'title' => t('Lawn (default)'),
      'colors' => array(
        'mainbg' => '#d1e4dd',
      ),
    ),
    'sky' => array(
      'title' => t('Sky'),
      'colors' => array(
        'mainbg' => '#d1dfe4',
      ),
    ),
    'lavender' => array(
      'title' => t('Lavender'),
      'colors' => array(
        'mainbg' => '#d1d1e4',
      ),
    ),
    'dusk' => array(
      'title' => t('Dusk'),
      'colors' => array(
        'mainbg' => '#e4d1d1',
      ),
    ),
    'wood' => array(
      'title' => t('Wood'),
      'colors' => array(
        'mainbg' => '#e4dad1',
      ),
    ),
    'sand' => array(
      'title' => t('Sand'),
      'colors' => array(
        'mainbg' => '#eeeadd',
      ),
    ),
    'white' => array(
      'title' => t('White'),
      'colors' => array(
        'mainbg' => '#ffffff',
      ),
    ),
  ),
  // CSS files (excluding @import) to rewrite with new color scheme.
  'css' => array(
    'css/colors.css',
  ),
);
