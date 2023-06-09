Złożenie permutacji
Problem code: PERMUTCOMP | Time: 1.00 s | Memory: 32 MB | Solved: yes | print

Zadanie
Napisz program obliczający złożenie dwóch permutacji.

Wejście
W pierwszym wierszu znajduje się liczba naturalna n, nie większa niż 20000. W każdym z kolejnych dwóch wierszy znajduje się po jednej permutacji n elementowej. Nazwijmy je odpowiednio p1 i p2.

Wyjście
W jedynym wierszu wynikowym ma znaleźć się permutacja q powstała w wyniku złożenia p2◦p1 (a więc taka, że q(i)= p2(p1(i)), dla każdego i=1,2,...,n).

Przykład
Dla danych wejściowych

5
2 4 5 1 3
4 2 5 1 3
poprawną odpowiedzią jest
2 1 3 4 5