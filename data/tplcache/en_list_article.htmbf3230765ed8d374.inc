<?php
$z[0]=Array("field","",316,335);
$z[0][4]['name']="title";
$z[1]=Array("global","",336,362);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",402,431);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",470,528);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("include","",3257,3295);
$z[4][4]['filename']="en_head.htm";
$z[5]=Array("include","",3582,3616);
$z[5][4]['filename']="top.htm";
$z[6]=Array("list","\n                      [field:global runphp='yes' name=autoindex]\n                      \$a=\"\n                      <li class='col-4-1 not-animated last' data-animate='fadeInUp'>\";\n                        \$b=\"\n                      \n                      <li class='col-4-1 not-animated' data-animate='fadeInUp'>\";\n                        if ((@me%3)==0 && @me!=24)  @me=\$a;\n                        else  @me=\$b;\n                        [/field:global]\n                        <div class=\"portfolio-item\">\n                          <div class=\"portfolio-img\"><a href=\"[field:arcurl/]\" target=\"_blank\"><img src=\"[field:picname/]\" alt=\"\"/></a></div>\n                          <div class=\"portfolio-title\">\n                            <h2><a href=\"[field:arcurl/]\" target=\"_blank\">[field:title/]</a></h2>\n                          </div>\n                          <div class=\"portfolio-summary\">\n                            <div class=\"qhd-content\">\n                              <p>[field:description function=\"cn_substr(@me,320)\"/]...</p>\n                            </div>\n                          </div>\n                          <em></em></div>\n                      </li>\n                     ",4248,5480);
$z[6][4]['pagesize']="8";
$z[7]=Array("pagelist","",5653,5719);
$z[7][4]['listitem']="index,end,pre,next,pageno";
$z[7][4]['listsize']="2";
$z[8]=Array("include","",5998,6038);
$z[8][4]['filename']="en_footer.htm";

?>