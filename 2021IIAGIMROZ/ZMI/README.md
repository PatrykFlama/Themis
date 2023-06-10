# Zmienne
###### Problem code: ZMI \| Time: 1.00 s \| Memory: 32 MB \| Solved: no \| print

Mamy liczbę naturalną N. Rozważamy N zmiennych całkowitych nieujemnych x_1, x_2, ..., x_N o wartościach z przedziału [0; K]. Mamy zadane nierówności między nimi: dla niektórych par (i, j) wiemy, że: x_i > x_j lub x_i < x_j lub x_i = x_j . Chcemy wyznaczyć najmniejsze takie K, aby wszystkie zadane nierówności zostały zachowane.

#### Wejście
Mamy liczbę naturalną N i M.(1 <= N <= 1000, 1 <= M <= 10000). Rozważamy N zmiennych całkowitych nieujemnych x_1, x_2, ..., x_N o wartościach z przedziału [0; K]. Mamy zadane M nierówności między nimi: dla niektórych par (i, j) wiemy, że: x_i > x_j lub x_i < x_j lub x_i = x_j. (Jest to zapisane przez i j c, gdzie i oraz j to numery zmiennych, c=-1 gdy mamy <, c=0 gdy mamy =, c = 1 gdy mamy >). Chcemy wyznaczyć najmniejsze takie K, aby wszystkie zadane nierówności zostały zachowane.

#### Wyjście
W pierwszym i jedynym wierszu wyjścia powinna znaleźć się jedna liczba naturalna — szukane K. W przypadku, gdy spełnienie wszystkich nierówności nie jest możliwe — należy wypisać NIE.

#### Przykład
Dla danych wejściowych

```
4 4
1 2 -1
2 3 0
2 4 -1
3 4 -1
```
poprawną odpowiedzią jest
```
2
#### Wyjaśnienie
```
Przykładowe poprawne wartościowanie zmiennych to: x_1 = 0, x_2 = x_3 = 1, x_4 = 2.

```
