<?php
/**
 * @file
 * Template for the 1 column panel layout.
 *
 * This template provides a three column 25%-50%-25% panel display layout.
 *
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:
 *   - $content['left']: Content in the left column.
 *   - $content['middle']: Content in the middle column.
 *   - $content['right']: Content in the right column.
 */
?>
<div class="panel-display two-col-leftsidebar clearfix" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <div class="panel-panel hero-image">
     <?php if ($content['header']): ?>
        <div class="hero-image"><?php print $content['header']; ?></div>
      <?php endif ?>
  </div>
  <div class="main-content">
    <div class="panel-panel general-left">
       <?php if ($content['left']): ?>
          <div class="inside"><?php print $content['left']; ?></div>
        <?php endif ?>
    </div>
    <div class="panel-panel general-right">
       <?php if ($content['right']): ?>
          <div class="inside"><?php print $content['right']; ?></div>
        <?php endif ?>
    </div>
    </div>
</div>
