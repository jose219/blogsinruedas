<?php
/**
 * @file
 * feature_bloque.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function feature_bloque_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_mail';
  $strongarm->value = 'blog@sinruedas.com';
  $export['site_mail'] = $strongarm;

  return $export;
}
