# Maksymalny stopień wierzchołka
###### Problem code: RNO_GRAPH02 \| Time: 5 s \| Memory: 32 MB \| Solved: yes \| print

Dany jest graf nieskierowany. Należy wypisać numer wierzchołka, którego stopień jest maksymalny. Jeśli takich wierzchołków jest więcej niż jeden, to należy wypisać ten, którego numer jest największy. Należy również podać jego stopień.

#### Wejście
W pierwszej linii wejścia dana jest liczba zestawów danych. Każdy zestaw składa się z liczb n,m, które oznaczają liczbę wierzchołków oraz krawędzi grafu (obie są nie większe od miliona). Następnie danych jest m linii, a w każdej z nich liczby a,b (1≤a,b≤n), które oznaczają, że istnieje krawędź między wierzchołkami a oraz b.

#### Wyjscie
Dla każdego testu należy wypisać dwie liczby (oddzielone pojedynczym odstępem): numer wierzchołka i jego stopień.

#### Przyklad
Dla danych wejsciowych
```
2
3 3
1 2
2 3
1 3

6 5
1 2
2 3
1 3
5 6
4 5
```
poprawna odpowiedzia jest
```
3 2
5 2
```