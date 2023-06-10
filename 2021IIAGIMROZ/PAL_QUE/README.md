# Zapytania o palindromy
###### Problem code: PAL_QUE \| Time: 9.00 s \| Memory: 256 MB \| Solved: no \| print

Pan Machenar prosi Cię o pomoc - dostajesz słowo s i musisz realizować następujące operacje:

1 p x: zamień p-tą literę w słowie na x
2 p: znajdź długość palindromu nieparzystego o środku w p-tym znaku
3 p: znajdź długość palindromu parzystego o środku pomiędzy p-tym a p+1-szym znakiem (lub -1 gdy takiego nie ma)

Oczywiście zapytania dotyczą aktualnego słowa i jego literki są numerowane od 1.

#### Wejście
Wpierw słowo o dł <=10^5, potem q <=10^5. Potem q zapytań opisanych wyżej.

#### Wyjście
Dla każdego zapytania typu 2 lub 3 wypisz szukaną długość palindromu.

#### Przykład
Dla danych wejściowych

```
abcd 3
3 1
1 2 c
3 2
```
poprawną odpowiedzią jest
```
-1
2
```
