%{
    #include <stdio.h>
    #include <string.h>
    #define MAXLENGTH 30
    #define MAXSIZE 1000
    #define FULLSTOP "full_stop"
    #define SPECIALSUBJS "special_subj"
    #define NORMALSUBJS "normal_subj"
    #define VERBS "verb"
    #define PREPOS "prepos"
    #define QUALIFIERS "qualifier"
    #define AUXILIARY_VERB_E "auxiliary_verb_e"

    void printPairs(const char *, const char *);

    // typedef struct WordElement{
    //     char word[MAXLENGTH];
    //     char prop[MAXLENGTH];
    // } WElemt;
%}
chars [A-za-z\_\'\.\"]
notwords {chars}+
names (jan \"notwords\")
blank [" "\n\t]
whitespace {blank}+
full_stop [\.]
specialsubjs mi|sina
normalsubjs names|akesi|ala|ale|ali|ante|ijo|ike|ilo|insa|jaki|jan|jo|kala|kalama|kama|kasi|ken|kili|kiwen|kule|kute|kulupu|lawa|len|lete|lili|linja|lipu|luka|lupa|ma|mama|mani|meli|mije|moku|moli|monsi|mun|musi|mute|nanpa|nasin|nena|ni|nimi|noka|oko|olin|ona|pakala|pali|palisa|pana|pilin|pimeja|pini|pipi|poki|poka|pona|seli|selo|seme|sewi|sijelo|sike|sinpin|sitelen|sona|soweli|suli|suno|supa|suwi|tan|tawa|telo|tenpo|toki|tomo|tu|unpa|uta|utala|walo|wan|waso|wawa|weka|wile
verbs anpa|ante|awen|ijo|ike|jaki|jan|jo|kalama|kama|ken|kepeken|kule|lape|lawa|lete|lili|lon|lukin|moku|moli|musi|mute|nasa|olin|open|pakala|pali|pana|pilin|pimeja|pini|poka|pona|seli|sin|sitelen|sona|suli|suwi|tawa|telo|toki|tomo|tu|unpa|utala|wan|wawa|weka|wile
prepos kepeken|lon|poka|sama|tan|tawa
qualifiers ala|ale|ali|ante|awen|ijo|ike|insa|jaki|jan|jelo|kalama|kama|kin|kiwen|kule|kute|kulupu|laso|lape|lawa|lete|lili|loje|lukin|mama|meli|mi|mije|moku|moli|monsi|mun|musi|mute|nasa|ni|olin|ona|pakala|pali|pimeja|pini|poka|pona|sama|seli|seme|sewi|sike|sin|sina|suli|suwi|taso|tawa|telo|toki|tomo|tu|unpa|uta|walo|wan|wawa|weka|wike
auxiliary_verb_e (e)
%%
{whitespace} { ;/* do nothing*/ }
{full_stop} { printPairs(yytext, FULLSTOP); }
{specialsubjs} { printPairs(yytext, SPECIALSUBJS); }
{normalsubjs} { printPairs(yytext, NORMALSUBJS); }
{verbs} { printPairs(yytext, VERBS); }
{prepos} { printPairs(yytext, PREPOS); }
{qualifiers} { printPairs(yytext, QUALIFIERS); }
{auxiliary_verb_e} { printPairs(yytext, AUXILIARY_VERB_E); }
%%
void main()
{
	yylex(); /* start the analysis*/
}
int yywrap()
{
	return 1;
}
void printPairs(const char *str, const char *typeMark)
{
    printf("%s  %s\n", str, typeMark);
}