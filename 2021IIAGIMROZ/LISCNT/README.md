# Policz lisy!
###### Problem code: LISCNT \| Time: 3.00 s \| Memory: 64 MB \| Solved: no \| print

Uczestnicy obozu w Przesiece wiedzą już jak policzyć długość podciągu rosnącego. Co więcej, potrafią nawet wskazać jakiś przykładowy. Ale nurtuje ich jeszcze jedno pytanie: Ile tak naprawdę takich najdłuższych podciągów jest?

#### Wejście
Na wejściu podana jest najpierw liczba testów t. Następnie znajdują się opisy kolejnych testów. Zaczynają się one jedną liczbą całkowitą n a kończą n liczbami całkowitymi nie większymi od miliarda. Łączna długość ciągów będzie nie większa od miliona.

#### Wyjście
Dla każdego testu wypisz długość najdłuższego podciągu rosnącego oraz odpowiedź na pytanie nurtujące uczestników obozu informatycznego. No dobra, ułatwimy zadanie. Wypisz te liczby modulo 1000000007 (miliard+7)

#### Przykład
Dla danych wejściowych

```
2
5
1 3 2 2 4
3
3 2 1
```
poprawną odpowiedzią jest
```
3 3
1 3
```
