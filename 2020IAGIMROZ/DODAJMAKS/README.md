Proste zapytania
Problem code: DODAJMAKS | Time: 1.00 s | Memory: 64 MB | Solved: no | print

Zadanie
Twoim zadaniem jest zaimplementowanie struktury która będzie obsługiwać następujące operacje na tablicy:

Dodaj wartość V na przedziale [a, a+1]
Podaj maksymalną wartość z przedziału [l, r]
Wejście
W pierwszym wierszu wejścia dana jest jedna liczba naturalna Q oznaczająca liczbę zapytań. Następnie dane jest Q linii. Pierwszy znak w lini to 'A' lub 'Q'. W pierwszym przypadku w tej samej linii następują jeszcze dwie liczby a oraz V, oznacza to, że w przedziale [a, a+1] należy dodać wartość V. Jeśli pierwszy znak równy jest 'Q', to następują dwie liczby l, r co oznacza, że należy wypisać maksymalną wartość z przedziału [l, r].

Wyjście
Dla każdego zapytania 'Q' należy wypisać maksymalną wartość w tablicy dla tego zapytania.

Limity
1 ≤ l, r, a, Q ≤ 100 000, |V| ≤ 10 000. Możesz założyć, że l ≤ r.
Przykład
Dla danych wejściowych

11
Q 8 8
A 7 2
Q 1 1
A 9 -3
A 9 -6
A 2 8
A 8 -1
A 8 5
Q 7 10
A 2 -9
Q 2 3
poprawną odpowiedzią jest
0
0
6
-1
