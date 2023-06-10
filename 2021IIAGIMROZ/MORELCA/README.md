# LCA
###### Problem code: MORELCA \| Time: 15.00 s \| Memory: 128 MB \| Solved: yes \| print

Najniższym wspólnym przodkiem ("lowest common ancestor, LCA) wierzchołków u i v w ukorzenionym drzewie nazywamy wierzchołek x, taki że jest on najniższy i jest przodkiem zarówno u jak i v.

Dane jest drzewo i zapytania postaci "r a b" - jeżeli ukorzenimy drzewo w r, to który wierzchołek będzie najniższym wspólnym przodkiem a i b?

#### Wejście
W pierwszej linii wejścia dana jest liczba n (1 ≤ n ≤ 200 000) - liczba wierzchołków. Dalej dane jest n-1 linii, w których opisane są krawędzie drzewa - są to pary liczb a i b pomiędzy którymi znajduje się krawędź (1 ≤ a, b ≤ n). Następnie w pojedynczej linii dana jest liczba q (1 ≤ q ≤ 200 000) - liczba zapytań. W kolejnych q liniach znajdują się zapytania w postaci trzech liczb r, a, b oddzielonych spacjami, zdefiniowane powyżej (1 ≤ r, a, b ≤ n).

#### Wyjście
Należy wypisać q linii - odpowiedzi na wszystkie zapytania.

Podzadania
W testach wartych przynajmniej 20% punktów zachodzi dodatkowy warunek n, q ≤ 100.

W innych testach wartych przynajmniej 30% punktów liczba różnych r jest nie większa niż 10, a także n ≤ 100 000.

#### Przykład
Dla danych wejściowych

```
3
1 2
2 3
2
2 1 3
1 2 3
```
poprawną odpowiedzią jest

```
2
2
```
