# Wyszukiwanie wzorca w tekscie
###### Problem code: KMP \| Time: 2.00 s \| Memory: 32 MB \| Solved: yes \| print

Napisz program, który dla danego wzorca P (ang. pattern) i tekstu T wypisze pozycje, na których znajduje się wzorzec P jako podsłowo tekstu T.

#### Wejście
W pierwszym wierszu danych znajduje się liczba naturalna T oznaczająca liczbę zestawów danych. Każdy zestaw danych podany jest w dwóch wierszach. Pierwszy wiersz zawiera wzorzec P, zaś drugi wiersz zawiera tekst T. Oba napisy składają się z co najwyżej miliona liter alfabetu angielskiego (a-z, A-Z).

#### Wyjście
Dla każdego zestawu danych wypisz pozycje na których wzorzec P pasuje w tekscie T. Zakładamy, że litery tekstu T numerowane są od zera.

#### Przykład
Dla danych wejściowych

```
3
na
banananobano
foobar
foo
foobarfoo
barfoobarfoobarfoobarfoobarfoo
```
poprawną odpowiedzią jest
```
2
4
3
9
15
21
```
