Bug (A - runda druga)
Problem code: PA08BUG | Time: 8.00 s | Memory: 64 MB | Solved: no | print

Twój kalendarz elektroniczny ma błąd, czyli coś, co informatycy nazywają bugiem. Otóż nie można do niego wpisywać liczb całkowitych parzystych.

Planujesz pojechać służbowo z Bajtogrodu do Bitowic. Oczywiście, najlepiej by było przybyć do celu najkrótszą trasą. Po powrocie długość trasy będziesz musiał wprowadzić do kalendarza w celu rozliczenia wydatków, więc musi ona być liczbą nieparzystą.

Ze względu na to, że błąd w kalendarzu pewnie jeszcze przez długie lata nie zostanie poprawiony, a sieć dróg w Bajtocji będzie prawdopodobnie ulegać wielokrotnym przebudowom, postanowiłeś napisać program, który będzie Ci pomagał w takich sytuacjach w przyszłości.

Zadanie
Napisz program, który:

wczyta ze standardowego wejścia opis mapy Bajtocji,
wyznaczy długość najkrótszej trasy nieparzystej długości między Bajtogrodem a Bitowicami lub stwierdzi, że taka trasa nie istnieje,
wypisze wynik na standardowe wyjście.
Wejście
W pierwszym wierszu wejścia znajdują się dwie liczby całkowite n oraz m (2 <= n <= 200 000, 0 <= m <= 500 000), oddzielone pojedynczym odstępem i oznaczające liczbę miast i liczbę dróg w Bajtocji. Miasta są ponumerowane od 1 do n; Bajtogród ma numer 1, a Bitowice - numer n.

Kolejne m wierszy przedstawia sieć dróg Bajtocji. Każdy z nich zawiera trzy liczby całkowite pooddzielane pojedynczymi odstępami a,b,c (1 <= a,b <= n, a != b, 1 <= c <= 1000), oznaczające, że między miastami o numerach a i b prowadzi dwukierunkowa droga o długości c.

Wyjście
W pierwszym i jedynym wierszu wyjścia należy wypisać jedną liczbę całkowitą - długość najkrótszej trasy nieparzystej długości między Bajtogrodem a Bitowicami. Wyznaczona trasa może odwiedzać pewne miasta i drogi wielokrotnie. Zmiany kierunku jazdy na trasie (w tym zawracanie) mogą następować jedynie w miastach. Jeśli poszukiwana trasa nie istnieje, należy wypisać 0.

Przykład
Dla danych wejściowych:

6 7
1 2 1
2 6 1
1 3 1
5 6 1
3 5 2
3 4 1
5 4 4
poprawną odpowiedzią jest:

7
