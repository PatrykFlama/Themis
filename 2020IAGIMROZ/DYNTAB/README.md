Dynamiczna posortowana tablica
Problem code: DYNTAB | Time: 10.00 s | Memory: 128 MB | Solved: yes | print

Twoim celem jest napisać dynamiczną tablicę, która będzie stale posortowana niemalejąco i umożliwia następujące operacje:

add x - umieść w nowej komórce tablicy liczbę x,
remove x - usuń pojedyncze wystąpienie liczby x z tablicy,
query k - podaj wartość k-tego elementu tablicy.
Wejście
W pierwszym wierszu wejścia znajduje się jedna liczba naturalna Q, określająca liczbę zapytań do tablicy. W kolejnych Q wierszach znajduje się opis kolejnych operacji zgodnie z opisem powyżej.

Możesz założyć, że operacje są sensowne - tzn. nie nastąpi usunięcie z tablicy liczby, której w niej nie ma, lub zapytania o nieistniejącą pozycję w tablicy.

Wyjście
Dla każdego zapytania query wypisz szukaną odpowiedź.

Ograniczenia
1 <= N <= 500 000.

Wartości x są liczbami naturalnymi dodatnimi, co najwyżej 10^9.

Przykład
Dla danych wejściowych

11
add 3
add 7
query 0
query 1
add 5
query 0
query 1
query 2
remove 3
query 0
query 1
poprawną odpowiedzią jest
3
7
3
5
7
5
7
