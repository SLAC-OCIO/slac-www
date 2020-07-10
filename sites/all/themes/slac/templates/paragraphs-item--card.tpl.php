<?php

/**
 * @file
 * Paragraphs item simple bootstrap template.
 */

$icon = '';
$body = '';
$image = '';
$title = '';

if (!empty($content['field_icon'])) {
    $icon = render($content['field_icon']);
}
if (!empty($content['field_card_body'])) {
    $body = render($content['field_card_body']);
}
if (!empty($content['field_card_image'])) {
    $image = render($content['field_card_image']);
}
if (!empty($content['field_card_title'])) {
    $title = render($content['field_card_title']);
}

?>

<div class="card">
    <div><?php print $image; ?>></div>
    <div class="card-body">
        <h5 class="card-title"><?php print $title; ?></h5>
        <div class="card-text">
            <?php print $body; ?>
        </div>
    </div>
</div>
