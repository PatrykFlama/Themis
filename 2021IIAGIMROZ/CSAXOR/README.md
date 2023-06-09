A xor B
Problem code: CSAXOR | Time: 3.00 s | Memory: 512 MB | Solved: no | print

To zadanie nie będzie kolejnym A + B na conteście. Dana jest tablica V rozmiaru N i tablica U rozmiaru M. Na ich podstawie budujemy macierz A rozmiaru N x M, gdzie Ai,j = Vi xor Uj.

Mówimy, że wynik podmacierzy jest równy ksorowi wszystkich jej elementów. Znajdź podmacierz o maksymalnym wyniku.

Wejście
W pierwszej linii wejścia znajdują się dwie liczby całkowite N, M (1 ≤ N, M ≤ 103).

Druga linia wejścia zawiera N liczb całkowitych określających tablicę V (0 ≤ Vi < 229).

Trzecia linia wejścia zawiera M liczb całkowitych określających tablicę U (0 ≤ Uj < 229).

Wyjście
Wypisz najwyższy możliwy wynik podmacierzy macierzy A.

Testy przykładowe
Dla danych przykładowych:

3 4
5 3 1
2 1 2 4
poprawną odpowiedzią jest:
7

a dla:
3 3
10 12 4
5 10 9
jest:
15

