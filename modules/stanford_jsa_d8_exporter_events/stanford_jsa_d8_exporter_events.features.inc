<?php

/**
 * @file
 * stanford_jsa_d8_exporter_events.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function stanford_jsa_d8_exporter_events_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function stanford_jsa_d8_exporter_events_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
