Krajobraz po Chucku Norrisie
Problem code: CHUCK | Time: 1.00 s | Memory: 32 MB | Solved: yes | print

Na eksperymentalnym poligonie armia wybudowała pole minowe złożone z n pól ułożonych jedno za drugim, ponumerowanych od 1 do n. W każdym umieścili minę.

Potem po niektórych polach przebiegł Chuck Norris, i miny tam umieszczone wybuchły.

Jednym z pól, na których nie ma już miny jest pole numer 1. Stoi na nim Lao, chiński tyczkarz. Lao ma trzy tyczki, w tym jedną chińską. Każda z nich pozwala mu przeskakiwac o określoną liczbę pól do przodu. Przy czym chińskiej tyczki można użyć tylko raz ;).

Jak daleko Lao może przeskoczyć?

Zadanie
Oblicz numer najdalej położonego pola, w którym może stanąć Lao.

Wejście
W pierwszej linii znajduje się jedna liczba n - długość pola minowego (1 ≤ n ≤ 1000000). W drugiej linii znajdują się trzy liczby opisujące długości skoków umożliwianych przez tyczki Lao, przy czym trzecia liczba opisuje zasięg chińskiej tyczki. Każda z tych trzech liczb jest większa lub równa 1 i mniejsza od n. W trzeciej linii znajduje się n liczb naturalnych. Każda jest równa 0 lub 1, gdzie 1 oznacza pole zaminowane, a 0 pole wolne (na którym stanął Chuck). Możesz założyć, że na polu nr 1 nie znajduje się mina.

Wyjście
W jedynej linii wypisz numer najdalej położonego pola, do którego może doskoczyć Lao.

Przykład
Dla danych wejściowych

10
1 2 4
0 1 1 1 0 1 0 1 1 1
poprawną odpowiedzią jest

7