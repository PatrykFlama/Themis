Komiwojażer Bajtazar
Problem code: OI09_1B | Time: 1.00 s | Memory: 32 MB | Solved: yes | print

Komiwojażer Bajtazar ciężko pracuje podróżując po Bajtocji. W dawnych czasach komiwojażerowie sami mogli wybierać miasta, które chcieli odwiedzić i kolejność w jakiej to czynili, jednak te czasy minęły już bezpowrotnie. Z chwilą utworzenia Centralnego Urzędu d/s Kontroli Komiwojażerów, każdy komiwojażer otrzymuje z Urzędu listę miast, które może odwiedzić i kolejność w jakiej powinien to uczynić. Jak to zazwyczaj bywa z centralnymi urzędami, narzucona kolejność odwiedzania miast nie ma zbyt dużo wspólnego z kolejnością optymalną. Przed wyruszeniem w trasę Bajtazar chciałby przynajmniej dowiedzieć się, ile czasu zajmie mu odwiedzenie wszystkich miast – obliczenie tego jest Twoim zadaniem.

Miasta w Bajtocji są ponumerowane od 1 do n. Numer 1 ma stolica Bajtocji, z niej właśnie rozpoczyna podróż Bajtazar. Miasta połączone są siecią dróg dwukierunkowych. Podróż między dwoma miastami bezpośrednio połączonymi drogą zawsze zajmuje 1 jednostkę czasu. Ze stolicy można dotrzeć do wszystkich pozostałych miast Bajtocji. Jednak sieć dróg została zaprojektowana bardzo oszczędnie, stąd drogi nigdy nie tworzą cykli.

Zadanie
Napisz program, który:

wczyta ze standardowego wejścia opis sieci dróg Bajtocji oraz listę miast, które musi odwiedzić Bajtazar,
obliczy sumaryczny czas podróży Bajtazara,
wypisze go na standardowe wyjście.
Wejście
W pierwszym wierszu standarowego wejścia zapisana jest jedna liczba całkowita n równa liczbie miast w Bajtocji, 1 ≤ n ≤ 30000. W kolejnych n-1 wierszach opisana jest sieć dróg – w każdym z tych wierszy są zapisane dwie liczby całkowite a i b (1 ≤ a, b ≤ n, a ≠ b), oznaczające, że miasta a i b połączone są drogą. W wierszu o numerze n+1 zapisana jest jedna liczba całkowita m równa liczbie miast, które powinien odwiedzić Bajtazar, 1 ≤ m ≤ 5000. W następnych m wierszach zapisano numery kolejnych miast na trasie podróży Bajtazara – po jednej liczbie w wierszu.

Wyjście
W pierwszym i jedynym wierszu standardowego wyjścia powinna zostać zapisana jedna liczba całkowita równa łącznemu czasowi podróży Bajtazara.

Przykład
Dla danych wejściowych:

5
1 2
1 5
3 5
4 5
4
1
3
2
5
poprawną odpowiedzią jest:
7
