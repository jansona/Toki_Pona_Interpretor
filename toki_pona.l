%{
#include "toki_pona.tab.h"
#include <stdio.h>
#include <stdlib.h>
%}
blank [" "\n\t]
whitespace {blank}+
mi mi
ante ante
sina sina
e e
olin olin
%%
{whitespace} {;}
{mi} {return MI;}
{sina} {return SINA;}
{ante} {return ANTE;}
{e} {return E;}
%%

