# Sumy przedziałów
###### Problem code: SUMY2 \| Time: 12 s \| Memory: 32 MB \| Solved: yes \| print

Zrealizuj strukturę danych, w której będą możliwe następujące operacje:

* A x y - add(x,y) - dodaj do komórki nr x wartość y
* S a b - sum(a,b) - zwróć sumę komórek o numerach a, a+1, ..., b

Za pomocą swojej struktury zasymuluj jej działanie dla przykładowych operacji podanych na standardowym wejściu. Instrukcje będą zapisane w osobnych wierszach i oznaczone jak wyżej

#### Wejście
W pierwszym wierszu dana jest liczba zestawów danych (nie większa niż 30). Każdy zestaw to ciąg instrukcji zapisanych w osobnych wierszach, zakończony instrukcją: K 0 0 Możesz założyć, że zawsze będzie 0 ≤ x, a, b ≤ 1'000'000, -1'000'000 ≤ y ≤ 1'000'000. W każdym teście, wszystkich instrukcji jest co najwyżej 1 000 000.

#### Wyjście
Dla każdego zestawu danych wypisz wyniki instrukcji S x y.

#### Przykład
Dla danych wejściowych
```
2
A 1 5
A 0 9
A 2 3
S 0 2
S 0 1
S 0 0
A 1 -5
S 0 2
S 0 1
S 0 0
K 0 0
S 0 2
S 0 1
S 0 0
A 1 -5
S 0 2
S 0 0
K 0 0
```
poprawną odpowiedzią jest
```
17
14
9
12
9
9
0
0
0
-5
0
```