<?php
/**
 * @file
 * f_siteconfig.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function f_siteconfig_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
