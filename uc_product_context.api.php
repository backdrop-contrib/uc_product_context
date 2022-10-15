<?php
/**
 * @file
 * Hooks provided by the Ubercart Product Context module.
 */

/**
 * @addtogroup hooks
 * @{
 */

/**
 * Alter a context for modifying display and purchase pages for a product.
 *
 * This hook is used by the (Ubercart contrib) Product Context module to alter
 * various cart forms and buttons when a user already owns a product or for
 * other reasons.
 *
 * @param $context array() - a list of edits to the product.
 * @param $nid integer - the node ID of the product in question.
 *
 * @see _uc_product_context_get_context
 */
function hook_uc_product_context_alter(&$context, $nid) {
  // Sample edits to deny all purchases
  $context['add_to_buy_it_now'] = array(
    '#markup' => t('purchase denied'),
  );
  $context['disable_buy_it_now'] = TRUE;
  $context['add_to_add_to_cart'] = array(
    '#markup' => t('purchase denied'),
  );
  $context['disable_add_to_cart'] = TRUE;
  $context['disable_qty'] = TRUE;
  $context['add_to_cart_desc'] = array(
    '#markup' => ' ' . t('purchase denied'),
  );
}

/**
 * @} End of "addtogroup hooks".
 */
