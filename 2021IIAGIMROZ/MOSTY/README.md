# Mosty w grafie prostym
###### Problem code: MOSTY \| Time: 2.00 s \| Memory: 32 MB \| Solved: yes \| print

Dany jest graf prosty, tj. bez pętli i krawędzi wielokrotnych. Znajdź wszystkie mosty w grafie. Mostem nazywamy krawędź, której usunięcie zwiększa liczbę spójnych składowych.

#### Wejście
Graf: n wierzchołków, m krawędzi.
Specyfikacja: n ≤ 100 000, m ≤ 1 000 000

#### Wyjście
Lista mostów w porządku leksykograficznym. Krawędż a--b należy wypisywać w porządku a ≤ b

#### Przykład
Dla danych wejściowych

```
15 17
1 7
1 2
2 3
3 4
4 5
5 6
6 7
3 6
3 8
8 9
9 10
8 11
11 12
12 15
15 14
14 13
12 13
```
poprawną odpowiedzią jest
```
3 8
8 9
8 11
9 10
11 12
```
Graf z przykładu
```
