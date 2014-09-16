<?php
/**
 * @file
 * stanford_jsa_shortcuts.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function stanford_jsa_shortcuts_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-admin-shortcuts-add-feature_add-features:admin/stanford-jumpstart/features
  $menu_links['menu-admin-shortcuts-add-feature_add-features:admin/stanford-jumpstart/features'] = array(
    'menu_name' => 'menu-admin-shortcuts-add-feature',
    'link_path' => 'admin/stanford-jumpstart/features',
    'router_path' => 'admin/stanford-jumpstart/features',
    'link_title' => 'Add Features',
    'options' => array(
      'attributes' => array(
        'title' => 'Add features to your site',
      ),
      'identifier' => 'menu-admin-shortcuts-add-feature_add-features:admin/stanford-jumpstart/features',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-admin-shortcuts-get-help_get-help:admin/stanford-jumpstart
  $menu_links['menu-admin-shortcuts-get-help_get-help:admin/stanford-jumpstart'] = array(
    'menu_name' => 'menu-admin-shortcuts-get-help',
    'link_path' => 'admin/stanford-jumpstart',
    'router_path' => 'admin/stanford-jumpstart',
    'link_title' => 'Get Help',
    'options' => array(
      'attributes' => array(
        'title' => 'Learn about ways to get help',
      ),
      'identifier' => 'menu-admin-shortcuts-get-help_get-help:admin/stanford-jumpstart',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-admin-shortcuts-home_home:<front>
  $menu_links['menu-admin-shortcuts-home_home:<front>'] = array(
    'menu_name' => 'menu-admin-shortcuts-home',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'title' => 'Home',
      ),
      'identifier' => 'menu-admin-shortcuts-home_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-admin-shortcuts-ready-to-la_ready-to-launch:admin/stanford-jumpstart/launch-checklist
  $menu_links['menu-admin-shortcuts-ready-to-la_ready-to-launch:admin/stanford-jumpstart/launch-checklist'] = array(
    'menu_name' => 'menu-admin-shortcuts-ready-to-la',
    'link_path' => 'admin/stanford-jumpstart/launch-checklist',
    'router_path' => 'admin/stanford-jumpstart/launch-checklist',
    'link_title' => 'Ready to Launch?',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-admin-shortcuts-ready-to-la_ready-to-launch:admin/stanford-jumpstart/launch-checklist',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-admin-shortcuts-site-action_add-event:node/add/stanford-event
  $menu_links['menu-admin-shortcuts-site-action_add-event:node/add/stanford-event'] = array(
    'menu_name' => 'menu-admin-shortcuts-site-action',
    'link_path' => 'node/add/stanford-event',
    'router_path' => 'node/add/stanford-event',
    'link_title' => 'Add Event',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-admin-shortcuts-site-action_add-event:node/add/stanford-event',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 0,
    'parent_identifier' => 'menu-admin-shortcuts-site-action_site-actions:admin/stanford-jumpstart',
  );
  // Exported menu link: menu-admin-shortcuts-site-action_add-news-item:node/add/stanford-news-item
  $menu_links['menu-admin-shortcuts-site-action_add-news-item:node/add/stanford-news-item'] = array(
    'menu_name' => 'menu-admin-shortcuts-site-action',
    'link_path' => 'node/add/stanford-news-item',
    'router_path' => 'node/add/stanford-news-item',
    'link_title' => 'Add News Item',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-admin-shortcuts-site-action_add-news-item:node/add/stanford-news-item',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 0,
    'parent_identifier' => 'menu-admin-shortcuts-site-action_site-actions:admin/stanford-jumpstart',
  );
  // Exported menu link: menu-admin-shortcuts-site-action_add-page:node/add/stanford-page
  $menu_links['menu-admin-shortcuts-site-action_add-page:node/add/stanford-page'] = array(
    'menu_name' => 'menu-admin-shortcuts-site-action',
    'link_path' => 'node/add/stanford-page',
    'router_path' => 'node/add/stanford-page',
    'link_title' => 'Add Page',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-admin-shortcuts-site-action_add-page:node/add/stanford-page',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 0,
    'parent_identifier' => 'menu-admin-shortcuts-site-action_site-actions:admin/stanford-jumpstart',
  );
  // Exported menu link: menu-admin-shortcuts-site-action_add-person:node/add/stanford-person
  $menu_links['menu-admin-shortcuts-site-action_add-person:node/add/stanford-person'] = array(
    'menu_name' => 'menu-admin-shortcuts-site-action',
    'link_path' => 'node/add/stanford-person',
    'router_path' => 'node/add/stanford-person',
    'link_title' => 'Add Person',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-admin-shortcuts-site-action_add-person:node/add/stanford-person',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -40,
    'customized' => 0,
    'parent_identifier' => 'menu-admin-shortcuts-site-action_site-actions:admin/stanford-jumpstart',
  );
  // Exported menu link: menu-admin-shortcuts-site-action_add-publication:node/add/stanford-publication
  $menu_links['menu-admin-shortcuts-site-action_add-publication:node/add/stanford-publication'] = array(
    'menu_name' => 'menu-admin-shortcuts-site-action',
    'link_path' => 'node/add/stanford-publication',
    'router_path' => 'node/add/stanford-publication',
    'link_title' => 'Add Publication',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-admin-shortcuts-site-action_add-publication:node/add/stanford-publication',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -39,
    'customized' => 0,
    'parent_identifier' => 'menu-admin-shortcuts-site-action_site-actions:admin/stanford-jumpstart',
  );
  // Exported menu link: menu-admin-shortcuts-site-action_edit-main-menu:admin/structure/menu/manage/main-menu
  $menu_links['menu-admin-shortcuts-site-action_edit-main-menu:admin/structure/menu/manage/main-menu'] = array(
    'menu_name' => 'menu-admin-shortcuts-site-action',
    'link_path' => 'admin/structure/menu/manage/main-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Edit Main Menu',
    'options' => array(
      'attributes' => array(
        'title' => 'Edit the links in your Main Menu',
      ),
      'identifier' => 'menu-admin-shortcuts-site-action_edit-main-menu:admin/structure/menu/manage/main-menu',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 0,
    'parent_identifier' => 'menu-admin-shortcuts-site-action_site-actions:admin/stanford-jumpstart',
  );
  // Exported menu link: menu-admin-shortcuts-site-action_edit-site-name:admin/config/system/site-information
  $menu_links['menu-admin-shortcuts-site-action_edit-site-name:admin/config/system/site-information'] = array(
    'menu_name' => 'menu-admin-shortcuts-site-action',
    'link_path' => 'admin/config/system/site-information',
    'router_path' => 'admin/config/system/site-information',
    'link_title' => 'Edit Site Name',
    'options' => array(
      'attributes' => array(
        'title' => 'Edit your site name',
      ),
      'identifier' => 'menu-admin-shortcuts-site-action_edit-site-name:admin/config/system/site-information',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 0,
    'parent_identifier' => 'menu-admin-shortcuts-site-action_site-actions:admin/stanford-jumpstart',
  );
  // Exported menu link: menu-admin-shortcuts-site-action_manage-content:admin/manage
  $menu_links['menu-admin-shortcuts-site-action_manage-content:admin/manage'] = array(
    'menu_name' => 'menu-admin-shortcuts-site-action',
    'link_path' => 'admin/manage',
    'router_path' => 'admin/manage',
    'link_title' => 'Manage Content',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-admin-shortcuts-site-action_manage-content:admin/manage',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 0,
    'parent_identifier' => 'menu-admin-shortcuts-site-action_site-actions:admin/stanford-jumpstart',
  );
  // Exported menu link: menu-admin-shortcuts-site-action:admin/structure/taxonomy_manager/voc
  $menu_links['menu-admin-shortcuts-site-action:admin/structure/taxonomy_manager/voc'] = array(
    'link_path' => 'admin/structure/taxonomy_manager/voc',
    'link_title' => 'Manage Taxonomies',
    'menu_name' => 'menu-admin-shortcuts-site-action',
    'parent_path' => 'admin/stanford-jumpstart',
    'router_path' => 'admin/structure/taxonomy_manager/voc',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage Taxonomies',
      ),
      'identifier' => 'menu-admin-shortcuts-site-action:admin/structure/taxonomy_manager/voc',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 0,
    'parent_identifier' => 'menu-admin-shortcuts-site-action_site-actions:admin/stanford-jumpstart',
  );
  // Exported menu link: menu-admin-shortcuts-site-action_manage-users:admin/people
  $menu_links['menu-admin-shortcuts-site-action_manage-users:admin/people'] = array(
    'menu_name' => 'menu-admin-shortcuts-site-action',
    'link_path' => 'admin/people',
    'router_path' => 'admin/people',
    'link_title' => 'Manage Users',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage all site users, Add/remove permissions',
      ),
      'identifier' => 'menu-admin-shortcuts-site-action_manage-users:admin/people',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 0,
    'parent_identifier' => 'menu-admin-shortcuts-site-action_site-actions:admin/stanford-jumpstart',
  );
  // Exported menu link: menu-admin-shortcuts-site-action_refresh-site-content:admin/stanford/jumpstart/shortcuts/clear-cache
  $menu_links['menu-admin-shortcuts-site-action_refresh-site-content:admin/stanford/jumpstart/shortcuts/clear-cache'] = array(
    'menu_name' => 'menu-admin-shortcuts-site-action',
    'link_path' => 'admin/stanford/jumpstart/shortcuts/clear-cache',
    'router_path' => 'admin/stanford/jumpstart/shortcuts/clear-cache',
    'link_title' => 'Clear Site Cache',
    'options' => array(
      'attributes' => array(
        'class' => 'su-clear-cache',
        'title' => "Don't see your changes? Clear your cache",
      ),
      'identifier' => 'menu-admin-shortcuts-site-action_refresh-site-content:admin/stanford/jumpstart/shortcuts/clear-cache',
    ),
    'module' => 'stanford_jsa_shortcuts',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -38,
    'customized' => 0,
    'parent_identifier' => 'menu-admin-shortcuts-site-action_site-actions:admin/stanford-jumpstart',
  );
  // Exported menu link: menu-admin-shortcuts-site-action_site-actions:admin/stanford-jumpstart
  $menu_links['menu-admin-shortcuts-site-action_site-actions:admin/stanford-jumpstart'] = array(
    'menu_name' => 'menu-admin-shortcuts-site-action',
    'link_path' => 'admin/stanford-jumpstart',
    'router_path' => 'admin/stanford-jumpstart',
    'link_title' => 'Site Actions',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-admin-shortcuts-site-action_site-actions:admin/stanford-jumpstart',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Add Event');
  t('Add Features');
  t('Add News Item');
  t('Add Page');
  t('Add Person');
  t('Add Publication');
  t('Clear Site Cache');
  t('Edit Main Menu');
  t('Edit Site Name');
  t('Get Help');
  t('Home');
  t('Manage Content');
  t('Manage Users');
  t('Ready to Launch?');
  t('Site Actions');


  return $menu_links;
}
