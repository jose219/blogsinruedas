<?php
/**
 * @file
 * solo_bloque_vista.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function solo_bloque_vista_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function solo_bloque_vista_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
