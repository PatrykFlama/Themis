# Liczba wyborów symetrycznych
###### Problem code: LWS \| Time: 1.00 s \| Memory: 32 MB \| Solved: no \| print

Dane są dwa ciągi słów (x_1, x_2, ..., x_n) oraz (y_1, y_2, ..., y_n)$. Kolejno dla każdego i od 1 do n wybieramy jedno z dwóch słów: x_i albo y_i i wybrane słowa składamy (kolejne wybrane słowo dopisujemy do poprzednich z prawej strony). Wybór składa się z decyzji, czy w kolejnym kroku wybrać odpowiedni i-ty wyraz z pierwszego, czy z drugiego ciągu słów. Bardziej formalnie: wybór jest wyrazowym ciągiem liczb 1 lub 2. Różne wybory mogą dać w wyniku to samo słowo. Wybór nazywamy symetrycznym, gdy jego wynikiem jest palindrom -- tzn. takie słowo, które nie zmienia się, gdy je czytamy od strony prawej do lewej.

Znajdź liczbę wszystkich wyborów symetrycznych dla tych dwóch ciągów słów.

#### Wejście
W pierwszym wierszu standardowego wejścia jest zapisana jedna liczba całkowita dodatnia n (n ≤ 30). W następnych wierszach są zapisane kolejne słowa ciągu (x_i) -- każde w osobnym wierszu. W następnych wierszach są zapisane, w taki sam sposób, kolejne słowa ciągu (y_i). Wszystkie słowa składają się wyłącznie z małych liter alfabetu angielskiego od a do z i mają łączną długość nie mniejszą niż 1 i nie większą niż 400.

#### Wyjście
Na standardowe wyjście należy zapisać jedną liczbę całkowitą nieujemną, a mianowicie liczbę wszystkich wyborów symetrycznych.

#### Przykład
Dla danych wejściowych

```
5
ab
a
a
ab
a
a
baaaa
a
a
ba
```
poprawną odpowiedzią jest

```
12
```
