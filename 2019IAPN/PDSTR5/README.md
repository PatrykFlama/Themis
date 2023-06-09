Kompresja bezstratna
Problem code: PDSTR5 | Time: 1.00 s | Memory: 10 MB | Solved: yes | print

Mateusz, kolega Jasia, zauważył, że algorytm kompresji Jasia (polegający na scalaniu bloków identycznych znaków w jeden) nie pozwala jednoznacznie odzyskać oryginalnej wiadomości. Udoskonalił on pomysł kolegi. Otóż dopisując za literą w skompresowanym tekście długość odpowiadającego jej bloku da się bez problemu odtworzyć oryginalny tekst (złożony jedynie z liter). Taki pomysł skraca (a właściwie nie wydłuża) prawie wszystkie bloki. Jedynie dla bloków długości 1 ten algorytm je wydłuża (np. "a" zostaje zamienione na "a1"). Mateusz szybko rozwiązał ten problem po prostu pomijając długość bloku dla długości 1. Mateusz podzielił się swoim algorytmem z kolegą oraz zaimplementował dekompresowanie danych. Tobie pozostaje napisanie za Jasia programu kompresującego.

Zadanie
Zaimplementuj algorytm Mateusza.

Wejście
Ciąg małych liter alfabetu angielskiego.

Wyjście
Wypisz ciąg który powstaje z oryginalnego przez zamienienie każdego bloku identycznych liter na tę literę (i być może jej liczbę wystąpień).

Przykład
Dla danych wejściowych

abcdefg
poprawną odpowiedzią jest
abcdefg
Dla danych wejściowych

aabbbbbcccdeeeffffffhgh
poprawną odpowiedzią jest
a2b5c3de3f6hgh