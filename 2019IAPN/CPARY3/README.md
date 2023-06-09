# Sortowanie prostokątów
###### Problem code: CPARY3 \| Time: 1.00 s \| Memory: 32 MB \| Solved: yes \| print

Zadanie
Dane są rozmiary n prostokątów. Napisz program wypisujący te prostokąty w porządku malejących pól. Prostokąty o tym samym polu mają być wypisane według rosnących obwodów.

#### Wejście
W pierwszym wierszu wejścia jest jedna liczba całkowita n (0 < n < 100000) - liczba prostokątów. W kolejnych n wierszach - pary liczb całkowitych a b (0 < a ≤ b < 1000000), oznaczających długości boków prostokąta. Na pierwszym miejscu podana jest długość krótszego (a dokładniej nie dłuższego) boku.

#### Wyjście
W i-tym wierszu należy wypisać długości boków i-tego (w wyżej opisanym uporządkowaniu) prostokąta.

#### Przykład
Dla danych wejściowych

```
4 
2 5
1 8
2 4
3 4 
```
poprawną odpowiedzią jest
```
3 4
2 5
2 4
1 8
```
