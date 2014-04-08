<?php
/**
 * @file
 * feature_prueba.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function feature_prueba_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__entrada_blog';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__entrada_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_entrada_blog';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_entrada_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_entrada_blog';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_entrada_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_entrada_blog';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_entrada_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_entrada_blog';
  $strongarm->value = '1';
  $export['node_preview_entrada_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_entrada_blog';
  $strongarm->value = 1;
  $export['node_submitted_entrada_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_mail';
  $strongarm->value = 'admin@example.com';
  $export['site_mail'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = 'Blog Sin Ruedas';
  $export['site_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'professional_theme';
  $export['theme_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_professional_theme_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'breadcrumbs' => 1,
    'display_theme_credit' => 0,
    'remove_copywrite' => 0,
    'copywrite_holder' => '',
    'slideshow_display' => 1,
    'slideshow_all' => 0,
    'slide1_head' => 'Sample product',
    'slide1_image_url' => '',
    'slide1_desc' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt...',
    'slide1_url' => '',
    'slide_alt' => '',
    'slide2_head' => 'Sample service',
    'slide2_image_url' => '',
    'slide2_desc' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do Lorem ipsum dolor sit amet...',
    'slide2_url' => '',
    'slide2_alt' => '',
    'slide3_head' => 'Sample product and service',
    'slide3_image_url' => '',
    'slide3_desc' => 'Duis aute irure dolor in reprehenderit inLorem ipsum dolor sit amet, consectetur adipisicing...',
    'slide3_url' => '',
    'slide3_alt' => '',
  );
  $export['theme_professional_theme_settings'] = $strongarm;

  return $export;
}
