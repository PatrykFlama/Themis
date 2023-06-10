# Pokrycie drzewa ścieżkami
###### Problem code: POKRDRZ \| Time: 5.00 s \| Memory: 128 MB \| Solved: no \| print

Dane jest drzewo o n wierzchołkach. Zadanie polega na znalezieniu najmniejszego takiego zbioru k rozłącznych ścieżek, że każdy wierzchołek należy do dokładnie jednej z nich. Dla przypomnienia ścieżka w drzewie to ciąg wierzchołków, w którym każde dwa kolejne są połączone krawędzią i w którym żaden wierzchołek się nie powtarza.

#### Wejście
W pierwszym wierszu dana jest liczba n (1 ≤ n ≤ 106). W n-1 kolejnych wierszach podane są pary liczb a,b. Każda taka para oznacza, że w drzewie istnieje krawędź między a i b.

#### Wyjście
Należy wypisać jedną liczbę k - minimalną liczbę ścieżek spełniających warunki zadania.

#### Przykład
Dla danych wejściowych

```
5
1 2
1 3
2 4
2 5
```
poprawną odpowiedzią jest
```
2
```
