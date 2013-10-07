<?php
/**
 * @file
 * grid_lightbox_gallery.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function grid_lightbox_gallery_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_grid_lightbox_gallery';
  $strongarm->value = 0;
  $export['comment_anonymous_grid_lightbox_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_grid_lightbox_gallery';
  $strongarm->value = 1;
  $export['comment_default_mode_grid_lightbox_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_grid_lightbox_gallery';
  $strongarm->value = '50';
  $export['comment_default_per_page_grid_lightbox_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_grid_lightbox_gallery';
  $strongarm->value = 1;
  $export['comment_form_location_grid_lightbox_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_grid_lightbox_gallery';
  $strongarm->value = '2';
  $export['comment_grid_lightbox_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_grid_lightbox_gallery';
  $strongarm->value = '1';
  $export['comment_preview_grid_lightbox_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_grid_lightbox_gallery';
  $strongarm->value = 1;
  $export['comment_subject_field_grid_lightbox_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_grid_lightbox_gallery';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_grid_lightbox_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_grid_lightbox_gallery';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_grid_lightbox_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_grid_lightbox_gallery';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_grid_lightbox_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_grid_lightbox_gallery';
  $strongarm->value = '1';
  $export['node_preview_grid_lightbox_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_grid_lightbox_gallery';
  $strongarm->value = 1;
  $export['node_submitted_grid_lightbox_gallery'] = $strongarm;

  return $export;
}