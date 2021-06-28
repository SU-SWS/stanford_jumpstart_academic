<?php

/**
 * @file
 * stanford_jsa_d8_exporter_publications.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function stanford_jsa_d8_exporter_publications_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'stanford_publications_export';
  $view->description = 'List-style page and sidebar block';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'Stanford Publications Export';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'News';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title]
[field_stanford_event_datetime_2] ';
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_stanford_event_image']['id'] = 'field_stanford_event_image';
  $handler->display->display_options['fields']['field_stanford_event_image']['table'] = 'field_data_field_stanford_event_image';
  $handler->display->display_options['fields']['field_stanford_event_image']['field'] = 'field_stanford_event_image';
  $handler->display->display_options['fields']['field_stanford_event_image']['label'] = '';
  $handler->display->display_options['fields']['field_stanford_event_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_stanford_event_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_stanford_event_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['id'] = 'field_stanford_event_datetime_2';
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['table'] = 'field_data_field_stanford_event_datetime';
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['field'] = 'field_stanford_event_datetime';
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['label'] = 'Date and Time (Start)';
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['alter']['text'] = '[title]
[field_stanford_event_datetime_2]';
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_stanford_event_datetime_2']['settings'] = array(
    'format_type' => 'iso_8601',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_stanford_event_datetime']['id'] = 'field_stanford_event_datetime';
  $handler->display->display_options['fields']['field_stanford_event_datetime']['table'] = 'field_data_field_stanford_event_datetime';
  $handler->display->display_options['fields']['field_stanford_event_datetime']['field'] = 'field_stanford_event_datetime';
  $handler->display->display_options['fields']['field_stanford_event_datetime']['label'] = 'Date and Time (End)';
  $handler->display->display_options['fields']['field_stanford_event_datetime']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_stanford_event_datetime']['settings'] = array(
    'format_type' => 'iso_8601',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Add to Calendar */
  $handler->display->display_options['fields']['field_stanford_event_add_to_cal']['id'] = 'field_stanford_event_add_to_cal';
  $handler->display->display_options['fields']['field_stanford_event_add_to_cal']['table'] = 'field_data_field_stanford_event_add_to_cal';
  $handler->display->display_options['fields']['field_stanford_event_add_to_cal']['field'] = 'field_stanford_event_add_to_cal';
  $handler->display->display_options['fields']['field_stanford_event_add_to_cal']['click_sort_column'] = 'url';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_stanford_event_location']['id'] = 'field_stanford_event_location';
  $handler->display->display_options['fields']['field_stanford_event_location']['table'] = 'field_data_field_stanford_event_location';
  $handler->display->display_options['fields']['field_stanford_event_location']['field'] = 'field_stanford_event_location';
  /* Field: Content: Event Sponsor */
  $handler->display->display_options['fields']['field_stanford_event_sponsor']['id'] = 'field_stanford_event_sponsor';
  $handler->display->display_options['fields']['field_stanford_event_sponsor']['table'] = 'field_data_field_stanford_event_sponsor';
  $handler->display->display_options['fields']['field_stanford_event_sponsor']['field'] = 'field_stanford_event_sponsor';
  /* Field: Content: Contact Email */
  $handler->display->display_options['fields']['field_stanford_event_email']['id'] = 'field_stanford_event_email';
  $handler->display->display_options['fields']['field_stanford_event_email']['table'] = 'field_data_field_stanford_event_email';
  $handler->display->display_options['fields']['field_stanford_event_email']['field'] = 'field_stanford_event_email';
  /* Field: Content: Contact Phone */
  $handler->display->display_options['fields']['field_stanford_event_phone']['id'] = 'field_stanford_event_phone';
  $handler->display->display_options['fields']['field_stanford_event_phone']['table'] = 'field_data_field_stanford_event_phone';
  $handler->display->display_options['fields']['field_stanford_event_phone']['field'] = 'field_stanford_event_phone';
  /* Field: Content: Admission */
  $handler->display->display_options['fields']['field_stanford_event_admission']['id'] = 'field_stanford_event_admission';
  $handler->display->display_options['fields']['field_stanford_event_admission']['table'] = 'field_data_field_stanford_event_admission';
  $handler->display->display_options['fields']['field_stanford_event_admission']['field'] = 'field_stanford_event_admission';
  /* Field: Content: More Information */
  $handler->display->display_options['fields']['field_stanford_event_url']['id'] = 'field_stanford_event_url';
  $handler->display->display_options['fields']['field_stanford_event_url']['table'] = 'field_data_field_stanford_event_url';
  $handler->display->display_options['fields']['field_stanford_event_url']['field'] = 'field_stanford_event_url';
  $handler->display->display_options['fields']['field_stanford_event_url']['click_sort_column'] = 'url';
  /* Field: Content: Audience */
  $handler->display->display_options['fields']['field_stanford_event_audience']['id'] = 'field_stanford_event_audience';
  $handler->display->display_options['fields']['field_stanford_event_audience']['table'] = 'field_data_field_stanford_event_audience';
  $handler->display->display_options['fields']['field_stanford_event_audience']['field'] = 'field_stanford_event_audience';
  $handler->display->display_options['fields']['field_stanford_event_audience']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_stanford_event_audience']['delta_offset'] = '0';
  /* Field: Content: Categories */
  $handler->display->display_options['fields']['field_stanford_event_categories']['id'] = 'field_stanford_event_categories';
  $handler->display->display_options['fields']['field_stanford_event_categories']['table'] = 'field_data_field_stanford_event_categories';
  $handler->display->display_options['fields']['field_stanford_event_categories']['field'] = 'field_stanford_event_categories';
  $handler->display->display_options['fields']['field_stanford_event_categories']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_stanford_event_categories']['delta_offset'] = '0';
  /* Sort criterion: Content: Date and Time -  start date (field_stanford_event_datetime) */
  $handler->display->display_options['sorts']['field_stanford_event_datetime_value']['id'] = 'field_stanford_event_datetime_value';
  $handler->display->display_options['sorts']['field_stanford_event_datetime_value']['table'] = 'field_data_field_stanford_event_datetime';
  $handler->display->display_options['sorts']['field_stanford_event_datetime_value']['field'] = 'field_stanford_event_datetime_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'stanford_event' => 'stanford_event',
  );

  /* Display: JSON */
  $handler = $view->new_display('page', 'JSON', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = 'items';
  $handler->display->display_options['style_options']['top_child_object'] = 'item';
  $handler->display->display_options['style_options']['plaintext_output'] = 0;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 1;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'stanford-events/json';

  /* Display: Publications Data export */
  $handler = $view->new_display('views_data_export', 'Publications Data export', 'views_data_export_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Publications';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['transform'] = 1;
  $handler->display->display_options['style_options']['root_node'] = 'PublicationList';
  $handler->display->display_options['style_options']['item_node'] = 'PublicationItem';
  $handler->display->display_options['style_options']['no_entity_encode'] = array(
    'field_s_pub_author' => 'field_s_pub_author',
    'field_s_pub_document' => 'field_s_pub_document',
  );
  $handler->display->display_options['style_options']['cdata_wrapper'] = array(
    'body' => 'body',
  );
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Field: Featured Image (field_s_image_info) */
  $handler->display->display_options['relationships']['field_s_image_info_value']['id'] = 'field_s_image_info_value';
  $handler->display->display_options['relationships']['field_s_image_info_value']['table'] = 'field_data_field_s_image_info';
  $handler->display->display_options['relationships']['field_s_image_info_value']['field'] = 'field_s_image_info_value';
  $handler->display->display_options['relationships']['field_s_image_info_value']['delta'] = '-1';
  /* Relationship: Field collection item: Image (field_s_image_image:fid) */
  $handler->display->display_options['relationships']['field_s_image_image_fid']['id'] = 'field_s_image_image_fid';
  $handler->display->display_options['relationships']['field_s_image_image_fid']['table'] = 'field_data_field_s_image_image';
  $handler->display->display_options['relationships']['field_s_image_image_fid']['field'] = 'field_s_image_image_fid';
  $handler->display->display_options['relationships']['field_s_image_image_fid']['relationship'] = 'field_s_image_info_value';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Node UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'node';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'guid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title]
[field_stanford_event_datetime_2] ';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Author link */
  $handler->display->display_options['fields']['field_s_person_link']['id'] = 'field_s_person_link';
  $handler->display->display_options['fields']['field_s_person_link']['table'] = 'field_data_field_s_person_link';
  $handler->display->display_options['fields']['field_s_person_link']['field'] = 'field_s_person_link';
  $handler->display->display_options['fields']['field_s_person_link']['label'] = '';
  $handler->display->display_options['fields']['field_s_person_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_person_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_person_link']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_s_person_link']['delta_offset'] = '0';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_s_pub_author']['id'] = 'field_s_pub_author';
  $handler->display->display_options['fields']['field_s_pub_author']['table'] = 'field_data_field_s_pub_author';
  $handler->display->display_options['fields']['field_s_pub_author']['field'] = 'field_s_pub_author';
  $handler->display->display_options['fields']['field_s_pub_author']['label'] = 'author';
  $handler->display->display_options['fields']['field_s_pub_author']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_s_pub_author']['alter']['text'] = '<article>[field_s_pub_author]</article>
<article>[field_s_person_link]</article>';
  $handler->display->display_options['fields']['field_s_pub_author']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_s_pub_author']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_s_pub_author']['separator'] = '';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'body';
  $handler->display->display_options['fields']['body']['alter']['text'] = '[body]
';
  /* Field: Content: Document(s) */
  $handler->display->display_options['fields']['field_s_pub_document']['id'] = 'field_s_pub_document';
  $handler->display->display_options['fields']['field_s_pub_document']['table'] = 'field_data_field_s_pub_document';
  $handler->display->display_options['fields']['field_s_pub_document']['field'] = 'field_s_pub_document';
  $handler->display->display_options['fields']['field_s_pub_document']['label'] = 'documents';
  $handler->display->display_options['fields']['field_s_pub_document']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_s_pub_document']['alter']['text'] = '<section>
<article>[field_s_pub_document]</article>
<details>[field_s_pub_document-description]</details>
</section>';
  $handler->display->display_options['fields']['field_s_pub_document']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s_pub_document']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_s_pub_document']['delta_offset'] = '0';
  /* Field: File: Path */
  $handler->display->display_options['fields']['uri']['id'] = 'uri';
  $handler->display->display_options['fields']['uri']['table'] = 'file_managed';
  $handler->display->display_options['fields']['uri']['field'] = 'uri';
  $handler->display->display_options['fields']['uri']['relationship'] = 'field_s_image_image_fid';
  $handler->display->display_options['fields']['uri']['label'] = 'image';
  $handler->display->display_options['fields']['uri']['file_download_path'] = TRUE;
  /* Field: Content: Publisher */
  $handler->display->display_options['fields']['field_s_pub_publisher']['id'] = 'field_s_pub_publisher';
  $handler->display->display_options['fields']['field_s_pub_publisher']['table'] = 'field_data_field_s_pub_publisher';
  $handler->display->display_options['fields']['field_s_pub_publisher']['field'] = 'field_s_pub_publisher';
  $handler->display->display_options['fields']['field_s_pub_publisher']['label'] = 'publisher';
  $handler->display->display_options['fields']['field_s_pub_publisher']['type'] = 'text_plain';
  /* Field: Content: Publication Date */
  $handler->display->display_options['fields']['field_s_publication_year']['id'] = 'field_s_publication_year';
  $handler->display->display_options['fields']['field_s_publication_year']['table'] = 'field_data_field_s_publication_year';
  $handler->display->display_options['fields']['field_s_publication_year']['field'] = 'field_s_publication_year';
  $handler->display->display_options['fields']['field_s_publication_year']['label'] = 'publicationYear';
  $handler->display->display_options['fields']['field_s_publication_year']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_s_publication_year']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_s_publication_year']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_s_publication_year']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'M Y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_s_pub_link']['id'] = 'field_s_pub_link';
  $handler->display->display_options['fields']['field_s_pub_link']['table'] = 'field_data_field_s_pub_link';
  $handler->display->display_options['fields']['field_s_pub_link']['field'] = 'field_s_pub_link';
  $handler->display->display_options['fields']['field_s_pub_link']['label'] = 'publicationLinkTitle';
  $handler->display->display_options['fields']['field_s_pub_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_s_pub_link']['type'] = 'link_title_plain';
  $handler->display->display_options['fields']['field_s_pub_link']['settings'] = array(
    'custom_title' => '',
  );
  $handler->display->display_options['fields']['field_s_pub_link']['delta_offset'] = '0';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_s_pub_link_1']['id'] = 'field_s_pub_link_1';
  $handler->display->display_options['fields']['field_s_pub_link_1']['table'] = 'field_data_field_s_pub_link';
  $handler->display->display_options['fields']['field_s_pub_link_1']['field'] = 'field_s_pub_link';
  $handler->display->display_options['fields']['field_s_pub_link_1']['label'] = 'publicationLinkUrl';
  $handler->display->display_options['fields']['field_s_pub_link_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_s_pub_link_1']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_s_pub_link_1']['settings'] = array(
    'custom_title' => '',
  );
  $handler->display->display_options['fields']['field_s_pub_link_1']['delta_offset'] = '0';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_s_pub_type']['id'] = 'field_s_pub_type';
  $handler->display->display_options['fields']['field_s_pub_type']['table'] = 'field_data_field_s_pub_type';
  $handler->display->display_options['fields']['field_s_pub_type']['field'] = 'field_s_pub_type';
  $handler->display->display_options['fields']['field_s_pub_type']['label'] = 'type';
  $handler->display->display_options['fields']['field_s_pub_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date added (field_s_publication_year) */
  $handler->display->display_options['sorts']['field_s_publication_year_value']['id'] = 'field_s_publication_year_value';
  $handler->display->display_options['sorts']['field_s_publication_year_value']['table'] = 'field_data_field_s_publication_year';
  $handler->display->display_options['sorts']['field_s_publication_year_value']['field'] = 'field_s_publication_year_value';
  $handler->display->display_options['sorts']['field_s_publication_year_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'stanford_publication' => 'stanford_publication',
  );
  $handler->display->display_options['path'] = 'publications-xml';
  $handler->display->display_options['sitename_title'] = 0;
  $export['stanford_publications_export'] = $view;

  return $export;
}
