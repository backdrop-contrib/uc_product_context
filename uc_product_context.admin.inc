<?php
/**
 * @file
 * Administration pages for Ubercart Product Context module.
 */

/**
 * Menu callback; presents the settings page.
 */
function uc_product_context_settings_form() {
  $form['#config'] = 'uc_product_context.settings';
  $config = config('uc_product_context.settings');
  $types = uc_product_type_names();

  $form['help'] = array(
    '#markup' => t('Set the products types you would like to modify product, cart, and checkout forms for.'),
    '#prefix' => '<p>',
    '#suffix' => '</p>',
  );

  // Previously purchased

  $form['display'] = array(
    '#type' => 'fieldset',
    '#title' => 'If purchased',
    '#description' => t('Modifications based on whether customer has previously purchased the product.'),
  );

  $form['display']['uc_product_context_display_if_purchased'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Display if previously purchased'),
    '#description' => t('Display whether customer previously purchased products of these types on forms.'),
    '#multiple' => TRUE,
    '#options' => $types,
    '#default_value' => $config->get('uc_product_context_display_if_purchased'),
  );

  $form['display']['uc_product_context_display_if_purchased_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Label to display if previously purchased'),
    '#description' => t('Label to display in listings if customer previously purchased products of these types.'),
    '#default_value' => $config->get('uc_product_context_display_if_purchased_label'),
  );

  $form['display']['uc_product_context_display_if_purchased_message'] = array(
    '#type' => 'textarea',
    '#title' => t('Message to display if previously purchased'),
    '#description' => t('Message to display on product page if customer previously purchased products of these types.'),
    '#default_value' => $config->get('uc_product_context_display_if_purchased_message'),
  );

  $form['display']['uc_product_context_disable_add_if_purchased'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Disable "add to cart" if purchased'),
    '#description' => t('Disable "add to cart" button if customer previously purchased products of these types on forms.'),
    '#multiple' => TRUE,
    '#options' => $types,
    '#default_value' => $config->get('uc_product_context_disable_add_if_purchased'),
  );

  // Currently in cart

  $form['in_cart'] = array(
    '#type' => 'fieldset',
    '#title' => 'If in cart',
    '#description' => t('Modifications based on whether the product is currently in the cart.'),
  );

  $form['in_cart']['uc_product_context_display_if_in_cart'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Display if in cart'),
    '#description' => t('Display whether customer currently has this product in their cart.'),
    '#multiple' => TRUE,
    '#options' => $types,
    '#default_value' => $config->get('uc_product_context_display_if_in_cart'),
  );

  $form['in_cart']['uc_product_context_display_if_in_cart_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Label to display if product is in cart'),
    '#description' => t('Label to display in listings if product is already in the cart.'),
    '#default_value' => $config->get('uc_product_context_display_if_in_cart_label'),
  );

  $form['in_cart']['uc_product_context_display_if_in_cart_message'] = array(
    '#type' => 'textarea',
    '#title' => t('Message to display if product is in cart'),
    '#description' => t('Message to display on product page if product is already in the cart.'),
    '#default_value' => $config->get('uc_product_context_display_if_in_cart_message'),
  );

  $form['in_cart']['uc_product_context_disable_add_if_in_cart'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Disable "add to cart" if in cart'),
    '#description' => t('Disable "add to cart" button if customer currently has this product in their cart.'),
    '#multiple' => TRUE,
    '#options' => $types,
    '#default_value' => $config->get('uc_product_context_disable_add_if_in_cart'),
  );

  $form['in_cart']['uc_product_context_disable_qty_if_in_cart'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Disable "qty" textfield if in cart'),
    '#description' => t('Disable "qty" textfield if customer currently has this product in their cart.'),
    '#multiple' => TRUE,
    '#options' => $types,
    '#default_value' => $config->get('uc_product_context_disable_qty_if_in_cart'),
  );

  return system_settings_form($form);
}
