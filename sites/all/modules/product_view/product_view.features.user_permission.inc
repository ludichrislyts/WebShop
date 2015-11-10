<?php
/**
 * @file
 * product_view.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function product_view_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'view any commerce_product entity'.
  $permissions['view any commerce_product entity'] = array(
    'name' => 'view any commerce_product entity',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_product',
  );

  return $permissions;
}
