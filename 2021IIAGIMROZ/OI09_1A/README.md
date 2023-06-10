# Koleje
###### Problem code: OI09_1A \| Time: 1.00 s \| Memory: 64 MB \| Solved: yes \| print

Bajtockie Koleje Państwowe postanowiły pójść z duchem czasu i wprowadzić do swojej oferty połączenie InterCity. Ze względu na brak sprawnych lokomotyw, czystych wagonów i prostych torów można było uruchomić tylko jedno takie połączenie. Kolejną przeszkodą okazał się brak informatycznego systemu rezerwacji miejsc. Napisanie głównej części tego systemu jest Twoim zadaniem.

Dla uproszczenia przyjmujemy, że połączenie InterCity przebiega przez n miast ponumerowanych kolejno od 1 do n (miasto na początku trasy ma numer 1, a na końcu n). W pociągu jest m miejsc i między żadnymi dwiema kolejnymi stacjami nie można przewieźć większej liczby pasażerów.

System informatyczny ma przyjmować kolejne zgłoszenia i stwierdzać, czy można je zrealizować. Zgłoszenie jest akceptowane, gdy na danym odcinku trasy w pociągu jest wystarczająca liczba wolnych miejsc, w przeciwnym przypadku zgłoszenie jest odrzucane. Nie jest możliwe częściowe zaakceptowanie zgłoszenia, np. na część trasy, albo dla mniejszej liczby pasażerów. Po zaakceptowaniu zgłoszenia uaktualniany jest stan wolnych miejsc w pociągu. Zgłoszenia przetwarzane są jedno po drugim w kolejności nadchodzenia.

Zadanie
Napisz program, który:

wczyta ze standardowego wejścia opis połączenia oraz listę zgłoszonych rezerwacji,
obliczy które zgłoszenia zostaną przyjęte, a które odrzucone,
zapisze na standardowe wyjście odpowiedzi na wszystkie zgłoszenia.
#### Wejście
W pierwszym wierszu znajdują się trzy liczby całkowite n, m i z (1<=n<=60 000, 1<=m<=60 000, 1<=z<=60 000) pooddzielane pojedynczymi odstępami, oznaczające odpowiednio: liczbę miast na trasie, liczbę miejsc w pociągu i liczbę zgłoszeń. W kolejnych z wierszach opisane są kolejne zgłoszenia. W wierszu o numerze i+1 opisane jest i-te zgłoszenie. Zapisane są w nim trzy liczby całkowite p, k i l $(1<=p<k<=n, 1<=l<=m)$ pooddzielane pojedynczymi odstępami, oznaczające odpowiednio: numer stacji początkowej, numer stacji docelowej i wymaganą liczbę miejsc.

#### Wyjście
Twój program powinien wypisać z wierszy. W i-tym wierszu powinien zostać zapisany dokładnie jeden znak:

T - jeśli i-te zgłoszenie zostało zaakceptowane,
N - w przeciwnym przypadku.
#### Przykład
Dla pliku danych:

```
4 6 4
1 4 2
1 3 2
2 4 3
1 2 3
```
poprawną odpowiedzią jest:
```
T
T
N
N
```
