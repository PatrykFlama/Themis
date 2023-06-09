Drobnostka
Problem code: INSSUMSEG | Time: 10.00 s | Memory: 64 MB | Solved: yes | print

Kolejne zadanie z cyklu "Ha proste! Zwykłe drzewo przedziałowe!". Na szczęście autor nie ma pomysłu na długą i nudną historyjkę. Wystarczy mu, że potwierdzisz odważne słowa z pierwszego zdania treści.

Zadanie
Napisz program, który dla danej tablicy liczb będzie potrafił obsługiwać operacje dwóch rodzajów:

1) Update A B val - Wstawienia elementu val na przedział od A do B włącznie.
2) Query A B - Odczytanie sumy na przedziale od A do B włącznie .
Wejście
W pierwszym wierszu wejścia znajduje się jedna liczba całkowita 1 <= n <= 1,000,000 oznaczająca ilość komórek w tablicy.

Drugi wiersz zawiera n liczb naturalnych, gdzie n_i <= 1,000,000,000 oznacza liczbę na i-tej pozycji dla początkowego stanu tabeli.

Trzeci wiersz zawiera jedną liczbę całkowitą 1 <= m <= 1000,000 oznaczającą liczbę operacji, które chcemy wykonać na tablicy.

Kolejne m wierszy zawiera zapytania zgodnie ze specyfikacją powyżej (1<=A<=B<=n, 0<=val<=1,000,000,000).

Wyjście
W osobnych wierszach wypisz w kolejności chronologicznej odpowiedzi na pytania drugiego rodzaju. Możesz założyć, że na wejściu jest przynajmniej jedno takie zapytanie.

Przykład
Dla danych wejściowych

3
1 0 3
4
Query 2 3
Update 2 3 4
Update 2 2 10
Query 1 3
poprawną odpowiedzią jest
3
15
