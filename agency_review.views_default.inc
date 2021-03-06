<?php
/**
 * @file
 * agency_review.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function agency_review_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'property_reviews';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Property Reviews';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'All Reviews';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_review_property_target_id']['id'] = 'field_review_property_target_id';
  $handler->display->display_options['relationships']['field_review_property_target_id']['table'] = 'field_data_field_review_property';
  $handler->display->display_options['relationships']['field_review_property_target_id']['field'] = 'field_review_property_target_id';
  $handler->display->display_options['relationships']['field_review_property_target_id']['required'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Rating */
  $handler->display->display_options['fields']['field_review_rating']['id'] = 'field_review_rating';
  $handler->display->display_options['fields']['field_review_rating']['table'] = 'field_data_field_review_rating';
  $handler->display->display_options['fields']['field_review_rating']['field'] = 'field_review_rating';
  $handler->display->display_options['fields']['field_review_rating']['label'] = '';
  $handler->display->display_options['fields']['field_review_rating']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_review_rating']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_review_rating']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'profiles/agency/modules/contrib/fivestar/widgets/hearts/hearts.css',
    ),
    'expose' => 0,
    'style' => 'average',
    'text' => 'none',
  );
  /* Field: Content: Name */
  $handler->display->display_options['fields']['field_review_name']['id'] = 'field_review_name';
  $handler->display->display_options['fields']['field_review_name']['table'] = 'field_data_field_review_name';
  $handler->display->display_options['fields']['field_review_name']['field'] = 'field_review_name';
  $handler->display->display_options['fields']['field_review_name']['label'] = '';
  $handler->display->display_options['fields']['field_review_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_review_name']['alter']['text'] = '[field_review_name],';
  $handler->display->display_options['fields']['field_review_name']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'agency_review_m_y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  $handler->display->display_options['fields']['created']['format_date_sql'] = 0;
  /* Field: Content: Comments */
  $handler->display->display_options['fields']['field_review_comments']['id'] = 'field_review_comments';
  $handler->display->display_options['fields']['field_review_comments']['table'] = 'field_data_field_review_comments';
  $handler->display->display_options['fields']['field_review_comments']['field'] = 'field_review_comments';
  $handler->display->display_options['fields']['field_review_comments']['label'] = '';
  $handler->display->display_options['fields']['field_review_comments']['alter']['max_length'] = '350';
  $handler->display->display_options['fields']['field_review_comments']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['field_review_comments']['alter']['more_link_text'] = 'Read More';
  $handler->display->display_options['fields']['field_review_comments']['alter']['more_link_path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_review_comments']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Bookable Units: Bookable units ID */
  $handler->display->display_options['arguments']['unit_id']['id'] = 'unit_id';
  $handler->display->display_options['arguments']['unit_id']['table'] = 'rooms_units';
  $handler->display->display_options['arguments']['unit_id']['field'] = 'unit_id';
  $handler->display->display_options['arguments']['unit_id']['relationship'] = 'field_review_property_target_id';
  $handler->display->display_options['arguments']['unit_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['unit_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['unit_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['unit_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['unit_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['unit_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'review' => 'review',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Property Reviews */
  $handler = $view->new_display('panel_pane', 'Property Reviews', 'panel_pane_1');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'All Reviews';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a href="/listing/!1/reviews" class="all-listing-reviews-link btn btn-default btn-primary col-xs-12 col-sm-4 col-sm-offset-4">All Reviews</a>';
  $handler->display->display_options['footer']['area']['format'] = 'rich_text';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Rating */
  $handler->display->display_options['fields']['field_review_rating']['id'] = 'field_review_rating';
  $handler->display->display_options['fields']['field_review_rating']['table'] = 'field_data_field_review_rating';
  $handler->display->display_options['fields']['field_review_rating']['field'] = 'field_review_rating';
  $handler->display->display_options['fields']['field_review_rating']['label'] = '';
  $handler->display->display_options['fields']['field_review_rating']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_review_rating']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_review_rating']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'profiles/agency/modules/contrib/fivestar/widgets/hearts/hearts.css',
    ),
    'expose' => 0,
    'style' => 'average',
    'text' => 'none',
  );
  /* Field: Content: Name */
  $handler->display->display_options['fields']['field_review_name']['id'] = 'field_review_name';
  $handler->display->display_options['fields']['field_review_name']['table'] = 'field_data_field_review_name';
  $handler->display->display_options['fields']['field_review_name']['field'] = 'field_review_name';
  $handler->display->display_options['fields']['field_review_name']['label'] = '';
  $handler->display->display_options['fields']['field_review_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_review_name']['alter']['text'] = '[field_review_name],';
  $handler->display->display_options['fields']['field_review_name']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'agency_review_m_y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  $handler->display->display_options['fields']['created']['format_date_sql'] = 0;
  /* Field: Content: Comments */
  $handler->display->display_options['fields']['field_review_comments']['id'] = 'field_review_comments';
  $handler->display->display_options['fields']['field_review_comments']['table'] = 'field_data_field_review_comments';
  $handler->display->display_options['fields']['field_review_comments']['field'] = 'field_review_comments';
  $handler->display->display_options['fields']['field_review_comments']['label'] = '';
  $handler->display->display_options['fields']['field_review_comments']['alter']['max_length'] = '350';
  $handler->display->display_options['fields']['field_review_comments']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['field_review_comments']['alter']['more_link_text'] = 'Read More';
  $handler->display->display_options['fields']['field_review_comments']['alter']['more_link_path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_review_comments']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_review_comments']['element_label_colon'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'unit_id' => array(
      'type' => 'user',
      'context' => 'entity:rooms_unit.unit-id',
      'context_optional' => 1,
      'panel' => '1',
      'fixed' => '',
      'label' => 'Bookable Units: Bookable units ID',
    ),
  );

  /* Display: All Property reviews */
  $handler = $view->new_display('panel_pane', 'All Property reviews', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['property_reviews'] = $view;

  return $export;
}
