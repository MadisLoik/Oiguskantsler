(function ($) {
  Drupal.behaviors.oigus_veebivorm = {
    attach: function (context, settings) {
      var count = 2;

      $('.webform-client-form input[type=file]').each(function() {
        $(this).attr('size', 30);
      });

      $('.oigus-veebivorm .actions').append('<a href="#" class="add-new-file">' + Drupal.t('Add new file')  + '</a></button>');

      $('.oigus-veebivorm .actions .add-new-file').live('click', function(e) {
        e.preventDefault();

        var elements = $(this).parents('.oigus-veebivorm').find('.elements');
        var name = elements.attr('data-name');
        var element_1 = elements.children('.element-1').children('input');

        elements.append($('<div class="element element-' + count  + ' clearfix"><input type="file" id="edit-oigus-' + name  + '-' + count  + '" name="files[oigus_' + name  + '_' + count  + ']" size="' + element_1.attr('size') + '" class="form-file"><a class="remove">X</a></div>'));

        if (elements.find('.element').length >= 10) {
          $(this).hide();

          return;
        }

        count++;

        $('.webform-client-form input[type=file]').each(function() {
          $(this).attr('size', 30);
        });

        if ($.browser.mozilla) {
          $('.oigus-veebivorm .element .remove').css('margin', '4px 0 0 -20px');
        }

        if ($.browser.msie) {
          $('.oigus-veebivorm .element .remove').css('margin', '3px 0 0 8px');
        }

        if ($.browser.opera) {
          $('.oigus-veebivorm .element .remove').css('margin', '3px 0 0 8px');
        }
      });

      $('.oigus-veebivorm .remove').live('click', function(e) {
        e.preventDefault();

        if ($(this).parents('.elements').find('.element').length <= 10) {
          $(this).parents('.oigus-veebivorm').find('.actions .add-new-file').show();
        }

        $(this).parent().remove();
      });
    }
  };
}(jQuery));
