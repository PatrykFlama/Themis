# Trudniejsze pytania na drzewie
###### Problem code: DKO_GRAPH03 \| Time: 7.00 s \| Memory: 256 MB \| Solved: yes \| print

Dane jest drzewo o wierzchołkach numerowanych od 1 do n, ukorzenione w wierzchołku nr 1. Następnie danych jest m par (u,v).
Zadanie
Dla każdej pary (u,v) należy sprawdzić, czy droga od korzenia do wierzchołka u przechodzi przez wierzchołek v.

#### Wejście
W pierwszym wierszu dana jest liczba całkowita n (1≤ n≤ 106). W drugim wierszu danych jest n-1 liczb: p2, p3, ..., pn, gdzie pu oznacza ojca wierzchołka nr u. W kolejnym wierszu dana jest liczba m oznaczająca liczbę par (1≤ m≤ 106). W kolejnych m wierszach dane są pary (u,v).

#### Wyjście
Dla każdej pary (u,v) należy wypisać TAK lub NIE. Odpowiedzi należy podawać w kolejności par pojawiających się na wejściu.

#### Przykład
Dla danych wejściowych

```
10
5 2 7 1 1 5 2 2 1 
10
7 1
7 1
2 10
2 6
10 1
5 1
6 2
4 5
9 8
3 2
```
poprawną odpowiedzią jest
```
TAK
TAK
NIE
NIE
TAK
TAK
NIE
TAK
NIE
TAK
```
