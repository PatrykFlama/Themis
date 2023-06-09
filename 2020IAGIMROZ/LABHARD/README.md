Labirynt kontratakuje
Problem code: LABHARD | Time: 1.00 s | Memory: 32 MB | Solved: yes | print

Zadanie
Znowu zgubiliście się w labiryncie, jednakże tym razem umiecie chodzić po przekątnych! Labirynt to plansza N × M złożona z cyfr 0, 1 oraz 2. 0 oznacza wolne pole, 1 oznacza pole zabronione, a 2 oznacza wasz cel. Zaczynacie w polu o współrzędnych (1,1) (czyli lewy górny róg) i chcecie dotrzeć do 2. Z danego pola możecie przemieścić się do wszystkich pól, które stykają się z nim krawędzią lub rogiem (jest zatem 8 takich pól). Napisz program, który dla danej planszy stwierdzi, czy da się dotrzeć z początkowego miejsca do celu.

Wejście
W pierwszym wierszu standardowego wiersza znajdują się dwie liczby naturalne N, M oznaczające wymiary planszy. W następnych N wierszach znajduje się po M cyfr oddzielonych pojedynczymi spacjami ze zbioru {0, 1, 2}. Masz pewność, że pojawi się dokładnie jedna cyfra 2.

Wyjście
W jednym wierszu wyjścia powinno znaleźć się 1, jeśli da się dojść do 2 oraz 0 w przeciwnym wypadku.

Ograniczenia
1 ≤ N, M ≤ 100

Przykład
Dla danych wejściowych

3 5
0 0 1 1 0
0 1 0 1 1
0 1 1 0 2
poprawną odpowiedzią jest
1
Dla danych wejściowych

3 4
0 1 1 1
0 1 2 1
0 1 1 1
poprawną odpowiedzią jest
0
