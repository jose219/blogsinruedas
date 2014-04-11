<?php
/**
 * @file
 * f_tipo_contenido_jose.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function f_tipo_contenido_jose_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function f_tipo_contenido_jose_node_info() {
  $items = array(
    'jose' => array(
      'name' => t('Jose'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
