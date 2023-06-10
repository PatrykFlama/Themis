# LCA
###### Problem code: RNO_LCA \| Time: 5.00 s \| Memory: 64 MB \| Solved: yes \| print

Dane jest drzewo o wierzchołkach numerowanych od 1 do n, ukorzenione w wierzchołku nr 1. Następnie danych jest m par (u,v).

Zadanie
Dla każdej pary (u,v) należy wypisać wierzchołek, który jest ich najniższym wspólnym przodkiem w drzewie.

#### Wejście
W pierwszym wierszu dana jest liczba całkowita n (1≤ n≤ 106). W drugim wierszu danych jest n-1 liczb: p2, p3, ..., pn, gdzie pu oznacza ojca wierzchołka nr u.
W kolejnym wierszu dana jest liczba m oznaczająca liczbę par (1≤ m≤ 106). W kolejnych m wierszach dane są pary (u,v).

#### Wyjście
Dla każdej pary (u,v) należy wypisać ich najniższego wspólnego przodka. Odpowiedzi należy podawać w kolejności par pojawiających się na wejściu.

#### Przykład
Dla danych wejściowych

```
3
1 2
2
1 3
2 3
```
poprawną odpowiedzią jest
```
1
2
```
#### Note: MAXN = 200'000
