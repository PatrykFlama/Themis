A Ty jak szybko piszesz Dijkstrę?
Problem code: DIJFAST | Time: 5.00 s | Memory: 256 MB | Solved: yes | print

Karol jest wspaniałym programistą. Każdego dnia z rana budzi się i dla treningu pisze pięć razy z rzędu algorytm Dijkstry. Dzięki temu osiągnął już ten niesamowity poziom i pisze Dijkstrę w 2:21! Czy potrafisz to zrobić tak szybko jak on?

Wejście
W pierwszym wierszu wejścia dane są dwie liczby naturalne N, M (2 ≤ N ≤ 300000, 1 ≤ M ≤ 500000) oznaczające liczbę wierzchołków i liczbę krawędzi grafu. W każdym z kolejnych M wierszów wejścia znajdują się trzy liczby ai, bi, ci (1 ≤ ai, bi ≤ N, ai ≠ bi, 0 ≤ ci ≤ 109) oznaczające, że w grafie istnieje krawędź z wierzchołka ai do wierzchołka bi o koszcie ci.

Wyjście
W pierwszym wierszu wyjścia należy wypisać N liczb, i-tą liczbą powinna być najkrótsza odległość od wierzchołka o numerze 1 do wierzchołka o numerze i lub -1, gdy nie istnieje ścieżka od wierzchołka o numerze 1 do wierzchołka o numerze i.

Test przykładowy
Dla danych przykładowych:

7 8
1 3 1
1 2 0
1 4 2
3 4 0
2 4 5
4 5 1
5 6 2
4 6 4
poprawną odpowiedzią jest:
0 0 1 1 2 4 -1
Nagroda za wbicie zadania
https://youtu.be/43jP5p8IV4o

Note: Graf jest skierowany.
