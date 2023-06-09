# Ciąg palindromiczny
###### Problem code: CTABLES6 \| Time: 1.00 s \| Memory: 16 MB \| Solved: yes \| print

Zadanie
Napisz program, który sprawdza, czy dany ciąg jest palindromiczny, tzn. czy równe są jego pierwszy i ostatni element, jego drugi i przedostatni element, itd..

#### Wejście
W jedynym wierszu znajduje się ciąg a1, a2,...,an liczb naturalnych, zakończony liczbą -1. Możesz założyć, że n≤1000000.

#### Wyjście
Na wyjściu ma znaleźć się liczba 1, jeśli ciąg jest palindromiczny, tzn. jeśli a1=an, a2=an-1, itd... . W przeciwnym razie na wyjściu ma znaleźć się liczba 0.

#### Przykład
Dla danych wejściowych

```
1 22 3 22 1 -1
```
poprawną odpowiedzią jest
```
1
```
a dla danych
```
1 22 3 2 1 -1
```
poprawną odpowiedzią jest
```
0
```
