Sale wykładowe
Problem code: OBOZ2 | Time: 1.00 s | Memory: 32 MB | Solved: yes | print

Odbywa się obóz informatyczny. Kadra, by zapobiec ewentualnym ucieczkom umieściła wszystkich uczestników w skomplikowanym, przeogromnym labiryncie. Początku każdego korytarza pilnuje odźwierny i przepuszcza ludzi tylko i wyłącznie idących w jedną stronę. Odźwiernego nie można pobić, wysadzić w powietrze ani przekupić. Jest m korytarzy poprowadzonych między n salami. Kadra wymyśliła sobie tak skomplikowany system, by zapobiec ucieczkom, ale sama stała się jego ofiarą (odźwierni zbuntowali się przeciw kadrze i kadra teraz też jest ograniczona tak jak uczestnicy). Jeśli prowadzący X może z pokoju a dojść do pokoju b oraz wrócić do a, to nie boi się prowadzić wykładów w pokoju b i a. Obóz jest obozem i zajęcia trzeba prowadzić. Wykładowcy postanowili się podzielić tak całym budynkiem, aby w każdym pokoju mógł być prowadzony co najmniej jeden wykład (wykładowca mogą wejść do labiryntu w dowolnym z pokoi). Wypisz numery sal, w których wykłady prowadzi najbardziej zapracowany wykładowca (ten który ma dostęp do największej liczby sal). Jeśli istnieje więcej niż jeden najbardziej zapracowany prowadzący, wypisz ten ciąg sal, w którym znajduje się sala o jak najmniejszym numerze. Sale wypisuj w kolejności rosnących numerów.

Zadanie
Dla danego opisu budynku wypisz szukany ciąg sal..

Wejście
W pierwszej linii dane są dwie liczby n,m n<1000, m<1000000, w kolejnych m liniach znajdują się opisy połączeń pomiędzy salami(korytarzy) składające się z liczb ai, bi oznaczające, że istnieje korytarz z sali a do sali b oraz, że odźwierny przepuszcza tylko ludzi idących z a do b;

Wyjście
W pierwszym wierszu liczba k - liczba sal z ciągu, następnie k liczb oznaczający numery sal z szukanego ciągu.

Przykład
Dla danych wejściowych

10 10
3 5
5 2
5 9
9 10
2 6
6 1
1 4
4 8
8 7
8 3

poprawną odpowiedzią jest
7
1
2
3
4
5
6
8

