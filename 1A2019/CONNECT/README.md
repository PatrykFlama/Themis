# Spójność grafu
###### Problem code: CONNECT \| Time: 4 s \| Memory: 32 MB \| Solved: yes \| print

Dany jest graf nieskierowany. Sprawdź jego spójność.

#### Wejście
W pierwszej linii wejścia dana jest liczba zestawów danych. Każdy zestaw składa się z liczb n,m, które oznaczają liczbę wierzchołków oraz krawędzi grafu (obie są nie większe od miliona). Następnie danych jest m linii, a w każdej z nich liczby a,b (1≤a,b≤n), które oznaczają, że istnieje krawędź między wierzchołkami a oraz b.

#### Wyjscie
Dla każdego testu należy wypisać TAK, jeżeli graf jest spójny lub NIE w przeciwnym wypadku.

#### Przyklad
Dla danych wejsciowych
```
2
3 3
1 2
2 3
1 3

6 5
1 2
2 3
1 3
5 6
4 5
```
poprawna odpowiedzia jest
```
TAK
NIE
```