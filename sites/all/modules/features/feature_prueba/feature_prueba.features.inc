<?php
/**
 * @file
 * feature_prueba.features.inc
 */

/**
 * Implements hook_views_api().
 */
function feature_prueba_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function feature_prueba_node_info() {
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
