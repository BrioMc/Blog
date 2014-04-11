<?php
/**
 * @file
 * f_colocacion_bloques.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function f_colocacion_bloques_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'colocacion_bloques';
  $context->description = 'Colocacion del bloque ultimas noticias en la barra lateral derecha';
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
        'views-post_s-block' => array(
          'module' => 'views',
          'delta' => 'post_s-block',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Colocacion del bloque ultimas noticias en la barra lateral derecha');
  $export['colocacion_bloques'] = $context;

  return $export;
}
