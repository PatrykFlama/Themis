Zestawienie cykli permutacji
Problem code: PERMUTACJE2 | Time: 1.00 s | Memory: 32 MB | Solved: no | print

Zadanie
Napisz program, który dla danej permutacji n liczb sporządzi zestawienie długości jej cykli, takie, że:

w każdym wierszu zestawienia ma znajduje się para liczb ( d, ld ) taka, że d oznacza długość cyklu, a ld>0 - liczbą cykli o długości d ,
wiersze są uporządkowane rosnąco według wartości d,
Zwróć uwagę, że w jeśl w permutacji nie ma cykli o długości d, to para d 0 nie występuje w zestawieniu.
Wejście
W pierwszym wierszu znajduje się liczba naturalna n, nie większa od 100000. Jest to długość permutacji.
W drugim wierszu znajduje się permutacja n-elementowa (nazwijmy ją π).

Wyjście
Zestawienie długości cykli permutacji π, sporządzone według powyższego opisu.

Przykład
Dla danych wejściowych

10
2 7 9 4 5 3 1 8 6 10
poprawną odpowiedzią jest
1 4
3 2
Uzasadnienie:
W powyższej permutacji występują następujące cykle: (2 7 1) (4) (5) (9 6 3) (8) (10). Mamy więc 4 cykle 1-elementowe i 2 cykle 3-elementowe.