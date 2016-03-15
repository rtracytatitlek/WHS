<?php
/**
 * @file
 * administrative.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function administrative_user_default_roles() {
  $roles = array();

  // Exported role: Customer.
  $roles['Customer'] = array(
    'name' => 'Customer',
    'weight' => 4,
    '__pk' => 'f65da333-d73f-43e5-88c2-f65804be7061',
    '__unique_name' => 'wøw\'	Ö­ŞkÄû™',
  );

  // Exported role: WHS Employee.
  $roles['WHS Employee'] = array(
    'name' => 'WHS Employee',
    'weight' => 3,
    '__pk' => '083899bf-25d4-4102-90f4-cc09d530ed24',
    '__unique_name' => '¥×âîÇº¶Pmç¨èmš5›',
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
    '__pk' => '762bb83e-b44e-429c-8557-5d5f17f188b2',
    '__unique_name' => '¤ñÕ­ñi»8©\\',
  );

  return $roles;
}
