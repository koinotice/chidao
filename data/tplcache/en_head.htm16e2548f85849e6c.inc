<?php
$z[0]=Array("global","",389,415);
$z[0][4]['name']="cfg_webname";
$z[1]=Array("field","(@me==\"\")? @me=\" class='current' \":@me=\"\";",699,791);
$z[1][4]['name']="typeid";
$z[1][4]['runphp']="yes";
$z[2]=Array("channelartlist","\r\n                <li class=\"{dede:field.currentstyle/}\"><a class=\"first-level\" href=\"{dede:field name='typeurl'/}\" target=\"\"><strong>{dede:field name='typename'/}</strong></a><i></i>\r\n                  <ul class=\"\">\r\n                    {dede:sql sql='Select * from `dede_arctype` where reid=~id~ ORDER BY id'}\r\n                    <li class=\"\"><a class=\"\" href=\"[field:typedir function=\"cn_substr(@me,200,9) \" /]\" target=\"\"><strong>[field:typename/]</strong></a></li>\r\n                    {/dede:sql}\r\n                  </ul>\r\n                </li>\r\n                ",892,1558);
$z[2][4]['typeid']="24,28,32,33,37,39,44,0";
$z[2][4]['currentstyle']="current";
$z[3]=Array("global","",2568,2594);
$z[3][4]['name']="cfg_webname";
$z[4]=Array("channelartlist","\r\n              <li><a href=\"javascript:;\"><span>{dede:field name='typename'/}</span><i class=\"touch-arrow-down\"></i></a>\r\n                <ul>\r\n                  {dede:channel type='son' noself='yes' }\r\n                  <li><a href=\"[field:typelink/]\"><span>[field:typename/]</span></a></li>\r\n                  {/dede:channel}\r\n                </ul>\r\n              </li>\r\n              ",3799,4247);
$z[4][4]['typeid']="24,28,0";
$z[5]=Array("channelartlist","\r\n              <li><a href=\"{dede:field name='typeurl'/}\"><span>{dede:field name='typename'/}</span></a></li>\r\n              ",4263,4447);
$z[5][4]['typeid']="32,0";
$z[6]=Array("channelartlist","\r\n              <li><a href=\"javascript:;\"><span>{dede:field name='typename'/}</span><i class=\"touch-arrow-down\"></i></a>\r\n                <ul>\r\n                  {dede:channel type='son' noself='yes' }\r\n                  <li><a href=\"[field:typelink/]\"><span>[field:typename/]</span></a></li>\r\n                  {/dede:channel}\r\n                </ul>\r\n              </li>\r\n              ",4463,4914);
$z[6][4]['typeid']="33,37,39,0";
$z[7]=Array("channelartlist","\r\n              <li><a href=\"{dede:field name='typeurl'/}\"><span>{dede:field name='typename'/}</span></a></li>\r\n              ",4931,5115);
$z[7][4]['typeid']="44,0";

?>