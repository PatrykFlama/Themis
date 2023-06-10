Drukarka
Problem code: PRINTER | Time: 3.00 s | Memory: 64 MB | Solved: yes | print

Chcesz wydrukować n słów na bardzo starej drukarce. Drukarka jest tak stara, że musisz sam ułożyć w niej malutkie metalowe klocuszki z literami. Utworzone w ten sposób słowo możesz następnie odcisnąć na kartce papieru. Drukarka, którą posiadasz, pozwala ci na wykonywanie następujących operacji:

dodanie jednej litery na koniec słowa aktualnie znajdującego się w drukarce,
usunięcie ostatniej litery ze słowa aktualnie znajdującego się w drukarce (oczywiście o ile jest tam jakakolwiek litera),
odciśnięcie słowa na papierze.
Na początku drukarka jest pusta. Po wydrukowaniu wszystkich słów w drukarce mogą pozostać litery. Co więcej, słowa możesz drukować w dowolnej kolejności. Jako, że każda czynność wymaga czasu, chciałbyś zminimalizować całkowitą ilość operacji.

Zadanie
Napisz program, który, mając dane n słów do wydrukowania, znajdzie minimalną ilość operacji potrzebną do wydrukowania ich w dowolnej kolejności.

Wejście
W pierwszej linii wejścia znajduje się liczba n (1 ≤ n ≤ 25000) oznaczająca liczbę słów do wydrukowania. Następnie danych jest n linii, każda z nich zawiera jedno słowo składające się z co najwyżej dwudziestu małych liter alfabetu angielskiego. Wszystkie podane słowa są różne.

 
Wyjście
Na wyjściu należy wypisać jedną liczbę --- minimalną liczbę operacji potrzebną do wydrukowania podanych słów.

Przykład
Dla danych wejściowych

3
print
the
poem
poprawną odpowiedzią jest
20
