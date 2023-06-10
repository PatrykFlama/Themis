Jogging
Problem code: JOGGING | Time: 1.00 s | Memory: 32 MB | Solved: yes | print

Krowy chcą zostać lepszymi sportowcami, więc Basia postanowiła spędzić na bieżni dokładnie N (1 ≤ N ≤ 10,000) minut. Podczas każdej minuty może wybrać czy chce biec, czy odpoczywać.

Ostateczna odległość jaką Basia przebiegnie zależy jednak od jej 'współczynnika zmęczenia', który początkowo wynosi 0. Jeżeli podczas i-tej minuty zdecyduje się biec, przebiegnie odległość równą D_i (1 ≤ Di ≤ 1,000), a jej współczynnik zmęczenia zwiększy się o 1. Współczynnik ten nie może jednak przekroczyć M (1 ≤ M ≤ 500). Jeżeli jednak Basia w i-tej minucie zdecyduje się odpocząć, jej współczynnik zmęczenia zmaleje o 1. Basia nie może ponownie powrócić do biegu dopóki jej współczynnik zmęczenia nie wyniesie 0. Gdy wynosi on 0, Basia może zdecydować się odpocząć albo biec.

Pod koniec N minutowego treningu współczynnik zmęczenia musi wynosić dokładnie 0, w przeciwnym wypadku Basia nie będzie miała wystarczająco dużo sił na dalszą część dnia!

Znajdź maksymalną odległość jaką Basia może przebiec.

Wejście
* Linia 1: Dwie liczby całkowite oddzielone spacją: N oraz M.
* Linie 2..N+1: Linia i+1 zawiera jedną liczbę całkowitą: D_i.
Wyjście
* Linia 1: Jedna liczba całkowita oznaczająca największą odległość jaką Basia może przebiec, spełniając powyższe warunki.

Przykład
Dla danych wejściowych

5 2
5
3
4
2
10
poprawną odpowiedzią jest
9
