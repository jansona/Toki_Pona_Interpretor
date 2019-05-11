import random


def hah(words):
    new_words = []
    for w in words:
        new_words.append(w.strip())
    return new_words


if __name__ == "__main__":
    # line_0 = input("line 0:")
    # line_1 = input("line 1:")
    # line_0 = "akesi | ike | ilo | insa | jan | jo | kala | kama | kasi | ken | kili | kiwen | lawa | len | lili | linja | lipu | luka | lupa | ma | mama | mani | mije | moli | monsi | mun | nanpa | nasin | nena | ni | nimi | noka | oko | olin | pakala | palisa | pana | pilin | pini | pipi | poki | seli | selo | seme | sijelo | sinpin | sitelen | sona | soweli | suno | supa | tan | tawa | telo | tenpo | toki | tomo | tu | unpa | utala | walo | wan | waso | wile"
    # line_1 = "anpa | ante | awen | ijo | ike | jaki | jan | jo | kalama | kama | ken | kepeken | kule | lape | lawa | lete | lili | lon | lukin | moku | moli | musi | mute | nasa |olin | open | pakala | pali | pana | pilin | pimeja | pini | poka | pona | seli | sin | sitelen | sona | suli | suwi | tawa | telo | toki | tomo | tu | unpa | utala | wan | wawa | weka | wile"
    # line_0 = "anpa | ante | awen | ijo | jaki | jan | kalama | kama | ken | kepeken | kule | lape | lawa | lete | lili | lon | lukin | moku | moli | musi | mute | nasa | open | pali | pana | pimeja | poka | pona | seli | sin | sitelen | sona | suli | suwi | tawa | toki | tomo | utala | wawa | weka"
    # line_1 = "ala | ale | ali | ante | awen | ijo | jaki | jelo | kalama | kin | kule | kute | kulupu | laso | lape | lete | loje | lukin | meli | mi | moku | musi | mute | nasa | ona | pali | pimeja | poka | pona | sama | sewi | sike | sin | sina | suli | suwi | taso | uta | wawa | weka | wike"
    line_a = "anpa | ante | awen | ijo | jaki | jan | kama | ken | kepeken | kule | lawa | lete | lili | lon | moli | musi | mute | open | pali | pana | pimeja | seli | sitelen | sona | suli | tawa | toki | tomo | utala | weka"
    line_b = "akesi | ike | ilo | insa | jo | kala | kasi | kili | kiwen | len | linja | lipu | luka | lupa | ma | mama | mani | mije | monsi | mun | nanpa | nasin | nena | ni | nimi | noka | oko | olin | pakala | palisa | pilin | pini | pipi | poki | selo | seme | sijelo | sinpin | soweli | suno | supa | tan | telo | tenpo | tu | unpa | walo | wan | waso | wile"
    line_c = "ala | ale | ali | jelo | kalama | kin | kute | kulupu | laso | lape | loje | lukin | meli | mi | moku | nasa | ona | poka | pona | sama | sewi | sike | sin | sina | suwi | taso | uta | wawa | wike"

    line_0 = line_b
    line_1 = line_c

    words_0 = line_0.split("|")
    # print(len(words_0))
    words_1 = line_1.split("|")

    words_0 = hah(words_0)
    words_1 = hah(words_1)

    words_common = []
    for w in words_0:
        if w in words_1:
            words_common.append(w)
        
    print(words_common)

    # for w in words_common:
    #     if random.random() >= 0.5:
    #         words_0.remove(w)
    #     else:
    #         words_1.remove(w)

    # print(len(words_0))
    # print(" | ".join(words_0))
    # print("*************************")
    # print(" | ".join(words_1))
