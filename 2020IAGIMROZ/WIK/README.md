Worki i kamienie
Problem code: WIK | Time: 1.00 s | Memory: 64 MB | Solved: yes | print

Jaś ma N kamieni ponumerowanych od 1 do N. Na początku każdy kamień znajduje się w osobnym worku.
Jaś chciałby wykonac Q operacji postaci:
0 a b -- jeżeli kamień o numerze a i kamień o numerze b są w tym samym worku to wypisz Tak, inaczej wypisz Nie.
1 a b -- wrzuć wszystkie kamienie, które znajdują sie w tym samym worku co a lub b do jednego worka.
Wejście
W pierwszym wierwszu znajdują się dwie liczby naturalne N i Q (1 <= N, Q <= 105).
W następnych Q wierszach znajduje się po trzy liczby naturalne t, a, b (0 <= t <= 1, 1 <= a, b <= N), gdzie t to typ zapytania, b i a to numery kamieni.

Wyjście
Na każde zapytanie typu 0 wypisz Tak lub Nie.

Przykład
Dla danych wejściowych

5 7
1 2 3
0 2 3
0 1 2
1 4 5
0 3 4
1 3 5
0 2 5
poprawną odpowiedzią jest
Tak
Nie
Nie
Tak