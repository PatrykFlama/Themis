Stokrotki
Problem code: STO1 | Time: 2.00 s | Memory: 32 MB | Solved: yes | print

Dana jest tablica o rozmiarach n x m. Elementami tej tablicy są liczby całkowite. Drogą przez tablicę nazywamy m-elementowy ciąg liczb a0,a1,…,am-1 ze zbioru {0,1,2,...,n-1}, taki, że ai-1 - 1 ≤ ai ≤ ai-1 + 1 dla każdego i > 0. Oznacza ona ciąg pól tablicy o współrzędnych (ai, i). Jak łatwo zauważyć, droga :

zaczyna się w pierwszej kolumnie (w dowolnym wierszu),
w kolejnych krokach przechodzi przez kolejne kolumny dla i=0,…,m-1, a numer wiersza w każdym kroku może zmienić się nie więcej niż o jeden,
kończy się w ostatniej kolumnie (w dowolnym wierszu).
Kosztem drogi nazywamy sumę liczb znajdujących się na polach, przez które ona przechodzi.

Wejście
W pierwszym wierszu podana jest liczba naturalna c określająca liczbę zestawów danych. Każdy zestaw zapisany jest w dwóch wierszach. W pierwszym z nich znajdują się dwie liczby n, m – wymiary tablicy (odpowiednio: liczba wierszy i liczba kolumn), oba nie większe od 1000; w drugim – m*n elementów tablicy (pierwszych m liczb to elementy pierwszego wiersza czytane od lewej do prawej, kolejnych m liczb to elementy drugiego wiersza, itd.).

Wyjście
Należy wypisać c wierszy. W i-tym wierszu ma znaleźć się jedna liczba określająca, koszt najtańszej drogi w i-tej tablicy.

Przykład
Dla danych wejściowych

1
2 3
43 76 30 55 66 55
poprawną odpowiedzią jest
139
Uwaga:
Dane w przykładzie odpowiadają tablicy:
43 76 30 
55 66 55
Najtańsza droga prowadzi przez pola zawierające liczby: 43, 66, 30.
