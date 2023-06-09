Dysk twardy
Problem code: DYSKTW | Time: 3.00 s | Memory: 64 MB | Solved: no | print

Producent bajtockich dysków twardych BajtoDisk wypuszcza właśnie na rynek nową serię dysków twardych HugeDisk o pojemnościach dochodzących do kilkuset bajtobajtów. Nowością w tych dyskach ma być specjalne oprogramowanie, które walczy ze zjawiskiem fragmentacji danych — czyli sytuacją, w której jeden plik zapisany jest w wielu częściach na dysku twardym.

Twoim zadaniem jako pracownika BajtoDisku, jest implementacja oprogramowania, które zajmuje kolejne sektory dysku. Dokładniej — należy zaimplementować funkcję, która zajmie jeden wybrany (podany jako argument) sektor dysku oraz wyznaczy numer następnego wolnego sektora.

Napisz program, który wczyta z wejścia operacje zajęcia sektora, które należy dokonać na dysku, i dla każdej takiej operacji wyznaczy numer pierwszego wolnego sektora po aktualnie zajętym.

Wejście
W pierwszym wierszu wejścia znajduje się jedna liczba naturalna N, 1 <= N <= 500 000, określająca liczbę sektorów na dysku.

W kolejnych N wierszach znajdują się kolejne operacje dyskowe — aż do zapełnienia całego dysku. W i+1-szym wierszu znajduje się i-ta operacja. Opis każdej operacji składa się z jednej liczby naturalnej A_i, 1 <= A_i <= N, określającej numer sektora zajmowanego w i-tej operacji. Gwarantowane jest, że wszystkie liczby A_i są parami różne.

Wyjście
Twój program powinien wypisać na wyjście dokładnie N wierszy. W i-tym wierszu wyjścia powinna znaleźć się odpowiedź na i-te zapytanie. Odpowiedź na każde z zapytań powinna składać się z jednej liczby naturalnej określającej numer następnego wolnego sektora (po zajętym w i-tej operacji). Jeśli po danym sektorze nie ma już wolnych sektorów — odpowiedzią na dane zapytanie jest jedno słowo NIE.

Przykład
Dla danych wejściowych

5
4
2
3
5
1
poprawną odpowiedzią jest
5
3
5
NIE
NIE
