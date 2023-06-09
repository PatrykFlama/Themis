Stokrotki (trasa)
Problem code: STO2 | Time: 1.00 s | Memory: 32 MB | Solved: yes | print

Zadanie
Dana jest tablica o rozmiarach n na m. Elementami tej tablicy są liczby naturalne. Drogą przez tablicę nazywamy ciąg współrzędnych pól tej tablicy (w0, 0), (w1, 1), …, (wm-1, m-1) taki, że

0 ≤ wi ≤ n-1 dla każdego i = 0, …, m-1,
|wi - wi-1| ≤ 1 dla każdego i = 1, …, m-1.
Kosztem drogi nazywamy sumę liczb znajdujących się na polach, przez które ona przechodzi.

Napisz program znajdujący drogę o najmniejszym koszcie. Jeśli takich dróg jest wiele, program powinien wypisać dowolną z nich.

Wejście
W pierwszym wierszu znajdują się dwie liczby n, m – wymiary tablicy (odpowiednio: liczba wierszy i liczba kolumn), obie nie większe od 1000; w drugim – m*n elementów tablicy (pierwszych m liczb to elementy pierwszego wiersza czytane od lewej do prawej, kolejnych m liczb to elementy drugiego wiersza, itd.).

Wyjście
W jedynym wierszu należy wypisać ciąg w0, w1, … , wm-1 oznaczających współrzędne "wierszowe" pól w najtańszej drodze.

Przykład
Dla danych wejściowych

4 3
2 3 1 
2 1 6
5 0 4
1 4 5
poprawną odpowiedzią jest
0 1 0
