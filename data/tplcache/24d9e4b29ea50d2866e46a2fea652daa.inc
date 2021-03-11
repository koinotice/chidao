<li class="{dede:field.currentstyle/}"><a class="first-level" href="{dede:field name='typeurl'/}" target=""><strong>{dede:field name='typename'/}</strong></a><i></i>
                  <ul class="">
                    {dede:sql sql='Select * from `dede_arctype` where reid=~id~ ORDER BY id'}
                    <li class=""><a class="" href="[field:typedir function="cn_substr(@me,200,9) " /]" target=""><strong>[field:typename/]</strong></a></li>
                    {/dede:sql}
                  </ul>
                </li>