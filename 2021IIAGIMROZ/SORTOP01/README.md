# Sortowanie topologiczne
###### Problem code: SORTOP01 \| Time: 1.00 s \| Memory: 32 MB \| Solved: yes \| print

Należy posortować podane na wejściu zadania w kolejności ich wykonywania.

#### Wejście
W pierwszym wierszu wejścia podane są dwie liczby naturalne n ≤ 105 i m ≤ 105 oznaczające odpowiednio liczbę zadań do wykonania i liczbę warunków. W każdym z następnych m wierszy podane są dwie liczby naturalne ai, bi, informujące nas o tym, że zadanie ai musi zostać wykonane przed zadaniem bi. Każde zadanie ma unikalny identyfikator - liczbę naturalną z przedziału obustronnie domkniętego [1, n].

#### Wyjście
Twój program powinien wypisać zadania w kolejności ich wykonywania. Jeśli dwa zadania mogą być wykonane w tym samym momencie, najpierw należy wykonać zadania o większym numerze. Jeśli nie istnieje kolejność wykonywania zadań spełniająca wszystkie podane warunki, Twój program powinien wypisać słowo "NIE". Uwaga: wielkość liter ma znaczenie!

#### Przykład
Dla danych wejściowych:

```
8 9
8 7
7 1
7 5
6 4
5 1
4 5
3 5
3 2
2 7
```
poprawną odpowiedzią jest:
```
8 6 4 3 2 7 5 1
```
