# Monety 4
###### Problem code: MON4 \| Time: 1.00 s \| Memory: 32 MB \| Solved: yes \| print

Napisz program, który wczyta nominały dostępnych monet i wyliczy, ile co najwyżej monet można użyć do wydania podanej kwoty S. Możesz użyć dowolnie wiele monet każdego z nominałów.

#### Wejście
W pierwszej linijce wejścia znajduje się liczba różnych nominałów n (1 <= n <= 1000). W drugiej linii znajdują się liczby 1 <= si <= 1000. Liczba si oznacza wartość i-tej monety. W ostatniej linii znajduje się kwota do wydania S (0 <= S <= 10000).

#### Wyjście
W jedynej linijce wyjścia wypisz, ile monet można co najwyżej użyć do wydania kwoty S lub słowo NIE, jeśli wydanie kwoty S nie jest możliwe. Uwaga: słowo NIE musi być napisane dużymi literami!

#### Przykład:
```
3
1 3 5
11
```
Wynik:
```
11
```
można użyć 11 monet o nominale 1.
Inny przykład:
```
2
3 5
7
```
Wynik:
```
NIE
```
