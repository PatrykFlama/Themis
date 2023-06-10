# Heavy-light decomposition 2
###### Problem code: HLD_INTRO2 \| Time: 3.00 s \| Memory: 128 MB \| Solved: yes \| print

Coraz bliżej do skarbu!

Zadanie
Odpowiedaj na dwa rodzaje zapytań.
1 a b - podaj sume wag wierzchołków na scieżce od a do b. (a = 1).
2 a val - dodaj do wagi wierzchołka numer a val. (1 <= val <= 100)

#### Wejście
W pierwszym wierszu wejścia znajduje się jedna liczba naturlna n (1 <= n <= 105) -- oznaczająca liczbe wierzchołków w drzewie.
W kolejnych n - 1 wierszach znajdują się po dwie liczby naturalne a, b -- w drzewie istnieje krawędź pomiedzy wierzchołkami a i b.
W pierwszym wierszu wejścia znajduje się jedna liczba naturlna q -- oznaczająca liczbe zapytań.
W kolejnych q wierszach znajduje się po trzy liczby naturalne -- opisujące zapytania.

#### Wyjście
Dla każdego zapytania 1 a b wypisz sumę wag wierzchołkow na ścieżce od a do b.

#### Przykład
Dla danych wejściowych

```
2
1 2
8
2 1 20
2 2 67
2 1 7
1 1 1
1 1 2
1 1 1
2 1 14
1 1 1
```
poprawną odpowiedzią jest
```
27
94
27
41
```
Dla danych wejściowych

```
7
1 2
2 3
2 4
3 5
1 6
3 7
10
2 4 21
1 1 3
2 4 21
1 1 3
2 3 91
1 1 7
2 3 28
1 1 5
1 1 4
2 4 97
```
poprawną odpowiedzią jest
```
0
0
91
119
42
```
