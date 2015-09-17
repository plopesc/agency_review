<?php
/**
 * @file
 * agency_review.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function agency_review_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__review';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Review',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'review',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'review' => 'review',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'middle' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a9b98f76-dec8-4bca-90f5-4c7ddf6e4313';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-289ed8ee-21de-4aec-ac34-cf2e9433a054';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_review_name';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Name',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'col-xs-12 col-sm-3',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '289ed8ee-21de-4aec-ac34-cf2e9433a054';
    $display->content['new-289ed8ee-21de-4aec-ac34-cf2e9433a054'] = $pane;
    $display->panels['middle'][0] = 'new-289ed8ee-21de-4aec-ac34-cf2e9433a054';
    $pane = new stdClass();
    $pane->pid = 'new-116f4334-69e0-4665-afb6-936a46691c90';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_review_rating';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'fivestar_formatter_rating',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Rating',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'col-xs-12 col-sm-3 col-sm-offset-1',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '116f4334-69e0-4665-afb6-936a46691c90';
    $display->content['new-116f4334-69e0-4665-afb6-936a46691c90'] = $pane;
    $display->panels['middle'][1] = 'new-116f4334-69e0-4665-afb6-936a46691c90';
    $pane = new stdClass();
    $pane->pid = 'new-fafb458f-8b53-421d-9395-1e391c20964f';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_review_property';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'entityreference_label',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'link' => 1,
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Property',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'col-xs-12 col-sm-3 col-sm-offset-1',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'fafb458f-8b53-421d-9395-1e391c20964f';
    $display->content['new-fafb458f-8b53-421d-9395-1e391c20964f'] = $pane;
    $display->panels['middle'][2] = 'new-fafb458f-8b53-421d-9395-1e391c20964f';
    $pane = new stdClass();
    $pane->pid = 'new-432b99c5-8e1e-42a0-8482-e3a115630834';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_review_comments';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Comment',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'col-xs-12',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '432b99c5-8e1e-42a0-8482-e3a115630834';
    $display->content['new-432b99c5-8e1e-42a0-8482-e3a115630834'] = $pane;
    $display->panels['middle'][3] = 'new-432b99c5-8e1e-42a0-8482-e3a115630834';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-289ed8ee-21de-4aec-ac34-cf2e9433a054';
  $handler->conf['display'] = $display;
  $export['node_view__review'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function agency_review_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'property_reviews';
  $page->task = 'page';
  $page->admin_title = 'Property Reviews';
  $page->admin_description = '';
  $page->path = 'listing/%unit_id/reviews';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'unit_id' => array(
      'id' => 1,
      'identifier' => 'Bookable Units: ID',
      'name' => 'entity_id:rooms_unit',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_property_reviews__panel';
  $handler->task = 'page';
  $handler->subtask = 'property_reviews';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'page-reviews',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_sidebar_right';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%unit_id:name reviews';
  $display->uuid = 'f0add10f-f73c-42c4-b155-a38f938a0d6f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-73194b78-203d-455e-aabc-28bd2ca9ec02';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'property_reviews-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '73194b78-203d-455e-aabc-28bd2ca9ec02';
    $display->content['new-73194b78-203d-455e-aabc-28bd2ca9ec02'] = $pane;
    $display->panels['left'][0] = 'new-73194b78-203d-455e-aabc-28bd2ca9ec02';
    $pane = new stdClass();
    $pane->pid = 'new-38e7e676-33a6-4741-8ccd-0e090a0caef9';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'property-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '38e7e676-33a6-4741-8ccd-0e090a0caef9';
    $display->content['new-38e7e676-33a6-4741-8ccd-0e090a0caef9'] = $pane;
    $display->panels['right'][0] = 'new-38e7e676-33a6-4741-8ccd-0e090a0caef9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-73194b78-203d-455e-aabc-28bd2ca9ec02';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['property_reviews'] = $page;

  return $pages;

}
