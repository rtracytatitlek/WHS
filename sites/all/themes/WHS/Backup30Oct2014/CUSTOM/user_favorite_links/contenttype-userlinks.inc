$data = array(
  'bundles' => array(
    'user_favorite_links' => (object) array(
      'type' => 'user_favorite_links',
      'name' => 'User Favorite Links',
      'base' => 'node_content',
      'module' => 'node',
      'description' => 'Holds favorite links of end users',
      'help' => '',
      'has_title' => '1',
      'title_label' => 'Title',
      'custom' => '1',
      'modified' => '1',
      'locked' => '0',
      'disabled' => '0',
      'orig_type' => 'user_favorite_links',
      'disabled_changed' => FALSE,
      'bc_entity_type' => 'node',
    ),
  ),
  'fields' => array(
    'field_link' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'attributes' => array(
          'target' => 'default',
          'class' => '',
          'rel' => '',
        ),
        'url' => 0,
        'title' => 'optional',
        'title_value' => '',
        'title_maxlength' => 128,
        'enable_tokens' => 1,
        'display' => array(
          'url_cutoff' => 80,
        ),
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_link' => array(
                'url' => 'field_link_url',
                'title' => 'field_link_title',
                'attributes' => 'field_link_attributes',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_link' => array(
                'url' => 'field_link_url',
                'title' => 'field_link_title',
                'attributes' => 'field_link_attributes',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'field_name' => 'field_link',
      'type' => 'link_field',
      'module' => 'link',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'url' => array(
          'type' => 'varchar',
          'length' => 2048,
          'not null' => FALSE,
          'sortable' => TRUE,
        ),
        'title' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => FALSE,
          'sortable' => TRUE,
        ),
        'attributes' => array(
          'type' => 'text',
          'size' => 'medium',
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'resource_links',
          1 => 'events',
          2 => 'user_favorite_links',
        ),
      ),
    ),
    'field_order' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_order' => array(
                'value' => 'field_order_value',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_order' => array(
                'value' => 'field_order_value',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'field_name' => 'field_order',
      'type' => 'number_integer',
      'module' => 'number',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'int',
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'slide',
          1 => 'landing_page',
          2 => 'article',
          3 => 'user_favorite_links',
        ),
      ),
    ),
  ),
  'instances' => array(
    'field_link' => array(
      0 => array(
        'label' => 'Link',
        'widget' => array(
          'weight' => '32',
          'type' => 'link_field',
          'module' => 'link',
          'active' => 0,
          'settings' => array(),
        ),
        'settings' => array(
          'validate_url' => 0,
          'url' => 0,
          'title' => 'optional',
          'title_value' => '',
          'title_maxlength' => '128',
          'enable_tokens' => 1,
          'display' => array(
            'url_cutoff' => '80',
          ),
          'attributes' => array(
            'target' => 'default',
            'rel' => '',
            'class' => '',
            'configurable_title' => 0,
            'title' => '',
          ),
          'rel_remove' => 'default',
          'linkit' => array(
            'enable' => 0,
            'profile' => '',
            'button_text' => 'Search',
          ),
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'hidden',
            'type' => 'link_default',
            'weight' => '0',
            'settings' => array(),
            'module' => 'link',
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_link',
        'entity_type' => 'node',
        'bundle' => 'user_favorite_links',
        'deleted' => '0',
      ),
    ),
    'field_order' => array(
      0 => array(
        'label' => 'Position',
        'widget' => array(
          'weight' => '34',
          'type' => 'number',
          'module' => 'number',
          'active' => 0,
          'settings' => array(),
        ),
        'settings' => array(
          'min' => '',
          'max' => '',
          'prefix' => '',
          'suffix' => '',
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'hidden',
            'type' => 'hidden',
            'weight' => '1',
            'settings' => array(),
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_order',
        'entity_type' => 'node',
        'bundle' => 'user_favorite_links',
        'deleted' => '0',
      ),
    ),
  ),
);