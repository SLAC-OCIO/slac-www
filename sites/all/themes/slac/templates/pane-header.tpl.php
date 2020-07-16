<?php
/**
 * @file
 *
 * Theme implementation to display the header block on a Drupal page.
 *
 * This utilizes the following variables thata re normally found in
 * page.tpl.php:
 * - $logo
 * - $front_page
 * - $site_name
 * - $front_page
 * - $site_slogan
 * - $search_box
 *
 * Additional items can be added via theme_preprocess_pane_header(). See
 * template_preprocess_pane_header() for examples.
 */
 ?>
<div id="header">
  <div class="section clearfix row page-basic header inside">
    <div class="col-md-9">
    <div id="logo-title">

      <?php if (!empty($logo)): ?>
        <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" id="logo">
          <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
        </a>
      <?php endif; ?>

      <div id="name-and-slogan">
        <?php if ($site_name): ?>
          <?php if ($title): ?>
            <div id="site-name"><strong>
              <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><span><?php print $site_name; ?></span></a>
            </strong></div>
          <?php else: /* Use h1 when the content title is empty */ ?>
            <h1 id="site-name">
              <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><span><?php print $site_name; ?></span></a>
            </h1>
          <?php endif; ?>
        <?php endif; ?>

        <?php if (!empty($site_slogan)): ?>
          <div id="site-slogan"><?php print $site_slogan; ?></div>
        <?php endif; ?>
      </div> <!-- /name-and-slogan -->
    </div> <!-- /logo-title -->
    <div class="header-link">
      <?php if ($employee_portal_url && $research_resources_url): ?>
        <?php print $employee_portal_url . ' | ' . $research_resources_url; ?>
      <?php elseif ($employee_portal_url): ?>
        <?php print $employee_portal_url; ?>
      <?php elseif ($research_resources_url): ?>
        <?php print $research_resources_url; ?>
      <?php endif; ?>
    </div>
  </div>
    <div class="col-md-3">
    <?php if (!empty($search_box)): ?>
      <div id="search-box"><?php print $search_box; ?></div>
    <?php endif; ?>
  </div>
  </div> <!-- /section -->
</div> <!-- /header -->
