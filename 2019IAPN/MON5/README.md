Monety 5
Problem code: MON5 | Time: 1.00 s | Memory: 323 MB | Solved: no | print

W pewnym kraju niektóre monety wykonane są z cyny a niektóre ze złota. Rozmieniając daną kwotę, chciałbyś otrzymać jak najwięcej złotych monet. Napisz program, który wczyta nominały dostępnych monet z cyny oraz dostępne nominały monet ze złota (monety niektórych nominałów mogą być zrobione zarówno z cyny, jak i ze złota) oraz obliczy, ile co najwyżej złotych monet można użyć do wydania podanej kwoty S.

Wejście
W pierwszym wierszu wejścia znajduje się liczba nc (1 <= nc <= 1000) różnych nominałów monet cynowych. W drugim wierszu znajdują się liczby 1 <= si <= 1000. Liczba si oznacza wartość i-tego nominału monety cynowej.

W trzecim wierszu znajduje się liczba nz (1 <= nz <= 1000) różnych nominałów monet złotych. W czwartym wierszu znajdują się liczby 1 <= si <= 1000. Liczba si oznacza wartość i-tego nominału monety złotej.

W ostatniej linii znajduje się kwota do wydania S (0 <= S <= 10000).

Wyjście
W jedynej linijce wyjścia wypisz, ile złotych monet można co najwyżej użyć do wydania kwoty S lub słowo NIE, jeśli wydanie kwoty S nie jest możliwe. Uwaga: słowo NIE musi być napisane dużymi literami!

Przykład:
3
1 3 5
2
2 9
11
Wynik:
5
można użyć 11 monet o nominale 1.
Inny przykład:
2
3 5
1
6
7
Wynik:
NIE