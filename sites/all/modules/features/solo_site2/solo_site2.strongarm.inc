<?php
/**
 * @file
 * solo_site2.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function solo_site2_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_mail';
  $strongarm->value = 'blog@dsmultimedia.com';
  $export['site_mail'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = 'Blog con sillas no elevables';
  $export['site_name'] = $strongarm;

  return $export;
}
