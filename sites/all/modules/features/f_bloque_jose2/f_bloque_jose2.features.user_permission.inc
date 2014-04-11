<?php
/**
 * @file
 * f_bloque_jose2.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function f_bloque_jose2_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer contexts'.
  $permissions['administer contexts'] = array(
    'name' => 'administer contexts',
    'roles' => array(),
    'module' => 'context_ui',
  );

  // Exported permission: 'context ajax block access'.
  $permissions['context ajax block access'] = array(
    'name' => 'context ajax block access',
    'roles' => array(),
    'module' => 'context_ui',
  );

  return $permissions;
}
