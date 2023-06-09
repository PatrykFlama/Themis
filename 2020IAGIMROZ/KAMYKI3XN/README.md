Kamyki na szachownicy 3
Problem code: KAMYKI3XN | Time: 1.00 s | Memory: 32 MB | Solved: yes | print

Zadanie
Na każdym polu szachownicy o wymiarach 3 x n znajduje się jedna liczba naturalna. Ułóż algorytm, który umieszcza na szachownicy kamyki w taki sposób, że:

na każdym polu znajduje się co najwyżej jeden kamień,
jeśli na polu P znajduje się kamyk, to na polach mających wspólny bok z P nie ma kamyków,
suma liczb z pól, na których leżą kamyki jest maksymalna.
Wejście
W pierwszym wierszu wejścia znajduje się jedna liczba naturalna n - długość szachownicy.

W każdym z trzech następnych wierszy znajduje się ciąg n nieujemnych liczb całkowitych, nie większych od 1000 - są to liczby z kolejnych pól szachownicy.

Ograniczenia
1 ≤ n ≤ 100 000
Wyjście
Na wyjście należy wypisać jedną liczbę, równą maksymalnej sumie liczb z pól, na których można umieścić kamyki zgodnie z podanymi wyżej zasadami.

Przykład
Dla danych wejściowych

4
3 2 2 8
6 10 1 10
2 4 3 8
poprawną odpowiedzią jest
31
