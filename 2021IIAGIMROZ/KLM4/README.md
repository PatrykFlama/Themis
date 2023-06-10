Drogi
Problem code: KLM4 | Time: 2.00 s | Memory: 32 MB | Solved: no | print

W Bajtocji jest n miast. Miasta są połączone jednokierunkowymi drogami. Każda droga łączy tylko dwa miasta i nie przechodzi przez żadne inne. Niestety, nie zawsze z każdego miasta da się dojechać do każdego innego. Król Bajtazar postanowił rozwiązać ten problem. Król ma świadomość, że budowanie nowych dróg jest bardzo kosztowne, a budżet Bajtocji nie jest zbyt zasobny. Dlatego też poprosił Cię o pomoc. Trzeba obliczyć minimalną liczbę jednokierunkowych dróg, które trzeba zbudować, żeby z każdego miasta dało się dojechać do każdego innego miasta.

Zadanie
Napisz program, który:

wczyta opis istniejącej sieci dróg,
obliczy minimalną liczbę dróg, które trzeba dobudować tak, aby z każdego miasta w Bajtocji dało się dojechać do każdego innego,
wypisze wynik.
Wejście
Pierwszy wiersz zawiera dwie liczby całkowite n i m (2 ≤ n ≤ 100 000, 0 ≤ m ≤ 100 000) oddzielone pojedynczym odstępem i oznaczające, odpowiednio, liczbę miast i liczbę dróg w Bajtocji. Miasta są ponumerowane od 1 do n. W każdym z kolejnych m wierszy znajdują się dwie liczby całkowite oddzielone pojedynczym odstępem. W i+1–szym wierszu znajdują się liczby ai i bi (1 ≤ ai, bi ≤ n dla 1 ≤ i ≤ m), reprezentują one jednokierunkową drogę prowadzącą z miasta ai do bi.

Wyjście
Pierwszy i jedyny wiersz wyjścia powinien zawierać dokładnie jedną nieujemną liczbę całkowitą – minimalną liczbę dróg, które trzeba zbudować w Bajtocji tak, aby z każdego miasta dało się dojechać do każdego innego miasta.

Przykład
Dla danych wejściowych

Dla danych wejściowych:
7 11
1 3
3 2
2 1
2 2
3 4
4 5
5 4
3 4
1 6
6 7
7 6
poprawną odpowiedzią jest
2
