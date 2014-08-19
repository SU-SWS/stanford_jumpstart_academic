<?php
/**
 * @file
 * stanford_jsa_shortcuts.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function stanford_jsa_shortcuts_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
