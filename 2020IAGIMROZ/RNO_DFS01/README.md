Rozmiary wszystkich poddrzew
Problem code: RNO_DFS01 | Time: 2.00 s | Memory: 32 MB | Solved: yes | print

Dane jest drzewo T o wierzchołkach {1, 2, ..., n}, ukorzenione w wierzchołku nr 1. Niech T(u) oznacza poddrzewo drzewa T, którego korzeniem jest wierzchołek u. W szczególności jest T=T(1).
Należy wypisać rozmiary, tj. liczbę wierzchołków, wszystkich poddrzew T(1), T(2), ..., T(n).

Wejście
Standardowo, w pierwszym wierszu dane są dwie liczby n, m (1 ≤ n ≤ 100000, 0 ≤ m < n), które oznaczają odpowiednio liczbę wierzchołków i krawędzi w drzewie. Następnie w m wierszach zapisane są krawędzie w postaci par liczb a, b (1 ≤ a, b ≤ n).

Wyjście
Na wyjście należy wpisać rozmiary poddrzew T(1), T(2), ..., T(n).

Przykład
Dla danych wejściowych

13 12
9 5
1 2
5 12
7 11
5 4
3 4
5 13
3 6
6 7
3 10
1 8
2 3
poprawną odpowiedzią jest
13 11 10 5 4 3 2 1 1 1 1 1 1
