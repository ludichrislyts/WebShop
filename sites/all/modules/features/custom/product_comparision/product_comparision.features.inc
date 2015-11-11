<?php
/**
 * @file
 * product_comparision.features.inc
 */

/**
 * Implements hook_node_info().
 */
function product_comparision_node_info() {
  $items = array(
    'product_display_2' => array(
      'name' => t('Product Display 2'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
