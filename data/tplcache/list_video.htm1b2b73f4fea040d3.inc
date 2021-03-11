<?php
$z[0]=Array("field","",322,341);
$z[0][4]['name']="title";
$z[1]=Array("global","",342,368);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",409,438);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",478,536);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("include","",3297,3332);
$z[4][4]['filename']="head.htm";
$z[5]=Array("include","",3623,3657);
$z[5][4]['filename']="top.htm";
$z[6]=Array("list","\r\n                      [field:global runphp='yes' name=autoindex]\r\n                      \$a=\"\r\n                      <li class='col-4-1 not-animated last' data-animate='fadeInUp'>\";\r\n                        \$b=\"\r\n                      \r\n                      <li class='col-4-1 not-animated' data-animate='fadeInUp'>\";\r\n                        if ((@me%3)==0 && @me!=24)  @me=\$a;\r\n                        else  @me=\$b;\r\n                        [/field:global]\r\n                        <div class=\"portfolio-img\"><a href=\"[field:arcurl/]\" target=\"_blank\"><img src=\"[field:picname/]\" alt=\"\" /></a></div>\r\n                        <div class=\"portfolio-title\">\r\n                          <h2><a href=\"[field:arcurl/]\" target=\"_blank\">[field:title/]</a></h2>\r\n                        </div>\r\n                      </li>\r\n                     ",4262,5136);
$z[6][4]['pagesize']="8";
$z[7]=Array("pagelist","",5314,5380);
$z[7][4]['listitem']="index,end,pre,next,pageno";
$z[7][4]['listsize']="2";
$z[8]=Array("include","",5668,5705);
$z[8][4]['filename']="footer.htm";

?>