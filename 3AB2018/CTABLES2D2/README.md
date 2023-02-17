# Sortowanie wierszy tablicy
###### Problem code: CTABLES2D2 \| Time: 3 s \| Memory: 32 MB \| Solved: yes \| print

#### Zadanie
Napisz program, który wczyta elementy tablicy A o rozmiarze n x n, a następnie wypisze jej wiersze uporządkowane niemalejąco względem sum ich elementów.

#### Wejście
W pierwszym wierszu wejścia znajduje się liczba naturalna n nie większa od 1000, określająca rozmiar tablicy A. W każdym z następnych n wierszy znajduje się n liczb całkowitych - są to kolejne elementy n tego wiersza tablicy A.

#### Wyjście
W i tym wierszu wyjścia (i=0,...,n-1) powinien zostać wypisany ten wiersz tablicy A, którego suma elementów jest i-ta co do wielkości.
Uwaga:
Jeśli dwa wiersze mają taką samą sumę elementów, należy je ustawić w takim porządku, w jakim występują w tablicy wejściowej.

Przykład
Dla danych wejściowych
```
 3
 1 4 6
 4 6 2
 3 2 1
```
poprawną odpowiedzią jest
```
 3 2 1
 1 4 6
 4 6 2
 ```