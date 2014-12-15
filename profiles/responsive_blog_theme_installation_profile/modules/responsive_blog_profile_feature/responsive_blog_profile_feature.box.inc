<?php
/**
 * @file
 * responsive_blog_profile_feature.box.inc
 */

/**
 * Implements hook_default_box().
 */
function responsive_blog_profile_feature_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'about_us';
  $box->plugin_key = 'simple';
  $box->title = 'About Us';
  $box->description = 'About us sidebar block';
  $box->options = array(
    'body' => array(
      'value' => '<div><img src="http://localhost/blog-theme/sites/all/themes/blog_theme/images/about_img.png" style="float:left; margin-left:5px; margin-right:5px" /></div>

<div>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Phasellus sit amet lorem vel tortor rutrum malesuada in id mi. Aliquam eu orci neque. Integer a lorem tellus. Sed ut augue ligula. Etiam condimentum arcu et mauris dictum sit amet aliquet leo sodales. Vivamus a lorem vel urna tincidunt vulputate et at ipsum. Ut quis nisi ut tellus lacinia gravida non sit amet est.</div>
',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['about_us'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'copyright';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Copyright footer block';
  $box->options = array(
    'body' => array(
      'value' => 'ADCI Solutions Theme. All rights reserved. 2013',
      'format' => 'full_html',
    ),
  );
  $export['copyright'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'site_slogan';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Site slogan';
  $box->options = array(
    'body' => array(
      'value' => 'Home for your inspiration powered by drupal',
      'format' => 'filtered_html',
    ),
    'additional_classes' => 'site-slogan',
  );
  $export['site_slogan'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'social_icons';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Social blocks footer';
  $box->options = array(
    'body' => array(
      'value' => '<span><a class="social fb" href="#">fb</a></span>
<span><a class="social tw" href="#">tw</a></span>
<span><a class="social lin" href="#">lin</a></span>
<span><a class="social gplus" href="#">gplus</a></span>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['social_icons'] = $box;

  return $export;
}
