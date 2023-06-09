Przeszukiwanie
Problem code: PRZESZU | Time: 5.00 s | Memory: 32 MB | Solved: yes | print

Historyjka, zgodnie z obietnicą, zostanie wymyślona przez Was. Polecam poczytać inne zadania. Propozycje należy wysyłać w komentarzach razem z kodem tego programu. Będziemy czytać tylko accepty, więc musicie najpierw zrobić to zadanie. :)

Niestety nie wyłoniliśmy zwycięzcy :(.

Zadanie
Przejdź cały graf, możesz rozpocząć z dowolnego wierzchołka i użyć ulubionego przeszukiwania grafu (wgłąb, wszerz). Uwaga: graf nie musi być spójny.

Wejście
W pierwszej linii wejścia dane są dwie liczby n i m oznaczające odpowiednio liczbę wierzchołków (?) i liczbę krawędzi (?) między nimi (1 ≤ n ≤ 100 000, 0 ≤ m ≤ 1 000 000). W kolejnych m wierszach znajdują się po dwie liczby a i b oznaczające, że między wierzchołkami a i b znajduje się droga dwukierunkowa (?).

Wyjście
W jedynym wierszu wyjścia należy napisać n liczb: odwiedzone wierzchołki w kolejności zwróconej przez DFS'a lub BFS'a.

Przykład
Dla danych wejściowych:

4 3
1 2
2 3
3 4
jedną z poprawnych odpowiedzi jest:

1 2 3 4
albo:

2 1 3 4
