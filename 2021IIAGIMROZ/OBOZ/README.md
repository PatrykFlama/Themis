Korytarze
Problem code: OBOZ | Time: 1.00 s | Memory: 32 MB | Solved: yes | print

Odbywa się obóz informatyczny. Kadra, by zapobiec ewentualnym ucieczkom umieściła wszystkich uczestników w skomplikowanym, przeogromnym labiryncie. Początku każdego korytarza pilnuje odźwierny i przepuszcza ludzi tylko i wyłącznie idących w jedną stronę. Odźwiernego nie można pobić, wysadzić w powietrze ani przekupić. Jest m korytarzy poprowadzonych między n salami. Kadra wymyśliła sobie tak skomplikowany system, by zapobiec ucieczkom, ale sama stała się jego ofiarą (odźwierni zbuntowali się przeciw kadrze i nie chcą ich przepuszczać) i teraz oni również będą uwięzieni (mogą wejść przez każdy z pokojów). Jeśli prowadzący X może z pokoju a dojść do pokoju b oraz wrócić do a, to nie boi się prowadzić wykładów w pokoju b i a. Postanowili się podzielić tak całym budynkiem, aby w każdym pokoju mógł być prowadzony co najmniej jeden wykład. Ilu co najmniej było prowadzących?

Zadanie
Dla danego opisu budynku policz ilu co najmniej było wykładowców.

Wejście
W pierwszej linii dane są dwie liczby n,m n<1000, m<1000000, w kolejnych m liniach znajdują się opisy połączeń pomiędzy salami(korytarzy) składające się z liczb ai, bi oznaczające, że istnieje korytarz z sali a do sali b oraz, że odźwierny przepuszcza tylko ludzi idących z a do b;

Wyjście
Jedna liczba - minimalna liczba wykładowców.

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
4

