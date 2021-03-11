<?php
$z[0]=Array("global","",385,411);
$z[0][4]['name']="cfg_webname";
$z[1]=Array("field","(@me==\"\")? @me=\" class='current' \":@me=\"\";",682,774);
$z[1][4]['name']="typeid";
$z[1][4]['runphp']="yes";
$z[2]=Array("channelartlist","\n                <li class=\"{dede:field.currentstyle/}\"><a class=\"first-level\" href=\"{dede:field name='typeurl'/}\" target=\"\"><strong>{dede:field name='typename'/}</strong></a><i></i>\n                  <ul class=\"\">\n                    {dede:sql sql='Select * from `dede_arctype` where reid=~id~ ORDER BY id'}\n                    <li class=\"\"><a class=\"\" href=\"[field:typedir function=\"cn_substr(@me,200,9) \" /]\" target=\"\"><strong>[field:typename/]</strong></a></li>\n                    {/dede:sql}\n                  </ul>\n                </li>\n                ",875,1531);
$z[2][4]['typeid']="2,6,10,11,15,17,22,0";
$z[2][4]['currentstyle']="current";
$z[3]=Array("global","",2517,2543);
$z[3][4]['name']="cfg_webname";
$z[4]=Array("channelartlist","\n              <li><a href=\"javascript:;\"><span>{dede:field name='typename'/}</span><i class=\"touch-arrow-down\"></i></a>\n                <ul>\n                  {dede:channel type='son' noself='yes' }\n                  <li><a href=\"[field:typelink/]\"><span>[field:typename/]</span></a></li>\n                  {/dede:channel}\n                </ul>\n              </li>\n              ",3727,4165);
$z[4][4]['typeid']="2,6,0";
$z[5]=Array("channelartlist","\n              <li><a href=\"{dede:field name='typeurl'/}\"><span>{dede:field name='typename'/}</span></a></li>\n              ",4180,4362);
$z[5][4]['typeid']="10,0";
$z[6]=Array("channelartlist","\n              <li><a href=\"javascript:;\"><span>{dede:field name='typename'/}</span><i class=\"touch-arrow-down\"></i></a>\n                <ul>\n                  {dede:channel type='son' noself='yes' }\n                  <li><a href=\"[field:typelink/]\"><span>[field:typename/]</span></a></li>\n                  {/dede:channel}\n                </ul>\n              </li>\n              ",4377,4820);
$z[6][4]['typeid']="11,15,17,0";
$z[7]=Array("channelartlist","\n              <li><a href=\"{dede:field name='typeurl'/}\"><span>{dede:field name='typename'/}</span></a></li>\n              ",4836,5018);
$z[7][4]['typeid']="22,0";

?>