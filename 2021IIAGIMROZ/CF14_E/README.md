# Wielbłądy
###### Problem code: CF14_E \| Time: 1.00 s \| Memory: 32 MB \| Solved: yes \| print

Zadanie
link
Wielbłąd to linia łamana przechodząca stworzona z punktów (x1, y1), (x2, y2), ..., (xn, yn).
Takich, że:
xi = i,
1 <= yi <= 4,
yi-1 != yi,
mają dokładnie t garbów. (garb to takie j, że yj - 1 < yj > yj + 1).

#### Wejście
Dwie liczby naturalne n, t (3 <= n <= 20, 1 <= t <= 10).

#### Wyjście
Wypisz liczbę wielbłądów z t garbami.

#### Przykład
Dla danych wejściowych

```
6 1
```
poprawną odpowiedzią jest
```
6
```
