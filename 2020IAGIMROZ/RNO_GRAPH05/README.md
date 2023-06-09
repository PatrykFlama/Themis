d-odległe wierzchołki
Problem code: RNO_GRAPH05 | Time: 2.00 s | Memory: 32 MB | Solved: yes | print

Dany jest graf zawierający n wierzchołków i m krawędzi. Dla danego wierzchołka s oraz liczby d, należy wypisać wszystkie wierzchołki, z których najkrótsza droga do s zawiera dokładnie d krawędzi.

Wejście
W pierwszym wierszu dane są cztery liczby n, m, s, d (1 ≤ n, s ≤ 100000, 1 ≤ d ≤ m ≤ 500000). Następnie w m wierszach zapisane są krawędzie w postaci par liczb a, b (1 ≤ a, b ≤ n).

Wyjście
Na wyjście należy wpisać wszystkie numery wierzchołków o zadanej odległości od s. Numery wierzchołków należy wypisać w kolejności rosnącej. Możesz założyć, że zawsze będzie co najmniej jeden taki wierzchołek.

Przykład
Dla danych wejściowych

9 7 6 2
2 3
6 9
1 2
6 7
6 5
4 5
7 8
poprawną odpowiedzią jest
4 8
