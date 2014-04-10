<?php
/**
 * @file
 * feed_nodo3.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feed_nodo3_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function feed_nodo3_node_info() {
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
