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

  if (user_is_logged_in()) {
    $link = l('Add Review', 'node/add/review', array('query' => array('property_id' => $args[0]), 'attributes' => array('class' => array('col-xs-12', 'agency-add-review'))));
    $content = '<div class="row">' . $link . '</div>';
  }

  $block = new stdClass();
  $block->module = 'agency_review';
  $block->delta = $subtype;
  $block->title = '';
  $block->content = $content;
  
  return $block;
}
