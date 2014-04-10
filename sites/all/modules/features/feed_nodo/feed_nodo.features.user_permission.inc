<?php
/**
 * @file
 * feed_nodo.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function feed_nodo_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer feeds'.
  $permissions['administer feeds'] = array(
    'name' => 'administer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import prueba_feeds feeds'.
  $permissions['import prueba_feeds feeds'] = array(
    'name' => 'import prueba_feeds feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock prueba_feeds feeds'.
  $permissions['unlock prueba_feeds feeds'] = array(
    'name' => 'unlock prueba_feeds feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  return $permissions;
}
