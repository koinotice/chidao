<?php
$z[0]=Array("field","",329,348);
$z[0][4]['name']="title";
$z[1]=Array("global","",349,375);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",415,444);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",483,541);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("include","",3270,3305);
$z[4][4]['filename']="head.htm";
$z[5]=Array("arclist","\n                <div class=\"carousel-item\">\n                  <div class=\"carousel-img\"><a href=\"javascript:;\" target=\"\"><img src=\"[field:picname/]\" height=\"500\" alt=\"[field:title/]\" /></a></div>\n                </div>\n                ",3841,4129);
$z[5][4]['typeid']="46";
$z[5][4]['row']="4";
$z[6]=Array("field","",5212,5241);
$z[6][4]['name']="position";
$z[7]=Array("type","<h2>[field:typename /]</h2>",5364,5414);
$z[8]=Array("list","\n                      [field:global runphp='yes' name=autoindex]\n                      \$a=\"\n                      <li class='col-3-1 last not-animated' data-animate='fadeInUp'>\";\n                        \$b=\"\n                      \n                      <li class='col-3-1 not-animated' data-animate='fadeInUp'>\";\n                        if ((@me%3)==0 && @me!=24)  @me=\$a;\n                        else  @me=\$b;\n                        [/field:global]\n                        <div class=\"product-item\">\n                          <div class=\"portfolio-img\"><a href=\"[field:arcurl/]\" target=\"_blank\"><img src=\"[field:picname/]\" alt=\"[field:title/]\" /></a></div>\n                          <div class=\"portfolio-title\">\n                            <h2><a href=\"[field:arcurl/]\" target=\"_blank\">[field:title/]</a></h2>\n                          </div>\n                        </div>\n                      </li>\n                    ",5988,6950);
$z[8][4]['pagesize']="9";
$z[9]=Array("pagelist","",7142,7208);
$z[9][4]['listitem']="index,end,pre,next,pageno";
$z[9][4]['listsize']="2";
$z[10]=Array("include","",7444,7479);
$z[10][4]['filename']="left.htm";
$z[11]=Array("include","",7589,7626);
$z[11][4]['filename']="footer.htm";

?>