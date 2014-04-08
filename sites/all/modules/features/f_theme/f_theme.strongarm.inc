<?php
/**
 * @file
 * f_theme.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function f_theme_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_responsive_blog_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'color_scheme' => 'white',
    'sidebar_layout' => 'right_sidebar',
    'sidebar_width' => 'narrow_sidebar',
    'image_logo' => 1,
    'breadcrumbs' => 1,
    'slideshow_display' => 0,
    'slide1_desc' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor elit, sed in Lorem do eiusmod tempor ...',
    'slide1_url' => 'node/1',
    'slide2_desc' => 'Eiusmod tempor incididuntLorem ipsum dolor sit amet, consectetur adipisicing elit reprehenderit in Lorem ipsum dolor ...',
    'slide2_url' => 'node/2',
    'slide3_desc' => 'Duis aute irure dolor in reprehenderit inLorem ipsum dolor sit amet, consectetur sit amet, consectetur adipisicing fers ...',
    'slide3_url' => 'node/3',
    'socialicon_display' => 1,
    'twitter_url' => 'http://www.twitter.com/saranquardz',
    'facebook_url' => 'http://www.facebook.com/devsaran.drupal',
    'google_plus_url' => 'https://plus.google.com/u/0/109064032428497406718',
    'pinterest_url' => 'http://pinterest.com',
  );
  $export['theme_responsive_blog_settings'] = $strongarm;

  return $export;
}
