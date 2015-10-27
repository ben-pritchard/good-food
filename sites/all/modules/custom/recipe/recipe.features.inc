<?php
/**
 * @file
 * recipe.features.inc
 */

/**
 * Implements hook_node_info().
 */
function recipe_node_info() {
  $items = array(
    'recipe' => array(
      'name' => t('Recipe'),
      'base' => 'node_content',
      'description' => t('This is how you make food.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => t('Enter all the steps and materials needed to make your dish delicious.'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
