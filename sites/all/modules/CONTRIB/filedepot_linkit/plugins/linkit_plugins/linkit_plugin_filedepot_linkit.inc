<?php

/**
 * @file
 * Linkit filedepot plugin.
 */

$plugin = array(
  'ui_title' => t("Filedepot Files"),
  'ui_description' => t('Extend Linkit to support fildepot.'),
  'entity_type' => 'file',
  'handler' => array(
      'class' => 'LinkitPluginFiledepot',
      'file' => 'linkit_plugin_filedepot.class.php',
  ),
);


