<?php

/**
 * @file
 * Plugin definition and callbacks for a ctools:content_types plugin.
 *
 * @ingroup CToolsPlugin CToolsPluginContentTypes
 */

$plugin = array(
  'category' => t('Agency'),
  'title' => t('Agency unit review button'),
  'description' => t('Add a link to the unit review.'),
  'render callback' => 'agency_unit_review_button_render',
);

/**
* Render callback.
*/
function agency_unit_review_button_render($subtype, $conf, $args, $pane_context, $incoming_content) {
  $content = '';
  $test = menu_get_object();
  if (user_is_logged_in()) {
    $content = '<div class="row"><a href="/node/add/review?property_id=' . $args[0] . '" class="col-xs-12 agency-add-review">Add Review</a></div>';
  }
  $block = new stdClass();
  $block->module = 'agency_review';
  $block->delta = $subtype;
  $block->title = '';
  $block->content = $content;
  
  return $block;
}
