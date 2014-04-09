<?php
/**
 * @file
 * bloque_site.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function bloque_site_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_mail';
  $strongarm->value = 'blog@sinruedas.com';
  $export['site_mail'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = 'Blog Sin Ruedas';
  $export['site_name'] = $strongarm;

  return $export;
}
