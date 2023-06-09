# Najmniejszy element ciągu zadanego wzorem
###### Problem code: CPRIMER4 \| Time: 1.00 s \| Memory: 32 MB \| Solved: yes \| print

Zadanie
Niech Sc(x) będzie funkcją, która dla liczby naturalnej x jest równa sumie cyfr tej liczby w zapisie dziesiętnym. Dla każdej liczby naturalnej n używamy funkcji Sc do określenia następującego nieskończonego ciągu liczbowego an: an(0) = n; an(i+1) = Sc(an(i)) dla i ≥ 0.

Napisz program, który znajdzie najmniejszy element ciągu an.

#### Wejście
W jedynym wierszu wejścia znajduje się liczba naturalna n nie większa od 1000000000.

#### Wyjście
Najmniejsza liczba naturalna, która jest wartością ciągu a_n.

#### Przykład
Dla danych wejściowych

```
79
```
poprawną odpowiedzią jest
```
7
```
