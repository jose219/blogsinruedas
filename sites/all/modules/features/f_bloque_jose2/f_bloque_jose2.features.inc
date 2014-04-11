<?php
/**
 * @file
 * f_bloque_jose2.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function f_bloque_jose2_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function f_bloque_jose2_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
