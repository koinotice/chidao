<?php
$z[0]=Array("global","",385,411);
$z[0][4]['name']="cfg_webname";
$z[1]=Array("field","(@me==\"\")? @me=\" class='current' \":@me=\"\";",689,781);
$z[1][4]['name']="typeid";
$z[1][4]['runphp']="yes";
$z[2]=Array("channelartlist","\n                <li class=\"{dede:field.currentstyle/}\"><a class=\"first-level\" href=\"{dede:field name='typeurl'/}\" target=\"\"><strong>{dede:field name='typename'/}</strong></a><i></i>\n                  <ul class=\"\">\n                    {dede:sql sql='Select * from `dede_arctype` where reid=~id~ ORDER BY id'}\n                    <li class=\"\"><a class=\"\" href=\"[field:typedir function=\"cn_substr(@me,200,9) \" /]\" target=\"\"><strong>[field:typename/]</strong></a></li>\n                    {/dede:sql}\n                  </ul>\n                </li>\n                ",881,1539);
$z[2][4]['typeid']="24,28,32,33,37,39,44,0";
$z[2][4]['currentstyle']="current";
$z[3]=Array("global","",2525,2551);
$z[3][4]['name']="cfg_webname";
$z[4]=Array("channelartlist","\n              <li><a href=\"javascript:;\"><span>{dede:field name='typename'/}</span><i class=\"touch-arrow-down\"></i></a>\n                <ul>\n                  {dede:channel type='son' noself='yes' }\n                  <li><a href=\"[field:typelink/]\"><span>[field:typename/]</span></a></li>\n                  {/dede:channel}\n                </ul>\n              </li>\n              ",3733,4173);
$z[4][4]['typeid']="24,28,0";
$z[5]=Array("channelartlist","\n              <li><a href=\"{dede:field name='typeurl'/}\"><span>{dede:field name='typename'/}</span></a></li>\n              ",4188,4370);
$z[5][4]['typeid']="32,0";
$z[6]=Array("channelartlist","\n              <li><a href=\"javascript:;\"><span>{dede:field name='typename'/}</span><i class=\"touch-arrow-down\"></i></a>\n                <ul>\n                  {dede:channel type='son' noself='yes' }\n                  <li><a href=\"[field:typelink/]\"><span>[field:typename/]</span></a></li>\n                  {/dede:channel}\n                </ul>\n              </li>\n              ",4385,4828);
$z[6][4]['typeid']="33,37,39,0";
$z[7]=Array("channelartlist","\n              <li><a href=\"{dede:field name='typeurl'/}\"><span>{dede:field name='typename'/}</span></a></li>\n              ",4844,5026);
$z[7][4]['typeid']="44,0";

?>