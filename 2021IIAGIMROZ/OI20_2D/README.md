# Konewka
###### Problem code: OI20_2D \| Time: 10.00 s \| Memory: 64 MB \| Solved: no \| print

Zostałeś ogrodnikiem u królowej Bajtoliny. Wspaniale, prawda? Skoro tak uważasz, to chyba jeszcze nie wiesz wszystkiego o tej pracy. Obok zamku królowej znajduje się wielki ogród z drzewami ustawionymi po kolei jedno za drugim. To jeszcze nic strasznego, ale czy potrafisz o każdej porze dnia i nocy odpowiedzieć swojej władczyni, które z jej drzewek są teraz dojrzałe? Zakładamy, że drzewo jest dojrzałe, gdy ma przynajmniej k bajtymetrów wysokości.

Czasem królowa prosi Cię, abyś niektóre z jej drzewek podlał za pomocą magicznej konewki. Każda taka operacja powoduje, że wszystkie podlane drzewa rosną o dokładnie jeden bajtymetr.

Udowodnij, że nadajesz się do tej pracy i szybko odpowiedz na wszystkie pytania królowej!

#### Wejście
Uwaga: To zadanie ma dziwny format wejścia, aby wymóc na Was odpowiedzi online. Proszę zwrócić na to szczególną uwagę.

W pierwszej linii wejścia dane są trzy liczby n, k, q (1 ≤ n ≤ 300 000, 1 ≤ k ≤ 109, 1 ≤ q ≤ 300 000). W drugiej linii wejścia znajduje się n liczb ai - są to początkowe wielkości drzew w ogrodzie. Drzewa numerujemy od 0 do n-1. Później dane jest q wierszy - zapytania. Mamy dwa typy zapytań:

0 a b - podlewamy drzewa a, a+1, ..., b-1, b (0 ≤ a ≤ b < n),
1 p q r s - w zależności od poprzedniego wyniku na zapytanie typu 1, pytamy się o to, ile jest drzew dojrzałych wśród drzew p, p+1, ..., q-1, q lub r, r+1, ..., s-1, s. Jeżeli na ostatnie zapytanie typu 1 odpowiedź była parzysta, rozważamy przedział [p,q], w przeciwnym wypadku przedział [r,s]. Możesz założyć, że w pierwszym zapytaniu [p,q] = [r,s].
#### Wyjście
Należy wypisać odpowiedzi na zapytania typu 1 w osobnych liniach.

Podzadania
W testach wartych 20% punktów zachodzą dodatkowe warunki n ≤ 2000 oraz q ≤ 10 000. Natomiast w testach wartych łącznie 50% punktów wszystkie zapytania typu 0 występują przed zapytaniami typu 1.

#### Przykład
Dla danych wejściowych

```
4 6 6
5 4 3 7
1 2 3 2 3
0 0 2
1 3 4 1 2
0 2 3
0 0 1
1 0 3 0 0
```
poprawną odpowiedzią jest
```
1
0
3
```
#### Wyjaśnienie do przykładu: Ponieważ odpowiedź dla pierwszego zapytania (1 2 3) jest 1, dlatego w drugim zapytaniu (1 3 4 1 2) rozważamy drugą parę (tj. 1 i 2). Tutaj mamy zero dojrzałych drzew, dlatego w ostatnim zapytaniu (1 0 3 0 0) rozważamy ponownie pierwszą parę (0 i 3).

