<?php
/**
 * @file
 * responsive_blog_profile_feature.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function responsive_blog_profile_feature_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Books',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '117312cb-979d-415f-b007-8e4b57b3df4a',
    'vocabulary_machine_name' => 'blog_category',
  );
  $terms[] = array(
    'name' => 'drinks',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '1c79fafc-96a6-41c8-8e85-2b67fc967e1d',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'Travel',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '3e34b4bd-8ba3-4ca2-bb29-7577ddd6fc98',
    'vocabulary_machine_name' => 'blog_category',
  );
  $terms[] = array(
    'name' => 'woman',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '40d2e0ae-c61e-4e33-a365-e07b67a7da5b',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'coctails',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '42101de9-5037-4ad8-973a-d6960db78eaa',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'body',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '5032636d-1447-4328-8bd6-401196b1cd1a',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'smart',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '67a3907c-09ab-4cb0-b2ab-47453de441be',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'bridge',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '7c206d6a-8c39-48d4-ba36-3b35e106cf0d',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'Places',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '8e75a841-0762-45b2-bc63-b9390503e117',
    'vocabulary_machine_name' => 'blog_category',
  );
  $terms[] = array(
    'name' => 'walk',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '9f045ebc-0656-4c8d-985d-e799d60e2298',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'Food',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'b1bbd9f0-c96b-4552-b17e-0c33e663a68d',
    'vocabulary_machine_name' => 'blog_category',
  );
  $terms[] = array(
    'name' => 'Beauty',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'c3cfaacb-68fa-474c-a70a-3ca8fb668247',
    'vocabulary_machine_name' => 'blog_category',
  );
  $terms[] = array(
    'name' => 'health',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'c471852f-4ed1-42a4-a317-4b22715d1e6b',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'Fashion',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'cd6025c9-8376-4899-b666-ad7900bd6e82',
    'vocabulary_machine_name' => 'blog_category',
  );
  $terms[] = array(
    'name' => 'adventure',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'd4d17980-a171-4464-9135-e71fcad8bc99',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'reading',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'e0c16799-bbb3-4f06-8c9e-e30e598b0686',
    'vocabulary_machine_name' => 'tags',
  );
  return $terms;
}
