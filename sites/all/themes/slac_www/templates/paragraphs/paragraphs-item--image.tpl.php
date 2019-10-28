<?php

/**
 * @file
 * Paragraphs item simple template.
 */
?>
<?php
  hide($content);

  $width_field = '';
  if (!empty($content['field_width'])) {
    $width_field = ' ' . trim(strip_tags(render($content['field_width'])));
  }
?>
<div class="paragraph-item paragraph-type--image<?php print $width_field; ?>">
  <div>
    <div>
      <div><?php print render($content['field_pimage']); ?></div>
    </div>
  </div>
</div>
