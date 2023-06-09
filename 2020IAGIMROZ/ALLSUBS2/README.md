Wszystkie podzbiory (easy)
Problem code: ALLSUBS2 | Time: 10.00 s | Memory: 64 MB | Solved: yes | print

Bardzo chcielibyśmy zobaczyć, jak wyglądają wszystkie niepuste podzbiory zbioru pierwszych n liter alfabetu angielskiego.

Wejście
Na wejściu dana jest liczba naturalna n (2 ≤ n ≤ 20).
Wyjście
Na wyjściu należy wypisać szukane podzbiory w kolejności alfabetycznej. Każdy podzbiór należy wypisać jako jedno słowo.

Przykład
Dla danych wejściowych

3
poprawną odpowiedzią jest

a
ab
abc
ac
b
bc
c
Wyjaśnienie: podzbiorami zbioru { a, b, c } są:

zbiór pusty, którego nie wypisujemy
zbiory jednoelementowe: { a }, { b }, { c }
zbiory dwuelementowe: { a, b }, { a, c }, { b, c }
zbiór trzyelementowy: { a, b, c }
Zbiory te, ułożone w kolejności alfabetycznej, wyglądają jak powyżej.
Note: Tak wiem, że to zadanie już było. Zrobcie to rekurencją, która bedzie pamietać maske.
