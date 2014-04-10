<?php
/**
 * @file
 * uuid_nodo2.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function uuid_nodo2_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function uuid_nodo2_node_info() {
  $items = array(
    'entrada_blog' => array(
      'name' => t('Entrada Blog'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
