# Sortowanie par I
###### Problem code: CPARY \| Time: 1.00 s \| Memory: 32 MB \| Solved: yes \| print

Zadanie
Napisz program, który:

przeczyta n par liczb całkowitych,
wypisze je w kolejności rosnących wartości pierwszej składowej (pary o równej wartości pierwszej składowej, mają być wypisane w kolejności rosnących wartości drugiej składowej),
wypisze je w kolejności rosnących wartości drugiej składowej (pary o równej wartości drugiej składowej, mają być wypisane w kolejności rosnących wartości pierwszej składowej).
#### Wejście
W pierwszym wierszu znajduje się liczba naturalna n, nie większa od 100000.
W każdym z kolejnych n wierszy znajduje się para liczb całkowitych.

#### Wyjście
W pierwszym wierszu należy wypisać ciąg par uporządkowany według pierwszych składowych.
W drugim wierszu należy wypisać ciąg par uporządkowany według pierwszych składowych.
Każdą parę należy zawrzeć w nawiasach, a jej składowe oddzielić przecinkiem (patrz przykład poniżej).

#### Przykład
Dla danych wejściowych

```
4
2 6
4 1
1 2
2 3

```
poprawną odpowiedzią jest
```
(1,2) (2,3) (2,6) (4,1)
(4,1) (1,2) (2,3) (2,6)
```
