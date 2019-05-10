

%{
#include <stdio.h>
#include <stdlib.h>
%}
%token ILO PALISA LIPU OLIN ANTE WASO UNPA SIJELO TENPO LILI LAPE PINI KIN IJO MUN PALI SELI LINJA PAKALA KULE WILE LUPA UTA ALI KULUPU ONA SIN UTALA MONSI LEN SITELEN MI KASI MUSI AWEN JO NASA NENA WAN PIMEJA KILI SELO SONA OKO TU KALAMA SIKE SINA INSA KALA JELO PILIN PONA NIMI PANA TASO KEN JAKI MELI LOJE SINPIN PIPI MUTE WIKE TOKI MANI JAN TAWA KEPEKEN LUKIN TAN AKESI KAMA NOKA MOKU LAWA TELO LASO WEKA IKE LETE MOLI LON SUPA NASIN TOMO KUTE SUNO POKI SEME MA SOWELI NI MAMA MIJE WALO NANPA ALA KIWEN OPEN POKA LUKA SAMA SULI ALE SEWI ANPA WAWA SUWI LI LA O ANU EN E
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
subject :
    MI
    | SINA
    | norm_noun_phase LI
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
    | verb_phase po_phase
no_acceptance_verb_phase :
    verb_group
    | LON noun_phase
    | TAWA noun_phase
    | modal_verb LON noun_phase
    | modal_verb TAWA noun_phase
acceptance_verb_phase :
    verb_group acceptance_obj
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
    KAMA | TAWA | TOKI | MUSI | WEKA | SELI | AWEN | LILI | TOMO | ANTE | MOLI | ANPA | SULI | UTALA | SONA | LON | KULE | LETE | IJO | PANA | LAWA | JAKI | PIMEJA | KEPEKEN | OPEN | PALI | JAN | SITELEN | KEN | MUTE
noun :
    MI
    | SINA
    | norm_subject_noun
norm_subject_noun :
    SUNO | SINPIN | NANPA | POKI | KILI | LUKA | TENPO | UNPA | PIPI | NENA | LUPA | NI | KALA | SUPA | MAMA | LEN | SIJELO | SINA | MANI | LIPU | TU | TELO | NIMI | SEME | MIJE | OLIN | SELO | JO | PAKALA | WALO | NASIN | PALISA | WASO | WAN | NOKA | AKESI | MONSI | PINI | KASI | MI | LINJA | IKE | OKO | WILE | INSA | ILO | KIWEN | TAN | MUN | SOWELI | PILIN | MA
decorator_word :
    KIN | NASA | ALE | SIKE | SIN | LOJE | JELO | LAPE | PONA | SINA | POKA | ALA | LUKIN | KULUPU | SEWI | LASO | SUWI | MOKU | WAWA | WIKE | TASO | MELI | SAMA | ONA | KUTE | UTA | ALI | MI | KALAMA
prepostion :
    KEPEKEN | LON | POKA | SAMA | TAN | TAWA
%%

yyerror(const char *s){
    fprintf(stderr, "error: %s\n", s);
}

int main(){
    yyparse();
    return 0;
}
