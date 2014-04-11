<?php
/**
 * @file
 * f_colocacion_bloques.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function f_colocacion_bloques_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
