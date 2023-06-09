Samotny Piotrus wśród par
Problem code: SOLVE_SPWP | Time: 3.00 s | Memory: 5 MB | Solved: yes | print

Zadanie
Samotny jeździec... Wsród talii kart jest N par oznaczonych tym samym numerem i jedna karta bez pary (Piotruś).
Znajdź Piotrusia!
Napisz program, który: wczyta talię kart, znajdzie Piotrusia i wypisze go na standardowe wyjscie.

Wejście
W pierwszym wierszu wejscia znajduje się jedna liczba naturalna N, okreslająca liczbę par. W drugim (ostatnim)
wierszu wejścia znajduje się ciąg 2N + 1 liczb naturalnych Ai — numery zapisane na kolejnych kartach talii.
Ciąg numerów na kartach zawiera N + 1 róznych liczb, N sposród nich występuje dwukrotnie, jedna zaś jednokrotnie.
1 <= N <= 1 000 000, 1 <= Ai <= 10^9.

Wyjście
W pierwszym i jedynym wierszu wyjścia powinna się znaleźć jedna liczba całkowita — Piotruś (liczba, która
występuje dokładnie raz zamiast dwóch razy w ciągu wejsciowym).

Przykład
Dla danych wejściowych

3
6 2 2 7 6 4 4
poprawną odpowiedzią jest
7
