/*
Copyright (c) 2003-2011, CKSource - Frederico Knabben. All rights reserved.
For licensing, see LICENSE.html or http://ckeditor.com/license
*/

/*
 * This file is used/requested by the 'Styles' button.
 * 'Styles' button is not enabled by default in DrupalFull and DrupalFiltered toolbars.
 */

CKEDITOR.addStylesSet( 'drupal',
[
	{ name : 'Accordion - Pealkiri'	, element : 'h3', attributes : { 'class' : 'accordion-title' } },
  { name : 'Table: filter text'	, element : 'span', attributes : { 'class' : 'table-filter' } },
  { name : 'Table: filter select'	, element : 'span', attributes : { 'class' : 'table-filter table-filter-select' } },
  { name : 'Table: sort' , element : 'span', attributes : { 'class' : 'table-sort' } },
  { name : 'Table: group'	, element : 'span', attributes : { 'class' : 'table-group' } },
  { name : 'Table: paginate' , element : 'span', attributes : { 'class' : 'table-paginate' } },
  { name : 'Table: footer'	, element : 'span', attributes : { 'class' : 'table-footer' } },
	{ name : 'Oranz'	, element : 'span', styles : { 'color' : '#FF9901' } },
	{ name : 'Roheline'	, element : 'span', styles : { 'color' : '#C3E346' } },
	{ name : 'Sinine'	, element : 'span', styles : { 'color' : '#0CF' } }
]);
