[field:global runphp='yes' name=autoindex]
                      $a="
                      <li class='col-4-1 not-animated last' data-animate='fadeInUp'>";
                        $b="
                      
                      <li class='col-4-1 not-animated' data-animate='fadeInUp'>";
                        if ((@me%3)==0 && @me!=24)  @me=$a;
                        else  @me=$b;
                        [/field:global]
                        <div class="portfolio-item">
                          <div class="portfolio-img"><a href="[field:arcurl/]" target="_blank"><img src="[field:picname/]" alt=""/></a></div>
                          <div class="portfolio-title">
                            <h2><a href="[field:arcurl/]" target="_blank">[field:title/]</a></h2>
                          </div>
                          <div class="portfolio-summary">
                            <div class="qhd-content">
                              <p>[field:description function="cn_substr(@me,320)"/]...</p>
                            </div>
                          </div>
                          <em></em></div>
                      </li>