<?php
/**
 * @file
 * solo_site2.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function solo_site2_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
