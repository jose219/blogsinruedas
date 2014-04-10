<?php
/**
 * @file
 * uuid_nodo.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function uuid_nodo_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer uuid'.
  $permissions['administer uuid'] = array(
    'name' => 'administer uuid',
    'roles' => array(),
    'module' => 'uuid',
  );

  return $permissions;
}
