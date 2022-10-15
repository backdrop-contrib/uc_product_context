Ubercart Product Context
============================

The Ubercart Product Context module modifies various pages of Ubercart depending on context of the displayed product. For example, it selectively removes the "add to cart" button and/or "buy it now" buttons and/or replaces it/them with a message based on whether a product is either (a) previously purchased, or (b) already in the cart. The choice is made for each product type.

It can be desirable to let a customer know that they previously bought a product, if, for example, they're looking for something they bought once before.

It can also be desirable to remove the "add to cart" button if a person never needs to buy more than one of something, for example, a file download product that offers unlimited downloads.

The module also supports a hook whereby other modules can further alter the product context. See `uc_product_context.api.php` for details.

Installation
------------

Install this module using [the official Backdrop CMS instructions](https://backdropcms.org/guide/modules).

Visit the configuration page under Administration > Store > Configuration >
  Product context (admin/store/settings/prev-purchase) and enter the required information.

Issues
------

Bugs and feature requests should be reported in [the Issue Queue](https://github.com/backdrop-contrib/product_context/issues).

Current Maintainers
-------------------

- [Robert J. Lang](https://github.com/bugfolder)

Credits
-------

- Ported to Backdrop CMS by [Robert J. Lang](https://github.com/bugfolder).
- Originally written for Drupal by [Robert J. Lang](https://github.com/bugfolder) for OrigamiUSA.

License
-------

This project is GPL v2 software.
See the LICENSE.txt file in this directory for complete text.
