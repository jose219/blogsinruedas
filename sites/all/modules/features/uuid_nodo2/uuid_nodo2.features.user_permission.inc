<?php
/**
 * @file
 * uuid_nodo2.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function uuid_nodo2_user_default_permissions() {
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

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'administer uuid'.
  $permissions['administer uuid'] = array(
    'name' => 'administer uuid',
    'roles' => array(),
    'module' => 'uuid',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create entrada_blog content'.
  $permissions['create entrada_blog content'] = array(
    'name' => 'create entrada_blog content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any entrada_blog content'.
  $permissions['delete any entrada_blog content'] = array(
    'name' => 'delete any entrada_blog content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own entrada_blog content'.
  $permissions['delete own entrada_blog content'] = array(
    'name' => 'delete own entrada_blog content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
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

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
