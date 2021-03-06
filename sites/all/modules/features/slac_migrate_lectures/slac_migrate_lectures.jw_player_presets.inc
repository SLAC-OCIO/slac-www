<?php
/**
 * @file
 * slac_migrate_lectures.jw_player_presets.inc
 */

/**
 * Implements hook_default_jw_player_presets().
 */
function slac_migrate_lectures_default_jw_player_presets() {
  $export = array();

  $jw_player_preset = new stdClass();
  $jw_player_preset->disabled = FALSE; /* Edit this to true to make a default jw_player_preset disabled initially */
  $jw_player_preset->api_version = 1;
  $jw_player_preset->preset_name = '528x400';
  $jw_player_preset->machine_name = '528x400';
  $jw_player_preset->description = 'Preset for lectures video.';
  $jw_player_preset->settings = array(
    'mode' => 'html5',
    'width' => '528',
    'height' => '400',
    'controlbar' => 'bottom',
    'skin' => '',
    'autoplay' => 0,
  );
  $export['528x400'] = $jw_player_preset;

  return $export;
}
