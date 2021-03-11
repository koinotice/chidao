<?php
$z[0]=Array("field","",335,354);
$z[0][4]['name']="title";
$z[1]=Array("global","",355,381);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",422,451);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",491,549);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("include","",3310,3345);
$z[4][4]['filename']="head.htm";
$z[5]=Array("arclist","\r\n                <div class=\"carousel-item\">\r\n                  <div class=\"carousel-img\"><a href=\"javascript:;\" target=\"\"><img src=\"[field:picname/]\" height=\"500\" alt=\"[field:title/]\" /></a></div>\r\n                </div>\r\n                ",3888,4180);
$z[5][4]['typeid']="46";
$z[5][4]['row']="4";
$z[6]=Array("field","",5287,5316);
$z[6][4]['name']="position";
$z[7]=Array("type","<h2>[field:typename /]</h2>",5442,5492);
$z[8]=Array("list","\r\n                      [field:global runphp='yes' name=autoindex]\r\n                      \$a=\"\r\n                      <li class='col-3-1 last not-animated' data-animate='fadeInUp'>\";\r\n                        \$b=\"\r\n                      \r\n                      <li class='col-3-1 not-animated' data-animate='fadeInUp'>\";\r\n                        if ((@me%3)==0 && @me!=24)  @me=\$a;\r\n                        else  @me=\$b;\r\n                        [/field:global]\r\n                        <div class=\"product-item\">\r\n                          <div class=\"portfolio-img\"><a href=\"[field:arcurl/]\" target=\"_blank\"><img src=\"[field:picname/]\" alt=\"[field:title/]\" /></a></div>\r\n                          <div class=\"portfolio-title\">\r\n                            <h2><a href=\"[field:arcurl/]\" target=\"_blank\">[field:title/]</a></h2>\r\n                          </div>\r\n                        </div>\r\n                      </li>\r\n                    ",6076,7055);
$z[8][4]['pagesize']="9";
$z[9]=Array("pagelist","",7253,7319);
$z[9][4]['listitem']="index,end,pre,next,pageno";
$z[9][4]['listsize']="2";
$z[10]=Array("include","",7565,7600);
$z[10][4]['filename']="left.htm";
$z[11]=Array("include","",7713,7750);
$z[11][4]['filename']="footer.htm";

?>