<?php

/**
 * @file
 * stanford_jsa_d8_exporter_people.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function stanford_jsa_d8_exporter_people_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'stanford_people_export';
  $view->description = 'List-style page and sidebar block';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'Stanford People Export';
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

  /* Display: People Data export */
  $handler = $view->new_display('views_data_export', 'People Data export', 'views_data_export_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'People';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['transform'] = 1;
  $handler->display->display_options['style_options']['root_node'] = 'PeopleList';
  $handler->display->display_options['style_options']['item_node'] = 'PeopleItem';
  $handler->display->display_options['style_options']['no_entity_encode'] = array(
    'field_s_person_info_links_1' => 'field_s_person_info_links_1',
  );
  $handler->display->display_options['style_options']['cdata_wrapper'] = array(
    'body' => 'body',
  );
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Profile Picture (field_s_person_profile_picture:fid) */
  $handler->display->display_options['relationships']['field_s_person_profile_picture_fid']['id'] = 'field_s_person_profile_picture_fid';
  $handler->display->display_options['relationships']['field_s_person_profile_picture_fid']['table'] = 'field_data_field_s_person_profile_picture';
  $handler->display->display_options['relationships']['field_s_person_profile_picture_fid']['field'] = 'field_s_person_profile_picture_fid';
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
  $handler->display->display_options['fields']['title']['label'] = 'displayName';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: First name */
  $handler->display->display_options['fields']['field_s_person_first_name']['id'] = 'field_s_person_first_name';
  $handler->display->display_options['fields']['field_s_person_first_name']['table'] = 'field_data_field_s_person_first_name';
  $handler->display->display_options['fields']['field_s_person_first_name']['field'] = 'field_s_person_first_name';
  $handler->display->display_options['fields']['field_s_person_first_name']['label'] = 'firstName';
  $handler->display->display_options['fields']['field_s_person_first_name']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_s_person_first_name']['type'] = 'text_plain';
  /* Field: Content: Middle name */
  $handler->display->display_options['fields']['field_s_person_middle_name']['id'] = 'field_s_person_middle_name';
  $handler->display->display_options['fields']['field_s_person_middle_name']['table'] = 'field_data_field_s_person_middle_name';
  $handler->display->display_options['fields']['field_s_person_middle_name']['field'] = 'field_s_person_middle_name';
  $handler->display->display_options['fields']['field_s_person_middle_name']['label'] = 'middleName';
  $handler->display->display_options['fields']['field_s_person_middle_name']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_s_person_middle_name']['type'] = 'text_plain';
  /* Field: Content: Last Name */
  $handler->display->display_options['fields']['field_s_person_last_name']['id'] = 'field_s_person_last_name';
  $handler->display->display_options['fields']['field_s_person_last_name']['table'] = 'field_data_field_s_person_last_name';
  $handler->display->display_options['fields']['field_s_person_last_name']['field'] = 'field_s_person_last_name';
  $handler->display->display_options['fields']['field_s_person_last_name']['label'] = 'lastName';
  $handler->display->display_options['fields']['field_s_person_last_name']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_s_person_last_name']['type'] = 'text_plain';
  /* Field: Content: Affiliation */
  $handler->display->display_options['fields']['field_s_person_affiliation']['id'] = 'field_s_person_affiliation';
  $handler->display->display_options['fields']['field_s_person_affiliation']['table'] = 'field_data_field_s_person_affiliation';
  $handler->display->display_options['fields']['field_s_person_affiliation']['field'] = 'field_s_person_affiliation';
  $handler->display->display_options['fields']['field_s_person_affiliation']['label'] = 'affiliation';
  $handler->display->display_options['fields']['field_s_person_affiliation']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_s_person_affiliation']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_s_person_affiliation']['separator'] = '|';
  /* Field: Content: Degrees / Education */
  $handler->display->display_options['fields']['field_s_person_education']['id'] = 'field_s_person_education';
  $handler->display->display_options['fields']['field_s_person_education']['table'] = 'field_data_field_s_person_education';
  $handler->display->display_options['fields']['field_s_person_education']['field'] = 'field_s_person_education';
  $handler->display->display_options['fields']['field_s_person_education']['label'] = 'degreesEducation';
  $handler->display->display_options['fields']['field_s_person_education']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_s_person_education']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_s_person_education']['separator'] = '|';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'biography';
  /* Field: Content: Title and Department */
  $handler->display->display_options['fields']['field_s_person_faculty_title']['id'] = 'field_s_person_faculty_title';
  $handler->display->display_options['fields']['field_s_person_faculty_title']['table'] = 'field_data_field_s_person_faculty_title';
  $handler->display->display_options['fields']['field_s_person_faculty_title']['field'] = 'field_s_person_faculty_title';
  $handler->display->display_options['fields']['field_s_person_faculty_title']['label'] = 'personTitleDepartment';
  $handler->display->display_options['fields']['field_s_person_faculty_title']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_s_person_faculty_title']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_s_person_faculty_title']['separator'] = '|';
  /* Field: Content: Personal info Links */
  $handler->display->display_options['fields']['field_s_person_info_links_1']['id'] = 'field_s_person_info_links_1';
  $handler->display->display_options['fields']['field_s_person_info_links_1']['table'] = 'field_data_field_s_person_info_links';
  $handler->display->display_options['fields']['field_s_person_info_links_1']['field'] = 'field_s_person_info_links';
  $handler->display->display_options['fields']['field_s_person_info_links_1']['label'] = 'infoLink';
  $handler->display->display_options['fields']['field_s_person_info_links_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_s_person_info_links_1']['settings'] = array(
    'custom_title' => '',
  );
  $handler->display->display_options['fields']['field_s_person_info_links_1']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_s_person_info_links_1']['separator'] = '';
  /* Field: Content: Fields of Interest */
  $handler->display->display_options['fields']['field_s_person_interests']['id'] = 'field_s_person_interests';
  $handler->display->display_options['fields']['field_s_person_interests']['table'] = 'field_data_field_s_person_interests';
  $handler->display->display_options['fields']['field_s_person_interests']['field'] = 'field_s_person_interests';
  $handler->display->display_options['fields']['field_s_person_interests']['label'] = 'researchArea';
  $handler->display->display_options['fields']['field_s_person_interests']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_s_person_interests']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_s_person_interests']['separator'] = '|';
  /* Field: Content: Field of Study */
  $handler->display->display_options['fields']['field_s_person_study']['id'] = 'field_s_person_study';
  $handler->display->display_options['fields']['field_s_person_study']['table'] = 'field_data_field_s_person_study';
  $handler->display->display_options['fields']['field_s_person_study']['field'] = 'field_s_person_study';
  $handler->display->display_options['fields']['field_s_person_study']['label'] = 'fieldOfInterest';
  $handler->display->display_options['fields']['field_s_person_study']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_s_person_study']['delta_offset'] = '0';
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_s_person_email']['id'] = 'field_s_person_email';
  $handler->display->display_options['fields']['field_s_person_email']['table'] = 'field_data_field_s_person_email';
  $handler->display->display_options['fields']['field_s_person_email']['field'] = 'field_s_person_email';
  $handler->display->display_options['fields']['field_s_person_email']['label'] = 'email';
  $handler->display->display_options['fields']['field_s_person_email']['type'] = 'email_plain';
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_s_person_phone_display']['id'] = 'field_s_person_phone_display';
  $handler->display->display_options['fields']['field_s_person_phone_display']['table'] = 'field_data_field_s_person_phone_display';
  $handler->display->display_options['fields']['field_s_person_phone_display']['field'] = 'field_s_person_phone_display';
  $handler->display->display_options['fields']['field_s_person_phone_display']['label'] = 'phone';
  $handler->display->display_options['fields']['field_s_person_phone_display']['type'] = 'text_plain';
  /* Field: Content: Office */
  $handler->display->display_options['fields']['field_s_person_office_location']['id'] = 'field_s_person_office_location';
  $handler->display->display_options['fields']['field_s_person_office_location']['table'] = 'field_data_field_s_person_office_location';
  $handler->display->display_options['fields']['field_s_person_office_location']['field'] = 'field_s_person_office_location';
  $handler->display->display_options['fields']['field_s_person_office_location']['label'] = 'office';
  $handler->display->display_options['fields']['field_s_person_office_location']['type'] = 'text_plain';
  /* Field: Content: Office Hours */
  $handler->display->display_options['fields']['field_s_person_office_hours']['id'] = 'field_s_person_office_hours';
  $handler->display->display_options['fields']['field_s_person_office_hours']['table'] = 'field_data_field_s_person_office_hours';
  $handler->display->display_options['fields']['field_s_person_office_hours']['field'] = 'field_s_person_office_hours';
  $handler->display->display_options['fields']['field_s_person_office_hours']['label'] = 'officeHours';
  $handler->display->display_options['fields']['field_s_person_office_hours']['type'] = 'text_plain';
  /* Field: Content: Cohort */
  $handler->display->display_options['fields']['field_s_person_cohort']['id'] = 'field_s_person_cohort';
  $handler->display->display_options['fields']['field_s_person_cohort']['table'] = 'field_data_field_s_person_cohort';
  $handler->display->display_options['fields']['field_s_person_cohort']['field'] = 'field_s_person_cohort';
  $handler->display->display_options['fields']['field_s_person_cohort']['label'] = 'cohort';
  $handler->display->display_options['fields']['field_s_person_cohort']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_s_person_cohort']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'Y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Dissertation Title */
  $handler->display->display_options['fields']['field_s_person_dissertatn_title']['id'] = 'field_s_person_dissertatn_title';
  $handler->display->display_options['fields']['field_s_person_dissertatn_title']['table'] = 'field_data_field_s_person_dissertatn_title';
  $handler->display->display_options['fields']['field_s_person_dissertatn_title']['field'] = 'field_s_person_dissertatn_title';
  $handler->display->display_options['fields']['field_s_person_dissertatn_title']['label'] = 'dissertationTitle';
  $handler->display->display_options['fields']['field_s_person_dissertatn_title']['type'] = 'text_plain';
  /* Field: Content: Faculty Status */
  $handler->display->display_options['fields']['field_s_person_faculty_type']['id'] = 'field_s_person_faculty_type';
  $handler->display->display_options['fields']['field_s_person_faculty_type']['table'] = 'field_data_field_s_person_faculty_type';
  $handler->display->display_options['fields']['field_s_person_faculty_type']['field'] = 'field_s_person_faculty_type';
  $handler->display->display_options['fields']['field_s_person_faculty_type']['label'] = 'facultyType';
  $handler->display->display_options['fields']['field_s_person_faculty_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Graduation Year */
  $handler->display->display_options['fields']['field_s_person_graduation_year']['id'] = 'field_s_person_graduation_year';
  $handler->display->display_options['fields']['field_s_person_graduation_year']['table'] = 'field_data_field_s_person_graduation_year';
  $handler->display->display_options['fields']['field_s_person_graduation_year']['field'] = 'field_s_person_graduation_year';
  $handler->display->display_options['fields']['field_s_person_graduation_year']['label'] = 'graduationYear';
  $handler->display->display_options['fields']['field_s_person_graduation_year']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_s_person_graduation_year']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'Y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Staff Type */
  $handler->display->display_options['fields']['field_s_person_staff_type']['id'] = 'field_s_person_staff_type';
  $handler->display->display_options['fields']['field_s_person_staff_type']['table'] = 'field_data_field_s_person_staff_type';
  $handler->display->display_options['fields']['field_s_person_staff_type']['field'] = 'field_s_person_staff_type';
  $handler->display->display_options['fields']['field_s_person_staff_type']['label'] = 'staffType';
  $handler->display->display_options['fields']['field_s_person_staff_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Student Type */
  $handler->display->display_options['fields']['field_s_person_student_type']['id'] = 'field_s_person_student_type';
  $handler->display->display_options['fields']['field_s_person_student_type']['table'] = 'field_data_field_s_person_student_type';
  $handler->display->display_options['fields']['field_s_person_student_type']['field'] = 'field_s_person_student_type';
  $handler->display->display_options['fields']['field_s_person_student_type']['label'] = 'studentType';
  $handler->display->display_options['fields']['field_s_person_student_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: File: Path */
  $handler->display->display_options['fields']['uri']['id'] = 'uri';
  $handler->display->display_options['fields']['uri']['table'] = 'file_managed';
  $handler->display->display_options['fields']['uri']['field'] = 'uri';
  $handler->display->display_options['fields']['uri']['relationship'] = 'field_s_person_profile_picture_fid';
  $handler->display->display_options['fields']['uri']['label'] = 'imageUrl';
  $handler->display->display_options['fields']['uri']['file_download_path'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: First name (field_s_person_first_name) */
  $handler->display->display_options['sorts']['field_s_person_first_name_value']['id'] = 'field_s_person_first_name_value';
  $handler->display->display_options['sorts']['field_s_person_first_name_value']['table'] = 'field_data_field_s_person_first_name';
  $handler->display->display_options['sorts']['field_s_person_first_name_value']['field'] = 'field_s_person_first_name_value';
  /* Sort criterion: Content: Last Name (field_s_person_last_name) */
  $handler->display->display_options['sorts']['field_s_person_last_name_value']['id'] = 'field_s_person_last_name_value';
  $handler->display->display_options['sorts']['field_s_person_last_name_value']['table'] = 'field_data_field_s_person_last_name';
  $handler->display->display_options['sorts']['field_s_person_last_name_value']['field'] = 'field_s_person_last_name_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'stanford_person' => 'stanford_person',
  );
  $handler->display->display_options['path'] = 'people-xml';
  $handler->display->display_options['sitename_title'] = 0;
  $export['stanford_people_export'] = $view;

  return $export;
}
