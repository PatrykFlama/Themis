# Multum mnożeń
###### Problem code: MULT \| Time: 1.00 s \| Memory: 32 MB \| Solved: no \| print

Danych jest n dodatnich liczb naturalnych, których iloczyn trzeba policzyć. Zakładamy, że mnożenie dwóch liczb x i y trwa dokładnie (log2x)*(log2y) jednostek czasu. Zakładamy również, że inne operacje nas nie interesują. Twoim zadaniem jest wyznaczyć takie nawiasowanie, dla którego czas potrzebny na obliczenie iloczynu jest minimalny. Innymi słowy, nie wolno Ci korzystać z przemienności, ale możesz korzystać z łączności a celem jest minimalizacja czasu wg podanych powyżej założeń. Nawiasowanie należy wypisać w takiej postaci, by każdemu z n-1 mnożeń odpowiadał dokładnie jeden znak '(' , jeden znak '*' i jeden znak ')'. Jeśli istnieje kilka nawiasowań dających dokładnie ten sam czas działania, wypisz najwcześniejsze leksykograficznie.

#### Wejście
Wejście zaczyna się lcizbą n, 1 < n < 100000. Następnie podany jest ciąg n dodatnich liczb naturalnych, nie większych niż 1000.

#### Wyjście
Liczba naturalna jest poprawnym wyrażeniem. Dwa poprawne wyrażenia połączone znakiem '*' i otoczone nawiasami '(' i ')' też stanowią poprawne wyrażenie. Wszystkie pozostałe wyrażenia uznajemy za niepoprawne. Wyjście ma zawierać poprawne wyrażenie, w zawierające dokładnie n liczb, w dokładnie takiej kolejności w jakiej były one na wejściu. Wyrażenie to ma minimalizować czas wykonywania mnożeń. W przypadku remisów, należy wypisać najwcześniejsze leksykograficznie nawiasowanie, przyjmując porządek na znakach '(' < ')' < '*' < '0' < '1' < '2' < 3 < 4 < 5 < 6 < 7 <8 < 9.

#### Przykład
Dla danych wejściowych

```
3
2 2 4
```
poprawną odpowiedzią jest
```
((2*2)*4)
```
