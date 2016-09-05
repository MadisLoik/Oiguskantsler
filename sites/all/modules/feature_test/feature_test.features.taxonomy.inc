<?php
/**
 * @file
 * feature_test.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function feature_test_taxonomy_default_vocabularies() {
  return array(
    'dokumendi_liik' => array(
      'name' => 'Dokumendi liik (Põhiseaduslikkuse järelvalve)',
      'machine_name' => 'dokumendi_liik',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '-9',
      'language' => 'und',
      'i18n_mode' => '1',
    ),
    'dokumendi_liik_muud_lesanded_' => array(
      'name' => 'Dokumendi liik (Muud ülesanded)',
      'machine_name' => 'dokumendi_liik_muud_lesanded_',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '-7',
      'language' => 'und',
      'i18n_mode' => '1',
    ),
    'dokumendi_liik_pohioigused' => array(
      'name' => 'Dokumendi liik (Põhiõiguste kaitse)',
      'machine_name' => 'dokumendi_liik_pohioigused',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '-8',
      'language' => 'und',
      'i18n_mode' => '4',
    ),
    'menetluse_liik' => array(
      'name' => 'Menetluse liik',
      'machine_name' => 'menetluse_liik',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '-6',
      'language' => 'und',
      'i18n_mode' => '1',
    ),
    'sihtgrupid' => array(
      'name' => 'Sihtgrupid',
      'machine_name' => 'sihtgrupid',
      'description' => 'Lasteombudsmani lehe sihtgrupid',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '-5',
      'language' => 'und',
      'i18n_mode' => '1',
    ),
    'tags' => array(
      'name' => 'Sildid',
      'machine_name' => 'tags',
      'description' => 'Sarnaseid teemasid käsitlevate artiklite grupeerimiseks kasuta märksõnu.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '-4',
      'language' => 'und',
      'i18n_mode' => '1',
    ),
    'valitsemisala' => array(
      'name' => 'Valitsemisala',
      'machine_name' => 'valitsemisala',
      'description' => '',
      'hierarchy' => '1',
      'module' => 'taxonomy',
      'weight' => '-3',
      'language' => 'und',
      'i18n_mode' => '1',
    ),
  );
}
