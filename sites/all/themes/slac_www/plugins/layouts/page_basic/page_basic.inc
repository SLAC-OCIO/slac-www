<?php

/**
 * implementation of hook_panels_layouts
 */
// Plugin definition
$plugin = array(
  'title' => t('Page basic'),
  'category' => t('Slac layouts'),
  'icon' => 'page_basic.png',
  'theme' => 'page_basic',
  'theme arguments' => array('id', 'content'),
  'css' => 'page_basic.css',
  'regions' => array(
    'menu' => t('Responsive menu'),
    'header' => t('Header'),
    'content' => t('Content'),
    'footer' => t('Footer')
  ),
);

