# Stopnie wierzchołków
###### Problem code: RNO_GRAPH01 \| Time: 5 s \| Memory: 32 MB \| Solved: yes \| print

Dany jest graf nieskierowany. Stopniem wierzchołka nazywamy liczbę krawędzi z niego wychodzących. Należy wypisać stopnie wszystkich wierzchołków danego grafu.

#### Wejście
W pierwszej linii wejścia dana jest liczba zestawów danych. Każdy zestaw składa się z liczb n,m, które oznaczają liczbę wierzchołków oraz krawędzi grafu (obie są nie większe od miliona). Następnie danych jest m linii, a w każdej z nich liczby a,b (1≤a,b≤n), które oznaczają, że istnieje krawędź między wierzchołkami a oraz b.

#### Wyjscie
Dla każdego testu należy wypisać stopnie wszystkich jego wierzchołków. Stopnie należy oddzielić pojedynczym odstępem. Najpierw należy wypisać stopień wierzchołka nr 1, potem 2, itd.

#### Przyklad
Dla danych wejsciowych
```
2
7 8
1 2
7 2
2 6
5 6
5 2
2 4
3 2
3 4

6 4
1 2
2 3
3 5
5 6
```
poprawna odpowiedzia jest
```
1 6 2 2 2 2 1
1 2 2 0 2 1
```