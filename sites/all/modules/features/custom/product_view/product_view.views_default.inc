<?php
/**
 * @file
 * product_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function product_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'product_view';
  $view->description = 'View that contains an individual product ';
  $view->tag = 'default';
  $view->base_table = 'commerce_product';
  $view->human_name = 'Product View';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Product View';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Commerce Product: Product ID */
  $handler->display->display_options['fields']['product_id']['id'] = 'product_id';
  $handler->display->display_options['fields']['product_id']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['product_id']['field'] = 'product_id';
  $handler->display->display_options['fields']['product_id']['label'] = '';
  $handler->display->display_options['fields']['product_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['product_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['product_id']['link_to_product'] = 0;
  /* Field: Commerce Product: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_product'] = 0;
  /* Field: : field_product_image */
  $handler->display->display_options['fields']['field_product_image']['id'] = 'field_product_image';
  $handler->display->display_options['fields']['field_product_image']['table'] = 'field_data_field_product_image';
  $handler->display->display_options['fields']['field_product_image']['field'] = 'field_product_image';
  $handler->display->display_options['fields']['field_product_image']['label'] = '';
  $handler->display->display_options['fields']['field_product_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_product_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_product_image']['delta_limit'] = 'all';
  /* Field: Commerce Product: Price */
  $handler->display->display_options['fields']['commerce_price']['id'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['table'] = 'field_data_commerce_price';
  $handler->display->display_options['fields']['commerce_price']['field'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_price']['settings'] = array(
    'calculation' => '0',
  );
  /* Contextual filter: Commerce Product: Product ID */
  $handler->display->display_options['arguments']['product_id']['id'] = 'product_id';
  $handler->display->display_options['arguments']['product_id']['table'] = 'commerce_product';
  $handler->display->display_options['arguments']['product_id']['field'] = 'product_id';
  $handler->display->display_options['arguments']['product_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['product_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['product_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['product_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Commerce Product: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'commerce_product';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'product-view';
  $export['product_view'] = $view;

  return $export;
}
