<?php
/**
 * @file
 * f_bloque_jose2.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function f_bloque_jose2_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'bloque_vista_jose';
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
        'views-vista_jose-block' => array(
          'module' => 'views',
          'delta' => 'vista_jose-block',
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['bloque_vista_jose'] = $context;

  return $export;
}
