<?php
/**
 * @file
 * slac_beans.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function slac_beans_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'block_with_brochures';
  $bean_type->label = 'Gallery Block';
  $bean_type->options = '';
  $bean_type->description = 'Blocks with title, shaded background, list of brochures (image, title, download link).';
  $export['block_with_brochures'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'content_block';
  $bean_type->label = 'Content Block';
  $bean_type->options = '';
  $bean_type->description = 'Block heading (red underlined block title), block title (inside the content area), text (wyiswyg enabled), image and link. All items except text are optional.';
  $export['content_block'] = $bean_type;

  return $export;
}
