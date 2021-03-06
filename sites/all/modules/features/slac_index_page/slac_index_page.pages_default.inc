<?php
/**
 * @file
 * slac_index_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function slac_index_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'slac_index';
  $page->task = 'page';
  $page->admin_title = 'Site Index';
  $page->admin_description = 'SLAC site index page.';
  $page->path = 'general/site-index.aspx';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_slac_index_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'slac_index';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'one-col-basic',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'A-Z Index';
  $display->uuid = '25101d9d-1990-4d93-b6cb-f34dfb083b6b';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_slac_index_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-98744506-f2fe-46ee-a119-08b608851572';
  $pane->panel = 'middle';
  $pane->type = 'index_block';
  $pane->subtype = 'index_block';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'links-internal-external-icons',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '98744506-f2fe-46ee-a119-08b608851572';
  $display->content['new-98744506-f2fe-46ee-a119-08b608851572'] = $pane;
  $display->panels['middle'][0] = 'new-98744506-f2fe-46ee-a119-08b608851572';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['slac_index'] = $page;

  return $pages;

}
