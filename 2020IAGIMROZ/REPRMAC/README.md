Macierzowa reprezentacja grafu
Problem code: REPRMAC | Time: 3.00 s | Memory: 16 MB | Solved: yes | print

Dany jest graf nieskierowany. Wypisz jego reprezentację macierzową i listową.

Uwaga: w grafie na wejściu mogą wystąpić pętle oraz krawędzie wielokrotne. Krawędzie wielokrotne traktujemy jako jedną krawędź.

Wejście
W pierwszym wierszu dane są dwie liczby: n, m (1 ≤ n ≤ 1000, 0 ≤ m ≤ 100000), gdzie n oznacza liczbę wierzchołków zaś m – liczbę krawędzi. W następnych m wierszach podane są po dwie liczby: a, b (1 ≤ a, b ≤ n) oznaczające krawędź między wierzchołkami a i b.

Wyjście
Wypisz reprezentację macierzową i listową danego grafu (zob. przykład).

W pierwszym wierszu należy wypisać napis "Macierz:", a w następnych n wierszach macierz sąsiedztwa danego grafu (bez spacji). W macierzy tej jedynka na pozycji i, j oznacza, że istnieje krawędź między wierzchołkami i oraz j.

Dalej należy wypisać napis "Lista:", a w następnych n wierszach listy sąsiedztwa kolejnych wierzchołków. W i-tym wierszu należy wypisać najpierw "i: ", a dalej numery wierzchołków połączonych krawędzią z i-tym wierzchołkiem. Numery wierzchołków należy podać bez powtórzeń, w porządku rosnącym, oddzielając je pojedynczą spacją.

Przykład
Dla danych wejściowych

7 12
1 2
1 4
2 3
3 4
3 2
4 5
4 6
4 7
7 7
5 6
5 7
6 7
poprawną odpowiedzią jest
Macierz:
0101000
1010000
0101000
1010111
0001011
0001101
0001111

Lista:
1: 2 4
2: 1 3
3: 2 4
4: 1 3 5 6 7
5: 4 6 7
6: 4 5 7
7: 4 5 6 7
