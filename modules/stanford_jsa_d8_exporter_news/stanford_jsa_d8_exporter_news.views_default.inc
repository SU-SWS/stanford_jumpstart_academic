<?php

/**
 * @file
 * stanford_jsa_d8_exporter_news.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function stanford_jsa_d8_exporter_news_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'stanford_news_export';
  $view->description = 'List-style page and sidebar block';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'Stanford News Export';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Events';
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

  /* Display: News Data export */
  $handler = $view->new_display('views_data_export', 'News Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['transform'] = 1;
  $handler->display->display_options['style_options']['root_node'] = 'NewsList';
  $handler->display->display_options['style_options']['item_node'] = 'NewsItem';
  $handler->display->display_options['style_options']['cdata_wrapper'] = array(
    'body' => 'body',
    'field_s_image_caption' => 'field_s_image_caption',
    'field_s_image_credits' => 'field_s_image_credits',
  );
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Field: Image (field_s_image_info) */
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
  $handler->display->display_options['fields']['uuid_1']['id'] = 'uuid_1';
  $handler->display->display_options['fields']['uuid_1']['table'] = 'node';
  $handler->display->display_options['fields']['uuid_1']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid_1']['label'] = 'guid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'body';
  /* Field: File: Path */
  $handler->display->display_options['fields']['uri']['id'] = 'uri';
  $handler->display->display_options['fields']['uri']['table'] = 'file_managed';
  $handler->display->display_options['fields']['uri']['field'] = 'uri';
  $handler->display->display_options['fields']['uri']['relationship'] = 'field_s_image_image_fid';
  $handler->display->display_options['fields']['uri']['label'] = 'image';
  $handler->display->display_options['fields']['uri']['file_download_path'] = TRUE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_s_news_date']['id'] = 'field_s_news_date';
  $handler->display->display_options['fields']['field_s_news_date']['table'] = 'field_data_field_s_news_date';
  $handler->display->display_options['fields']['field_s_news_date']['field'] = 'field_s_news_date';
  $handler->display->display_options['fields']['field_s_news_date']['label'] = 'publishedDate';
  $handler->display->display_options['fields']['field_s_news_date']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_s_news_date']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'Y-m-d',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Source */
  $handler->display->display_options['fields']['field_s_news_source']['id'] = 'field_s_news_source';
  $handler->display->display_options['fields']['field_s_news_source']['table'] = 'field_data_field_s_news_source';
  $handler->display->display_options['fields']['field_s_news_source']['field'] = 'field_s_news_source';
  $handler->display->display_options['fields']['field_s_news_source']['label'] = 'externalLinkUrl';
  $handler->display->display_options['fields']['field_s_news_source']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_s_news_source']['type'] = 'link_absolute';
  $handler->display->display_options['fields']['field_s_news_source']['settings'] = array(
    'custom_title' => '',
  );
  /* Field: Content: Source */
  $handler->display->display_options['fields']['field_s_news_source_1']['id'] = 'field_s_news_source_1';
  $handler->display->display_options['fields']['field_s_news_source_1']['table'] = 'field_data_field_s_news_source';
  $handler->display->display_options['fields']['field_s_news_source_1']['field'] = 'field_s_news_source';
  $handler->display->display_options['fields']['field_s_news_source_1']['label'] = 'externalLinkTitle';
  $handler->display->display_options['fields']['field_s_news_source_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_s_news_source_1']['type'] = 'link_title_plain';
  $handler->display->display_options['fields']['field_s_news_source_1']['settings'] = array(
    'custom_title' => '',
  );
  /* Field: Content: Categories */
  $handler->display->display_options['fields']['field_s_news_categories']['id'] = 'field_s_news_categories';
  $handler->display->display_options['fields']['field_s_news_categories']['table'] = 'field_data_field_s_news_categories';
  $handler->display->display_options['fields']['field_s_news_categories']['field'] = 'field_s_news_categories';
  $handler->display->display_options['fields']['field_s_news_categories']['label'] = 'categories';
  $handler->display->display_options['fields']['field_s_news_categories']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_s_news_categories']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date (field_s_news_date) */
  $handler->display->display_options['sorts']['field_s_news_date_value']['id'] = 'field_s_news_date_value';
  $handler->display->display_options['sorts']['field_s_news_date_value']['table'] = 'field_data_field_s_news_date';
  $handler->display->display_options['sorts']['field_s_news_date_value']['field'] = 'field_s_news_date_value';
  $handler->display->display_options['sorts']['field_s_news_date_value']['order'] = 'DESC';
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
    'stanford_news_item' => 'stanford_news_item',
  );
  $handler->display->display_options['path'] = 'news-xml';

  /* Display: News Data export wCaptionCredits */
  $handler = $view->new_display('views_data_export', 'News Data export wCaptionCredits', 'views_data_export_2');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['transform'] = 1;
  $handler->display->display_options['style_options']['root_node'] = 'NewsList';
  $handler->display->display_options['style_options']['item_node'] = 'NewsItem';
  $handler->display->display_options['style_options']['cdata_wrapper'] = array(
    'body' => 'body',
    'field_s_image_caption' => 'field_s_image_caption',
  );
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Field: Image (field_s_image_info) */
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
  $handler->display->display_options['fields']['uuid_1']['id'] = 'uuid_1';
  $handler->display->display_options['fields']['uuid_1']['table'] = 'node';
  $handler->display->display_options['fields']['uuid_1']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid_1']['label'] = 'guid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'body';
  /* Field: File: Path */
  $handler->display->display_options['fields']['uri']['id'] = 'uri';
  $handler->display->display_options['fields']['uri']['table'] = 'file_managed';
  $handler->display->display_options['fields']['uri']['field'] = 'uri';
  $handler->display->display_options['fields']['uri']['relationship'] = 'field_s_image_image_fid';
  $handler->display->display_options['fields']['uri']['label'] = 'image';
  $handler->display->display_options['fields']['uri']['file_download_path'] = TRUE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_s_news_date']['id'] = 'field_s_news_date';
  $handler->display->display_options['fields']['field_s_news_date']['table'] = 'field_data_field_s_news_date';
  $handler->display->display_options['fields']['field_s_news_date']['field'] = 'field_s_news_date';
  $handler->display->display_options['fields']['field_s_news_date']['label'] = 'publishedDate';
  $handler->display->display_options['fields']['field_s_news_date']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_s_news_date']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'Y-m-d',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Source */
  $handler->display->display_options['fields']['field_s_news_source']['id'] = 'field_s_news_source';
  $handler->display->display_options['fields']['field_s_news_source']['table'] = 'field_data_field_s_news_source';
  $handler->display->display_options['fields']['field_s_news_source']['field'] = 'field_s_news_source';
  $handler->display->display_options['fields']['field_s_news_source']['label'] = 'externalLinkUrl';
  $handler->display->display_options['fields']['field_s_news_source']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_s_news_source']['type'] = 'link_absolute';
  $handler->display->display_options['fields']['field_s_news_source']['settings'] = array(
    'custom_title' => '',
  );
  /* Field: Content: Source */
  $handler->display->display_options['fields']['field_s_news_source_1']['id'] = 'field_s_news_source_1';
  $handler->display->display_options['fields']['field_s_news_source_1']['table'] = 'field_data_field_s_news_source';
  $handler->display->display_options['fields']['field_s_news_source_1']['field'] = 'field_s_news_source';
  $handler->display->display_options['fields']['field_s_news_source_1']['label'] = 'externalLinkTitle';
  $handler->display->display_options['fields']['field_s_news_source_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_s_news_source_1']['type'] = 'link_title_plain';
  $handler->display->display_options['fields']['field_s_news_source_1']['settings'] = array(
    'custom_title' => '',
  );
  /* Field: Content: Categories */
  $handler->display->display_options['fields']['field_s_news_categories']['id'] = 'field_s_news_categories';
  $handler->display->display_options['fields']['field_s_news_categories']['table'] = 'field_data_field_s_news_categories';
  $handler->display->display_options['fields']['field_s_news_categories']['field'] = 'field_s_news_categories';
  $handler->display->display_options['fields']['field_s_news_categories']['label'] = 'categories';
  $handler->display->display_options['fields']['field_s_news_categories']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_s_news_categories']['delta_offset'] = '0';
  /* Field: Field collection item: Caption */
  $handler->display->display_options['fields']['field_s_image_caption']['id'] = 'field_s_image_caption';
  $handler->display->display_options['fields']['field_s_image_caption']['table'] = 'field_data_field_s_image_caption';
  $handler->display->display_options['fields']['field_s_image_caption']['field'] = 'field_s_image_caption';
  $handler->display->display_options['fields']['field_s_image_caption']['relationship'] = 'field_s_image_info_value';
  $handler->display->display_options['fields']['field_s_image_caption']['label'] = 'imageCaption';
  /* Field: Field collection item: Credits */
  $handler->display->display_options['fields']['field_s_image_credits']['id'] = 'field_s_image_credits';
  $handler->display->display_options['fields']['field_s_image_credits']['table'] = 'field_data_field_s_image_credits';
  $handler->display->display_options['fields']['field_s_image_credits']['field'] = 'field_s_image_credits';
  $handler->display->display_options['fields']['field_s_image_credits']['relationship'] = 'field_s_image_info_value';
  $handler->display->display_options['fields']['field_s_image_credits']['label'] = 'imageCredits';
  $handler->display->display_options['fields']['field_s_image_credits']['type'] = 'text_plain';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date and Time -  start date (field_stanford_event_datetime) */
  $handler->display->display_options['sorts']['field_stanford_event_datetime_value']['id'] = 'field_stanford_event_datetime_value';
  $handler->display->display_options['sorts']['field_stanford_event_datetime_value']['table'] = 'field_data_field_stanford_event_datetime';
  $handler->display->display_options['sorts']['field_stanford_event_datetime_value']['field'] = 'field_stanford_event_datetime_value';
  $handler->display->display_options['sorts']['field_stanford_event_datetime_value']['order'] = 'DESC';
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
    'stanford_news_item' => 'stanford_news_item',
  );
  $handler->display->display_options['path'] = 'news-captioncredit-xml';
  $export['stanford_news_export'] = $view;

  return $export;
}
