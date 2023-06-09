# Sortowanie par III
###### Problem code: CPARY4 \| Time: 5.00 s \| Memory: 9 MB \| Solved: yes \| print

Zadanie
Danych jest n par liczb naturalnych. Napisz program wypisujący te pary w porządku niemalejących wartości NWD składowych tych par. Pary o tej samej wartości NWD swoich składowych mają być wypisane w kolejności niemalejących różnic składowych. Pary, które nie różnią się ani wartością NWD składowych ani wartością różnicy składowych mają być wypisane w kolejności niemalejących wartości pierwszej składowej.

#### Wejście
W pierwszym wierszu wejścia jest jedna liczba całkowita n (0 < n < 100000) - liczba par. W kolejnych n wierszach - pary liczb całkowitych a b (0 < a ≤ b < 1000000). Możesz założyć, że w każdej parze pierwsza składowa jest nie większa niż druga składowa.

#### Wyjście
W i-tym wierszu należy wypisać i-tą (w wyżej opisanym uporządkowaniu) parę.

#### Przykład
Dla danych wejściowych

```
5 
12 14
5 24
3 7
2 4
6 10
```
poprawną odpowiedzią jest
```
3 7
5 24
2 4
12 14
6 10
```
