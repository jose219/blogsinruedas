<?php
/**
 * @file
 * solo_bloque_vista.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function solo_bloque_vista_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'bloque_col';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '*' => '*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-primer_articulo-block' => array(
          'module' => 'views',
          'delta' => 'primer_articulo-block',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-ultimos_articulos-block' => array(
          'module' => 'views',
          'delta' => 'ultimos_articulos-block',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['bloque_col'] = $context;

  return $export;
}
