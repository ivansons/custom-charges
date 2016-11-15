<?php 
/**
 * Implements hook_rules_action_info().
 */
function custom_changes_rules_action_info() {
  return array(
    'custom_changes_list_length' => array(
      'label' => t('Get length of list'),
      'group' => t('Data'),
      'parameter' => array(
        'list' => array(
          'type' => 'unknown',
          'label' => t('List'),
        ),
      ),
      'provides' => array(
        'list_length' => array(
          'type' => 'integer',
          'label' => t('List length'),
        ),
      ),
    ),
  );
}

/**
 * The action for 'custom_changes_list_length'
 */
function custom_changes_list_length($list) {
  return array(
    'list_length' => is_array($list) ? count($list) : NULL,
  );
}