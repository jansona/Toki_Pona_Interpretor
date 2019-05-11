%{
#include "toki_pona.tab.h"
#include <stdio.h>
#include <stdlib.h>
%}
blank [" "\n\t]
whitespace {blank}+
%%
{whitespace} {;}
ilo        {yylval = strdup(yytext); return ILO;}
palisa     {yylval = strdup(yytext); return PALISA;}
lipu       {yylval = strdup(yytext); return LIPU;}
olin       {yylval = strdup(yytext); return OLIN;}
ante       {yylval = strdup(yytext); return ANTE;}
waso       {yylval = strdup(yytext); return WASO;}
unpa       {yylval = strdup(yytext); return UNPA;}
sijelo     {yylval = strdup(yytext); return SIJELO;}
tenpo      {yylval = strdup(yytext); return TENPO;}
lili       {yylval = strdup(yytext); return LILI;}
lape       {yylval = strdup(yytext); return LAPE;}
pini       {yylval = strdup(yytext); return PINI;}
kin        {yylval = strdup(yytext); return KIN;}
ijo        {yylval = strdup(yytext); return IJO;}
mun        {yylval = strdup(yytext); return MUN;}
pali       {yylval = strdup(yytext); return PALI;}
seli       {yylval = strdup(yytext); return SELI;}
linja      {yylval = strdup(yytext); return LINJA;}
pakala     {yylval = strdup(yytext); return PAKALA;}
kule       {yylval = strdup(yytext); return KULE;}
wile       {yylval = strdup(yytext); return WILE;}
lupa       {yylval = strdup(yytext); return LUPA;}
uta        {yylval = strdup(yytext); return UTA;}
ali        {yylval = strdup(yytext); return ALI;}
kulupu     {yylval = strdup(yytext); return KULUPU;}
ona        {yylval = strdup(yytext); return ONA;}
sin        {yylval = strdup(yytext); return SIN;}
utala      {yylval = strdup(yytext); return UTALA;}
monsi      {yylval = strdup(yytext); return MONSI;}
len        {yylval = strdup(yytext); return LEN;}
sitelen    {yylval = strdup(yytext); return SITELEN;}
mi         {yylval = strdup(yytext); return MI;}
kasi       {yylval = strdup(yytext); return KASI;}
musi       {yylval = strdup(yytext); return MUSI;}
awen       {yylval = strdup(yytext); return AWEN;}
jo         {yylval = strdup(yytext); return JO;}
nasa       {yylval = strdup(yytext); return NASA;}
nena       {yylval = strdup(yytext); return NENA;}
wan        {yylval = strdup(yytext); return WAN;}
pimeja     {yylval = strdup(yytext); return PIMEJA;}
kili       {yylval = strdup(yytext); return KILI;}
selo       {yylval = strdup(yytext); return SELO;}
sona       {yylval = strdup(yytext); return SONA;}
oko        {yylval = strdup(yytext); return OKO;}
tu         {yylval = strdup(yytext); return TU;}
kalama     {yylval = strdup(yytext); return KALAMA;}
sike       {yylval = strdup(yytext); return SIKE;}
sina       {yylval = strdup(yytext); return SINA;}
insa       {yylval = strdup(yytext); return INSA;}
kala       {yylval = strdup(yytext); return KALA;}
jelo       {yylval = strdup(yytext); return JELO;}
pilin      {yylval = strdup(yytext); return PILIN;}
pona       {yylval = strdup(yytext); return PONA;}
nimi       {yylval = strdup(yytext); return NIMI;}
pana       {yylval = strdup(yytext); return PANA;}
taso       {yylval = strdup(yytext); return TASO;}
ken        {yylval = strdup(yytext); return KEN;}
jaki       {yylval = strdup(yytext); return JAKI;}
meli       {yylval = strdup(yytext); return MELI;}
loje       {yylval = strdup(yytext); return LOJE;}
sinpin     {yylval = strdup(yytext); return SINPIN;}
pipi       {yylval = strdup(yytext); return PIPI;}
mute       {yylval = strdup(yytext); return MUTE;}
wike       {yylval = strdup(yytext); return WIKE;}
toki       {yylval = strdup(yytext); return TOKI;}
mani       {yylval = strdup(yytext); return MANI;}
jan        {yylval = strdup(yytext); return JAN;}
tawa       {yylval = strdup(yytext); return TAWA;}
kepeken    {yylval = strdup(yytext); return KEPEKEN;}
lukin      {yylval = strdup(yytext); return LUKIN;}
tan        {yylval = strdup(yytext); return TAN;}
akesi      {yylval = strdup(yytext); return AKESI;}
kama       {yylval = strdup(yytext); return KAMA;}
noka       {yylval = strdup(yytext); return NOKA;}
moku       {yylval = strdup(yytext); return MOKU;}
lawa       {yylval = strdup(yytext); return LAWA;}
telo       {yylval = strdup(yytext); return TELO;}
laso       {yylval = strdup(yytext); return LASO;}
weka       {yylval = strdup(yytext); return WEKA;}
ike        {yylval = strdup(yytext); return IKE;}
lete       {yylval = strdup(yytext); return LETE;}
moli       {yylval = strdup(yytext); return MOLI;}
lon        {yylval = strdup(yytext); return LON;}
supa       {yylval = strdup(yytext); return SUPA;}
nasin      {yylval = strdup(yytext); return NASIN;}
tomo       {yylval = strdup(yytext); return TOMO;}
kute       {yylval = strdup(yytext); return KUTE;}
suno       {yylval = strdup(yytext); return SUNO;}
poki       {yylval = strdup(yytext); return POKI;}
seme       {yylval = strdup(yytext); return SEME;}
ma         {yylval = strdup(yytext); return MA;}
soweli     {yylval = strdup(yytext); return SOWELI;}
ni         {yylval = strdup(yytext); return NI;}
mama       {yylval = strdup(yytext); return MAMA;}
mije       {yylval = strdup(yytext); return MIJE;}
walo       {yylval = strdup(yytext); return WALO;}
nanpa      {yylval = strdup(yytext); return NANPA;}
ala        {yylval = strdup(yytext); return ALA;}
kiwen      {yylval = strdup(yytext); return KIWEN;}
open       {yylval = strdup(yytext); return OPEN;}
poka       {yylval = strdup(yytext); return POKA;}
luka       {yylval = strdup(yytext); return LUKA;}
sama       {yylval = strdup(yytext); return SAMA;}
suli       {yylval = strdup(yytext); return SULI;}
ale        {yylval = strdup(yytext); return ALE;}
sewi       {yylval = strdup(yytext); return SEWI;}
anpa       {yylval = strdup(yytext); return ANPA;}
wawa       {yylval = strdup(yytext); return WAWA;}
suwi       {yylval = strdup(yytext); return SUWI;}
li         {yylval = strdup(yytext); return LI;}
la         {yylval = strdup(yytext); return LA;}
o          {yylval = strdup(yytext); return O;}
anu        {yylval = strdup(yytext); return ANU;}
en         {yylval = strdup(yytext); return EN;}
e          {yylval = strdup(yytext); return E;}
.          {return ENDMARK;}
%%

