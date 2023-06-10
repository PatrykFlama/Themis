# Malowanie grafu 1
###### Problem code: KOL0 \| Time: 1.00 s \| Memory: 32 MB \| Solved: no \| print

Zadanie
Dany jest N wierzchołkowy graf o M krawędziach. Twoim zadaniem jest sprawdzić czy możesz pomalować ten graf na K kolorów.
UWAGA! Poprawnym malowaniem nazywamy takie malowanie, że jeżeli spojrzymy na wszystkie wierzchołki o danym kolorze, to maksymalnie jedna para wierzchołków, może być połączona krawędzią.

#### Wejście
W pierwszym wierszu wejścia znajdują się trzy liczby naturalne N, M, K (1 <= N, K <= 8, 0 <= M <= N * (N - 1) / 2).
W następnych M liniach znajduje się po dwie liczby naturalne U, V - oznaczające, że istnieje krawędź pomiędzy wierzchołkami o numerach U i V.

#### Wyjście
Wypisz "TAK", jeżeli da się pomalować graf na K kolorów, lub "NIE" wpp.

#### Przykład
Dla danych wejściowych

```
4 4 2
1 2
1 3
1 4
2 3
```
poprawną odpowiedzią jest
```
TAK
```
Dla danych wejściowych

```
3 2 1
2 3
1 3
```
poprawną odpowiedzią jest
```
NIE
```
