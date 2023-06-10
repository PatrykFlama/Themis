# Sprawdzenie porządku topologicznego
###### Problem code: SORTTOP2 \| Time: 5.00 s \| Memory: 32 MB \| Solved: yes \| print

Tadzio ma n zadań do wykonania. Są one ponumerowane liczbami z przedziału od 0 do n-1. Niektóre zadania muszą być wykonane przed innymi: Tadzio sporządził całą listę "pierwszeństwa", która zawiera pary numerów zadań. Para a b na liście oznacza, że zadanie a powinno być wykonane przed zadaniem b. Tadzio chce sporządzić harmonogram dnia, a zatem między innymi ustalić kolejność, w jakiej będzie wykonywać wszystkie zadania. Aby ułatwić sobie to przedsięwzięcie napisał program, który wyznacza tę kolejność. Teraz Tadziowi pozostaje sprawdzić, czy kolejność wykonywania zadań wyznaczona przez jego program spełnia wszystkie warunki z listy pierwszeństwa.

Napisz program sprawdzający, czy kolejność wykonywania zadań wyznaczona przez program Tadzia jest prawidłowa.

#### Wejście
Pierwszy wiersz zawiera dwie liczby naturalne: n – liczbę zadań oraz k – liczbę par na liście pierwszeństwa (0 ≤ n ≤ 1000000 oraz 0 ≤ k ≤ 1000000). Każdy z kolejnych k wierszy zawiera parę liczb – kolejny warunek z listy pierwszeństwa. W ostatnim wierszu znajduje się permutacja liczb 0, ..., n-1 oznaczająca kolejność wykonywania zadań wyznaczoną przez program Tadzia.

#### Wyjście
W jedynym wierszu wyjścia należy wypisać słowo OK, jeśli permutacja wyznaczona przez program Tadzia spełnia wszystkie warunki z listy pierwszeństwa. Jeśli nie spełnia tych warunków, należy wypisać numer pierwszego zadania z permutacji, którego wykonanie byłoby wbrew warunkom z listy pierwszeństwa.

#### Przykład
Dla danych wejściowych

```
5 7
1 2
4 0
0 3
3 2
4 1
1 0
0 2
4 1 0 3 2
```
poprawną odpowiedzią jest
```
OK
```
Dla danych wejściowych

```
5 7
1 2
4 0
0 3
3 2
4 1
1 0
0 2
4 1 2 3 0
```
poprawną odpowiedzią jest
```
2
```
