# Czy to jest podciąg?
###### Problem code: CTABLES2 \| Time: 1.00 s \| Memory: 32 MB \| Solved: yes \| print

Zadanie
Napisz program, który dla danych dwóch ciągów liczb naturalnych sprawdza, czy pierwszy z nich jest podciągiem drugiego.
UWAGA: Ciąg A jest podciągiem ciągu B, jeśli A może powstać z B przez usunięcie niektórych elementów ciągu B (w szczególnych przypadkach wszystkich elementów bądź żadnego elementu).

#### Wejście
W pierwszym wierszu wejścia znajduje się liczba naturalna n (mniejsza od 1000000) określająca długość pierwszego ciągu. W drugim wierszu znajduje się n liczb naturalnych. Są to elementy pierwszego ciągu. W podobny sposób w trzecim i czwartym wierszu znajduje się drugi ciąg.

#### Wyjście
Opis wyjścia.

W jedynym wierszu wyjścia należy wypisać słowo TAK lub NIE, w zależności od tego, czy pierwszy ciąg jest podciągiem drugiego ciągu.
#### Przykłady
Dla danych wejściowych

```
3
2 4 1
7 
2 1 4 2 4 2 1
```
poprawną odpowiedzią jest
```
TAK
```
a dla danych wejściowych
```
3
2 4 1
7 
2 1 4 2 4 2 4
```
poprawną odpowiedzią jest
```
NIE
```
