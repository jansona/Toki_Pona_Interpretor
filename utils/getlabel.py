

if __name__ == "__main__":
    # verb_s = "anpa | ante | awen | ijo | jaki | jan | kama | ken | kepeken | kule | lawa | lete | lili | lon | moli | musi | mute | open | pali | pana | pimeja | seli | sitelen | sona | suli | tawa | toki | tomo | utala | weka"
    # noun_s = "mi | sina | " + "akesi | ike | ilo | insa | jo | kala | kasi | kili | kiwen | len | linja | lipu | luka | lupa | ma | mama | mani | mije | monsi | mun | nanpa | nasin | nena | ni | nimi | noka | oko | olin | pakala | palisa | pilin | pini | pipi | poki | selo | seme | sijelo | sinpin | soweli | suno | supa | tan | telo | tenpo | tu | unpa | walo | wan | waso | wile"
    # decorator_s = "ala | ale | ali | jelo | kalama | kin | kute | kulupu | laso | lape | loje | lukin | meli | mi | moku | nasa | ona | poka | pona | sama | sewi | sike | sin | sina | suwi | taso | uta | wawa | wike"
    # prepos_s = "kepeken | lon | poka | sama | tan | tawa"
    verb_s = "anpa | ante | awen | ijo | ike | jaki | jan | jo | kalama | kama | ken | kepeken | kule | lape | lawa | lete | lili | lon | lukin | moku | moli | musi | mute | nasa | olin | open | pakala | pali | pana | pilin | pimeja | pini | poka | pona | seli | sin | sitelen | sona | suli | suwi | tawa | telo | toki | tomo | tu | unpa | utala | wan | wawa | weka | wile"
    noun_s = "akesi | ala | ale | ali | ante | ijo | ike | ilo | insa | jaki | jan | jo | kala | kalama | kama | kasi | ken | kili | kiwen | kule | kute | kulupu | lawa | len | lete | lili | linja | lipu | luka | lupa | ma | mama | mani | meli | mije | moku | moli | monsi | mun | musi | mute | nanpa | nasin | nena | ni | nimi | noka | oko | olin | ona | pakala | pali | palisa | pana | pilin | pimeja | pini | pipi | poki | poka | pona | seli | selo | seme | sewi | sijelo | sike | sinpin | sitelen | sona | soweli | suli | suno | supa | suwi | tan | tawa | telo | tenpo | toki | tomo | tu | unpa | uta | utala | walo | wan | waso | wawa | weka | wile"
    decorator_s = "ala | ale | ali | ante | awen | ijo | ike | insa | jaki | jan | jelo | kalama | kama | kin | kiwen | kule | kute | kulupu | laso | lape | lawa | lete | lili | loje | lukin | mama | meli | mi | mije | moku | moli | monsi | mun | musi | mute | nasa | ni | olin | ona | pakala | pali | pimeja | pini | poka | pona | sama | seli | seme | sewi | sike | sin | sina | suli | suwi | taso | tawa | telo | toki | tomo | tu | unpa | uta | walo | wan | wawa | weka | wike"
    prepos_s = "kepeken | lon | poka | sama | tan | tawa"

    type_list = [verb_s, noun_s, decorator_s, prepos_s]
    # type_list = [prepos_s]

    words = []
    for s in type_list:
        words += s.split(" | ")
    wordset = set(words)
    # result = " | ".join([w.upper() for w in wordset])
    result = " ".join([w.upper() for w in wordset])

    # result += " | LI | LA | O | ANU | EN | E"
    result += " LI LA O ANU EN E"

    print(result)