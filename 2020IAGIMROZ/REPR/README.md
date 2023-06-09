Listowa reprezentacja grafu
Problem code: REPR | Time: 5.00 s | Memory: 16 MB | Solved: yes | print

Dany jest graf nieskierowany. Dla każdego wierzchołka należy wypisać listę jego sąsiadów.

Wejście
W pierwszej linii wejścia znajdują się dwie liczby całkowite n, m (1 ≤ n ≤ 100000, 0 ≤ m ≤ 200000), oznaczające kolejno liczbę wierzchołków i krawędzi w grafie. W następnych m liniach znajdują się pary liczb całkowitych a, b (1 ≤ a, b ≤ n) oznaczające, że wierzchołki a oraz b są połączone krawędzią. Każda para pojawi się na wejściu co najwyżej raz.

Wyjście
Wyjście powinno składać się z dokładnie n wierszy. W i-tym wierszu należy wypisać zdanie "vertex i has no neighbours", gdy i-ty wierzchołek nie ma żadnych sąsiadów. W przeciwnym wypadku należy wypisać zdanie "vertex i has neighbours", a następnie listę jego sąsiadów w kolejności, w jakiej pojawiły się one na wejściu.

Przykład
Dla danych wejściowych

5 5
1 2
3 2
3 1
5 1
5 2
poprawną odpowiedzią jest
vertex 1 has neighbours 2 3 5
vertex 2 has neighbours 1 3 5
vertex 3 has neighbours 2 1
vertex 4 has no neighbours
vertex 5 has neighbours 1 2
