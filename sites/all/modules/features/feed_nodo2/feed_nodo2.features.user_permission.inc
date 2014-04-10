<?php
/**
 * @file
 * feed_nodo2.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function feed_nodo2_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'administer feeds'.
  $permissions['administer feeds'] = array(
    'name' => 'administer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'clear prueba_feeds feeds'.
  $permissions['clear prueba_feeds feeds'] = array(
    'name' => 'clear prueba_feeds feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'create entrada_blog content'.
  $permissions['create entrada_blog content'] = array(
    'name' => 'create entrada_blog content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any entrada_blog content'.
  $permissions['edit any entrada_blog content'] = array(
    'name' => 'edit any entrada_blog content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own entrada_blog content'.
  $permissions['edit own entrada_blog content'] = array(
    'name' => 'edit own entrada_blog content',
    'roles' => array(),
    'module' => 'node',
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
