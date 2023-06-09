Wszystkie podzbiory
Problem code: ALLSUBS | Time: 1.00 s | Memory: 2 MB | Solved: yes | print

Bardzo chcielibyśmy zobaczyć, jak wyglądają wszystkie niepuste podzbiory zbioru pierwszych n liter alfabetu angielskiego. Na wejściu dana jest liczba naturalna n (2 ≤ n ≤ 20). Na wyjściu należy wypisać szukane podzbiory w kolejności alfabetycznej. Każdy podzbiór należy wypisać jako jedno słowo.

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
Note: Zrobcie to rekurencją, która bedzie pamietać maske.
