

%{
#include <stdio.h>
#include <stdlib.h>
%}
%token ALA SONA WAWA LUPA ONA NANPA IJO ILO OLIN WILE MUTE OKO SEWI LON TENPO JAKI JO NASIN TOKI SUNO UTA WIKE NASA ALI WALO LASO KILI SUPA AWEN LETE AKESI NENA UTALA NIMI SINPIN LAPE SITELEN POKA SAMA MOLI LUKIN JELO PAKALA MA LEN ALE LAWA KIWEN PINI WASO KULUPU PALI JAN OPEN TASO KUTE KALA TELO MONSI LILI KEN TOMO MAMA MIJE PONA SEME TU MELI PIMEJA PIPI NOKA KULE SIN SOWELI SUWI ANTE SIKE KALAMA LINJA KASI SIJELO MUN PANA TAWA LOJE TAN KEPEKEN KAMA SELO MI POKI SELI IKE PILIN WAN LUKA MANI ANPA SULI MUSI WEKA INSA LIPU MOKU KIN SINA NI UNPA PALISA LI LA O ANU EN E
%token ENDMARK

%%
toki_pona :
    sentence ENDMARK
sentence :
    svo_sentence
    {printf("svo_sentence\n");}
    | condition svo_sentence
    {printf("condition\n");}
    | o_sentence
    {printf("o_sentence\n");}
o_sentence :
    o_sentence_1
    | o_sentence_2
o_sentence_1 :
    noun_phase O
    | noun_phase O vo_struct
o_sentence_2 :
    O vo_struct
    | condition O vo_struct
condition :
    svo_sentence LA
    | noun_phase LA
    | TASO svo_sentence
    | KEN LA
    | ANTE LA
svo_sentence :
    subject vo_struct
    // {printf("%s %s\n", $1, $2);}
subject :
    MI
    {printf("{%s} ", $1);}
    | SINA
    {printf("{%s} ", $1);}
    | norm_noun_phase LI
    {printf("{%s} [%s] ", $1, $2);}
norm_noun_phase :
    norm_subject_noun
    | structed_noun_phase
structed_noun_phase :
    decorated_noun_struct
    | noun_phase conj noun_phase
noun_phase :
    noun
    | structed_noun_phase
conj :
    EN
    | ANU
decorated_noun_struct :
    noun decorator
    | noun noun
    | noun noun decorator
decorator :
    decorator_word
    | decorator_word decorator
vo_struct :
    verb_phase
    | verb_phase LI vo_struct
verb_phase :
    no_acceptance_verb_phase
    | acceptance_verb_phase
    {printf(" %s ", $1);}
    | verb_phase po_phase
no_acceptance_verb_phase :
    verb_group
    | LON noun_phase
    | TAWA noun_phase
    | modal_verb LON noun_phase
    | modal_verb TAWA noun_phase
acceptance_verb_phase :
    verb_group acceptance_obj
    // {yylval = strdup(yytext);}
    | modal_verb verb_group acceptance_obj
acceptance_obj :
    E noun_phase
    | E noun_phase acceptance_obj
verb_group :
    verb
    | modal_verb verb
    | verb decorator
    | YnN_verb
    | modal_verb YnN_verb
    | YnN_verb decorator
YnN_verb :
    verb ALA verb
po_phase :
    prepostion noun_phase
    | prepostion noun_phase po_phase
modal_verb :
    postive_modal_verb
    | negative_modal_verb
    | YnN_modal_verb
postive_modal_verb :
    KAMA
    | KEN
    | WILE
negative_modal_verb :
    postive_modal_verb ALA
YnN_modal_verb :
    KAMA ALA KAMA
    | KEN ALA KEN
    | WILE ALA WILE
verb :
    LUKIN | WEKA | IKE | KULE | PINI | JO | PONA | MUTE | LAPE | IJO | MOLI | PAKALA | LAWA | SONA | SULI | TAWA | WILE | JAN | KEPEKEN | OPEN | TOKI | LETE | OLIN | ANTE | AWEN | WAWA | LILI | LON | SELI | SIN | TU | UTALA | SITELEN | MUSI | WAN | SUWI | ANPA | KAMA | POKA | TELO | MOKU | PILIN | TOMO | PIMEJA | UNPA | NASA | JAKI | KALAMA | PALI | PANA | KEN
noun :
    MI
    | SINA
    | norm_subject_noun
norm_subject_noun :
    PINI | MUSI | KASI | SIKE | IKE | LUPA | PIPI | POKI | PONA | KALA | NANPA | WALO | PAKALA | ILO | WILE | ANTE | SULI | LUKA | PILIN | NASIN | AKESI | SEWI | MAMA | TAWA | MIJE | MONSI | KAMA | WAWA | MUTE | UNPA | TU | SITELEN | SEME | MANI | SONA | SUNO | ALI | NENA | KALAMA | NIMI | LILI | TOMO | KULUPU | NI | PALI | LEN | KUTE | WEKA | JO | SUPA | MUN | JAKI | OLIN | SINPIN | POKA | PALISA | SOWELI | PIMEJA | ALE | LIPU | ONA | SIJELO | KIWEN | LETE | KEN | KILI | ALA | UTALA | SELO | WASO | SUWI | TAN | WAN | LAWA | KULE | TENPO | MOKU | UTA | OKO | INSA | TELO | SELI | MELI | JAN | PANA | NOKA | TOKI | LINJA | MOLI | IJO | MA
decorator_word :
    IJO | SEWI | INSA | KIN | LILI | MOKU | PINI | IKE | SAMA | MI | SEME | SULI | SIN | MUTE | KIWEN | PALI | PIMEJA | PONA | LASO | NASA | SIKE | KAMA | MOLI | KUTE | ALE | WAN | ALI | LOJE | LETE | LAPE | KULE | WIKE | JAKI | MUSI | ONA | KULUPU | UTA | TELO | WALO | OLIN | LAWA | AWEN | TASO | LUKIN | TU | SELI | SINA | TAWA | MIJE | MUN | PAKALA | NI | TOMO | WEKA | WAWA | JAN | TOKI | ANTE | KALAMA | MAMA | UNPA | MONSI | ALA | POKA | JELO | MELI | SUWI
prepostion :
    LON | POKA | TAWA | TAN | KEPEKEN | SAMA | LI | LA | O | ANU | EN | E
%%

yyerror(const char *s){
    fprintf(stderr, "error: %s\n", s);
}

int main(){
    yyparse();
    return 0;
}
