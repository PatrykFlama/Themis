Drzewo przedział-punkt
Problem code: ITREE0 | Time: 1.00 s | Memory: 16 MB | Solved: yes | print

Zadanie
Zaimplementuj drzewo przedziałowe obsługujące następujące operacje:

dodaj wartość x do każdego elementu na przedziale domkniętym [a, b],
wypisz aktualną wartość w punkcie p.
Wejście
Liczba operacji do wykonania n (1 <= n <= 100 000).

Dalej n wierszy, każdy jednej z tych postaci:

1 a b c - dodaj wartość c na przedziale [a, b] (1 <= a <= b <= 100 000, 1 <= c <= 1000),
0 a - wypisz wartość w punkcie a.
Wyjście
Odpowiedni wynik dla każdej operacji postaci: 0 a.

Przykład
Dla danych wejściowych

5
1 1 3 2
1 3 5 1
0 2
1 4 5 3
0 5
poprawną odpowiedzią jest

2
4
