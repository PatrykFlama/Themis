# Zapytania o palindromy (easy)
###### Problem code: PAL_QUE2 \| Time: 2.00 s \| Memory: 128 MB \| Solved: yes \| print

Zadanie
Pan Machenar prosi Cię o pomoc - dostajesz słowo s i musisz realizować następujące operacje:

1 p: znajdź długość palindromu nieparzystego o środku w p-tym znaku
2 p: znajdź długość palindromu parzystego o środku pomiędzy p-tym a p+1-szym znakiem (lub -1 gdy takiego nie ma)

Oczywiście zapytania dotyczą aktualnego słowa i jego literki są numerowane od 1.

#### Wejście
Wpierw słowo o dł <=10^5, potem q <=10^5. Potem q zapytań opisanych wyżej.

#### Wyjście
Dla każdego zapytania typu 2 lub 3 wypisz szukaną długość palindromu.

#### Przykład
Dla danych wejściowych

```
abba
1
2 2
```
poprawną odpowiedzią jest
```
4
```
Dla danych wejściowych
```
baaaaaaaaaaabbaa
3
1 6
1 12
1 7
```
poprawną odpowiedzią jest
```
9
1
13
```
Dla danych wejściowych
```
babacaaaaaaca
10
2 1
2 5
2 6
2 10
2 2
2 10
2 7
2 1
2 1
2 8

```
poprawną odpowiedzią jest
```
-1
-1
2
2
-1
2
4
-1
-1
10
```
