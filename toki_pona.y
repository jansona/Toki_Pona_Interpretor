

%{
#include <stdio.h>
#include <stdlib.h>
%}
%token ILO PALISA LIPU OLIN ANTE WASO UNPA SIJELO TENPO LILI LAPE PINI KIN IJO MUN PALI SELI LINJA PAKALA KULE WILE LUPA UTA ALI KULUPU ONA SIN UTALA MONSI LEN SITELEN MI KASI MUSI AWEN JO NASA NENA WAN PIMEJA KILI SELO SONA OKO TU KALAMA SIKE SINA INSA KALA JELO PILIN PONA NIMI PANA TASO KEN JAKI MELI LOJE SINPIN PIPI MUTE WIKE TOKI MANI JAN TAWA KEPEKEN LUKIN TAN AKESI KAMA NOKA MOKU LAWA TELO LASO WEKA IKE LETE MOLI LON SUPA NASIN TOMO KUTE SUNO POKI SEME MA SOWELI NI MAMA MIJE WALO NANPA ALA KIWEN OPEN POKA LUKA SAMA SULI ALE SEWI ANPA WAWA SUWI LI LA O ANU EN E

%%
toki_pona :
    sentence
sentence :
    svo_sentence
    | condition svo_sentence
    | o_sentence
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
    ANPA | ANTE | AWEN | IJO | IKE | JAKI | JAN | JO | KALAMA | KAMA | KEN | KEPEKEN | KULE | LAPE | LAWA | LETE | LILI | LON | LUKIN | MOKU | MOLI | MUSI | MUTE | NASA |OLIN | OPEN | PAKALA | PALI | PANA | PILIN | PIMEJA | PINI | POKA | PONA | SELI | SIN | SITELEN | SONA | SULI | SUWI | TAWA | TELO | TOKI | TOMO | TU | UNPA | UTALA | WAN | WAWA | WEKA | WILE
noun :
    MI
    | SINA
    | norm_subject_noun
norm_subject_noun :
    noun
    | AKESI | ALA | ALE | ALI | ANTE | IJO | IKE | ILO | INSA | JAKI | JAN | JO | KALA | KALAMA | KAMA | KASI | KEN | KILI | KIWEN | KULE | KUTE | KULUPU | LAWA | LEN | LETE | LILI | LINJA | LIPU | LUKA | LUPA | MA | MAMA | MANI | MELI | MIJE | MOKU | MOLI | MONSI | MUN | MUSI | MUTE | NANPA | NASIN | NENA | NI | NIMI | NOKA | OKO | OLIN | ONA | PAKALA | PALI | PALISA | PANA | PILIN | PIMEJA | PINI | PIPI | POKI | POKA | PONA | SELI | SELO | SEME | SEWI | SIJELO | SIKE | SINPIN | SITELEN | SONA | SOWELI | SULI | SUNO | SUPA | SUWI | TAN | TAWA | TELO | TENPO | TOKI | TOMO | TU | UNPA | UTA | UTALA | WALO | WAN | WASO | WAWA | WEKA | WILE
decorator_word :
    ALA | ALE | ALI | ANTE | AWEN | IJO | IKE | INSA | JAKI | JAN | JELO | KALAMA | KAMA | KIN | KIWEN | KULE | KUTE | KULUPU | LASO | LAPE | LAWA | LETE | LILI | LOJE | LUKIN | MAMA | MELI | MI | MIJE | MOKU | MOLI | MONSI | MUN | MUSI | MUTE | NASA | NI | OLIN | ONA | PAKALA | PALI | PIMEJA | PINI | POKA | PONA | SAMA | SELI | SEME | SEWI | SIKE | SIN | SINA | SULI | SUWI | TASO | TAWA | TELO | TOKI | TOMO | TU | UNPA | UTA | WALO | WAN | WAWA | WEKA | WIKE
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
