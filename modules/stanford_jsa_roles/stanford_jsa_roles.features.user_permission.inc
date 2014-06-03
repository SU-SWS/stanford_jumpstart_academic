<?php
/**
 * @file
 * stanford_jsa_roles.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function stanford_jsa_roles_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer taxonomy.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      0 => 'administrator',
      1 => 'site owner',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: create stanford_event content.
  $permissions['create stanford_event content'] = array(
    'name' => 'create stanford_event content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: create stanford_event_importer content.
  $permissions['create stanford_event_importer content'] = array(
    'name' => 'create stanford_event_importer content',
    'roles' => array(
      0 => 'administrator',
      1 => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: create stanford_news_item content.
  $permissions['create stanford_news_item content'] = array(
    'name' => 'create stanford_news_item content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: create stanford_person content.
  $permissions['create stanford_person content'] = array(
    'name' => 'create stanford_person content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: create stanford_publication content.
  $permissions['create stanford_publication content'] = array(
    'name' => 'create stanford_publication content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any stanford_event content.
  $permissions['delete any stanford_event content'] = array(
    'name' => 'delete any stanford_event content',
    'roles' => array(
      0 => 'administrator',
      1 => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any stanford_event_importer content.
  $permissions['delete any stanford_event_importer content'] = array(
    'name' => 'delete any stanford_event_importer content',
    'roles' => array(
      0 => 'administrator',
      1 => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any stanford_news_item content.
  $permissions['delete any stanford_news_item content'] = array(
    'name' => 'delete any stanford_news_item content',
    'roles' => array(
      0 => 'administrator',
      1 => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any stanford_person content.
  $permissions['delete any stanford_person content'] = array(
    'name' => 'delete any stanford_person content',
    'roles' => array(
      0 => 'administrator',
      1 => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any stanford_publication content.
  $permissions['delete any stanford_publication content'] = array(
    'name' => 'delete any stanford_publication content',
    'roles' => array(
      0 => 'administrator',
      1 => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own stanford_event content.
  $permissions['delete own stanford_event content'] = array(
    'name' => 'delete own stanford_event content',
    'roles' => array(
      0 => 'administrator',
      1 => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own stanford_event_importer content.
  $permissions['delete own stanford_event_importer content'] = array(
    'name' => 'delete own stanford_event_importer content',
    'roles' => array(
      0 => 'administrator',
      1 => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own stanford_news_item content.
  $permissions['delete own stanford_news_item content'] = array(
    'name' => 'delete own stanford_news_item content',
    'roles' => array(
      0 => 'administrator',
      1 => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own stanford_person content.
  $permissions['delete own stanford_person content'] = array(
    'name' => 'delete own stanford_person content',
    'roles' => array(
      0 => 'administrator',
      1 => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own stanford_publication content.
  $permissions['delete own stanford_publication content'] = array(
    'name' => 'delete own stanford_publication content',
    'roles' => array(
      0 => 'administrator',
      1 => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: delete terms in news_categories.
  $news_categories_vid = taxonomy_vocabulary_machine_name_load('news_categories')->vid;
  $permissions['delete terms in ' . $news_categories_vid] = array(
    'name' => 'delete terms in ' . $news_categories_vid,
    'roles' => array(
      0 => 'administrator',
      1 => 'site owner',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in publication_type.
  $publication_type_vid = taxonomy_vocabulary_machine_name_load('publication_type')->vid;
  $permissions['delete terms in ' . $publication_type_vid] = array(
    'name' => 'delete terms in ' . $publication_type_vid,
    'roles' => array(
      0 => 'administrator',
      1 => 'site owner',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in stanford_event_audience.
  $stanford_event_audience_vid = taxonomy_vocabulary_machine_name_load('stanford_event_audience')->vid;
  $permissions['delete terms in ' . $stanford_event_audience_vid] = array(
    'name' => 'delete terms in ' . $stanford_event_audience_vid,
    'roles' => array(
      0 => 'administrator',
      1 => 'site owner',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in stanford_event_categories.
  $stanford_event_categories_vid = taxonomy_vocabulary_machine_name_load('stanford_event_categories')->vid;
  $permissions['delete terms in ' . $stanford_event_categories_vid] = array(
    'name' => 'delete terms in ' . $stanford_event_categories_vid,
    'roles' => array(
      0 => 'administrator',
      1 => 'site owner',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in stanford_faculty_type.
  $stanford_faculty_type_vid = taxonomy_vocabulary_machine_name_load('stanford_faculty_type')->vid;
  $permissions['delete terms in ' . $stanford_faculty_type_vid] = array(
    'name' => 'delete terms in ' . $stanford_faculty_type_vid,
    'roles' => array(
      0 => 'administrator',
      1 => 'site owner',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in stanford_field_of_study.
  $stanford_field_of_study_vid = taxonomy_vocabulary_machine_name_load('stanford_field_of_study')->vid;
  $permissions['delete terms in ' . $stanford_field_of_study_vid] = array(
    'name' => 'delete terms in ' . $stanford_field_of_study_vid,
    'roles' => array(
      0 => 'administrator',
      1 => 'site owner',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in stanford_interests.
  $stanford_interests_vid = taxonomy_vocabulary_machine_name_load('stanford_interests')->vid;
  $permissions['delete terms in ' . $stanford_interests_vid] = array(
    'name' => 'delete terms in ' . $stanford_interests_vid,
    'roles' => array(
      0 => 'administrator',
      1 => 'site owner',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in stanford_staff_type.
  $stanford_staff_type_vid = taxonomy_vocabulary_machine_name_load('stanford_staff_type')->vid;
  $permissions['delete terms in ' . $stanford_staff_type_vid] = array(
    'name' => 'delete terms in ' . $stanford_staff_type_vid,
    'roles' => array(
      0 => 'administrator',
      1 => 'site owner',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in stanford_student_type.
  $stanford_student_type_vid = taxonomy_vocabulary_machine_name_load('stanford_student_type')->vid;
  $permissions['delete terms in ' . $stanford_student_type_vid] = array(
    'name' => 'delete terms in ' . $stanford_student_type_vid,
    'roles' => array(
      0 => 'administrator',
      1 => 'site owner',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in tags.
  $tags_vid = taxonomy_vocabulary_machine_name_load('tags')->vid;
  $permissions['delete terms in ' . $tags_vid] = array(
    'name' => 'delete terms in ' . $tags_vid,
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit any stanford_event content.
  $permissions['edit any stanford_event content'] = array(
    'name' => 'edit any stanford_event content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any stanford_event_importer content.
  $permissions['edit any stanford_event_importer content'] = array(
    'name' => 'edit any stanford_event_importer content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any stanford_news_item content.
  $permissions['edit any stanford_news_item content'] = array(
    'name' => 'edit any stanford_news_item content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any stanford_person content.
  $permissions['edit any stanford_person content'] = array(
    'name' => 'edit any stanford_person content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any stanford_publication content.
  $permissions['edit any stanford_publication content'] = array(
    'name' => 'edit any stanford_publication content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own stanford_event content.
  $permissions['edit own stanford_event content'] = array(
    'name' => 'edit own stanford_event content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own stanford_event_importer content.
  $permissions['edit own stanford_event_importer content'] = array(
    'name' => 'edit own stanford_event_importer content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own stanford_news_item content.
  $permissions['edit own stanford_news_item content'] = array(
    'name' => 'edit own stanford_news_item content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own stanford_person content.
  $permissions['edit own stanford_person content'] = array(
    'name' => 'edit own stanford_person content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own stanford_publication content.
  $permissions['edit own stanford_publication content'] = array(
    'name' => 'edit own stanford_publication content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: edit terms in news_categories.
  $permissions['edit terms in ' . $news_categories_vid] = array(
    'name' => 'edit terms in ' . $news_categories_vid,
    'roles' => array(
      0 => 'administrator',
      1 => 'site owner',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in publication_type.
  $permissions['edit terms in ' . $publication_type_vid] = array(
    'name' => 'edit terms in ' . $publication_type_vid,
    'roles' => array(
      0 => 'administrator',
      1 => 'site owner',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in stanford_event_audience.
  $permissions['edit terms in ' . $stanford_event_audience_vid] = array(
    'name' => 'edit terms in ' . $stanford_event_audience_vid,
    'roles' => array(
      0 => 'administrator',
      1 => 'site owner',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in stanford_event_categories.
  $permissions['edit terms in ' . $stanford_event_categories_vid] = array(
    'name' => 'edit terms in ' . $stanford_event_categories_vid,
    'roles' => array(
      0 => 'administrator',
      1 => 'site owner',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in stanford_faculty_type.
  $permissions['edit terms in ' . $stanford_faculty_type_vid] = array(
    'name' => 'edit terms in ' . $stanford_faculty_type_vid,
    'roles' => array(
      0 => 'administrator',
      1 => 'site owner',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in stanford_field_of_study.
  $permissions['edit terms in ' . $stanford_field_of_study_vid] = array(
    'name' => 'edit terms in ' . $stanford_field_of_study_vid,
    'roles' => array(
      0 => 'administrator',
      1 => 'site owner',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in stanford_interests.
  $permissions['edit terms in ' . $stanford_interests_vid] = array(
    'name' => 'edit terms in ' . $stanford_interests_vid,
    'roles' => array(
      0 => 'administrator',
      1 => 'site owner',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in stanford_staff_type.
  $permissions['edit terms in ' . $stanford_staff_type_vid] = array(
    'name' => 'edit terms in ' . $stanford_staff_type_vid,
    'roles' => array(
      0 => 'administrator',
      1 => 'site owner',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in stanford_student_type.
  $permissions['edit terms in ' . $stanford_student_type_vid] = array(
    'name' => 'edit terms in ' . $stanford_student_type_vid,
    'roles' => array(
      0 => 'administrator',
      1 => 'site owner',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in tags.
  $permissions['edit terms in ' . $tags_vid] = array(
    'name' => 'edit terms in ' . $tags_vid,
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: stanford jumpstart clear caches.
  $permissions['stanford jumpstart clear caches'] = array(
    'name' => 'stanford jumpstart clear caches',
    'roles' => array(
      0 => 'administrator',
      1 => 'site owner',
    ),
    'module' => 'stanford_jsa_shortcuts',
  );

  return $permissions;
}
