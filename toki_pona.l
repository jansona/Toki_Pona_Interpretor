%{
#include "toki_pona.tab.h"
#include <stdio.h>
#include <stdlib.h>
%}
blank [" "\n\t]
whitespace {blank}+
%%
{whitespace} {;}
mi {return MI;}
sina {return SINA;}
ante {return ANTE;}
e {return E;}
olin {return OLIN;}
%%

