<?php
/**
 * @file
 * f_site_jose.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function f_site_jose_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_mail';
  $strongarm->value = 'blog@loscojones.com';
  $export['site_mail'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = 'Blog con sillas no elevables Los cojones';
  $export['site_name'] = $strongarm;

  return $export;
}
