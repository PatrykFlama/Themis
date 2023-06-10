# Heavy-light decomposition
###### Problem code: HLD_INTRO \| Time: 10.00 s \| Memory: 128 MB \| Solved: yes \| print

Witaj podróżniku! Oto pierwszy taki challange dla ciebie! HLD

Zadanie
Ukorzeń drzewo w wierzchłoku numer 1 i wypisz cieżkie krawędzie dla danego drzewa.

#### Wejście
W pierwszym wierszu wejścia znajduje się jedna liczba naturlna n (1 <= n <= 106) -- oznaczająca liczbe wierzchołków w drzewie.
W kolejnych n - 1 wierszach znajdują się po dwie liczby naturalne a, b -- w drzewie istnieje krawędź pomiedzy wierzchołkami a i b.

#### Wyjście
W pierwszym wierszu wyjścia wypisz liczbę cieżkich krawędzi.
A w następnych liniach wypisz po dwie liczby a, b -- krawędz a, b jest ciężka (Pamietaj żeby a był ojcem b)

#### Przykład
Dla danych wejściowych

```
6
1 2
2 3
3 4
2 5
5 6
```
poprawną odpowiedzią jest
```
4
1 2
2 3
3 4
5 6
```
Dla danych wejściowych

```
10
1 2
2 3
3 4
2 5
1 6
5 7
7 8
3 9
8 10
```
poprawną odpowiedzią jest
```
6
1 2
2 5
3 4
5 7
7 8
8 10
```
