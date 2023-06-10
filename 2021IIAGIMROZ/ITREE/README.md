# Drzewo przedziałowe
###### Problem code: ITREE \| Time: 2.00 s \| Memory: 32 MB \| Solved: yes \| print

Zaimplementuj strukturę drzewa przedziałowego. 
Struktura powinna realizować następujące operacje:
 *)  1 a b - wstaw przedział (domknięty) [a,b]
 *)  2 a b - usuń przedział [a,b]
 *)  0     - podaj maksymalną liczbę przedziałów pokrywających pewien punkt.
W pierwszym wierszu dana jest liczba operacji n≤100000.
#### Przykład
Dla danych wejściowych

```
4
1 2 10
0
2 2 10
0
```
poprawną odpowiedzią jest
```
1
0
```
