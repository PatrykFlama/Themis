# Słownik T9
###### Problem code: T9 \| Time: 4.00 s \| Memory: 96 MB \| Solved: yes \| print

Każdy wie jak wygląda klawiatura (przeciętnego, starego) telefonu komórkowego (takiego z cyframi 0-9, bez ekranu dotykowego). A kto nie wie, niech poszuka w internecie.

Dosyć znanym mechanizmem jest także słownik T9. Wystarczy jednokrotnie przyciskać klawisze, które przyporządkowane są do żądanych liter, a odpowiednie oprogramowanie próbuje dopasować przyciśnięte cyfry do słów, które ma w słowniku. Twoim zadaniem na dziś, jest zaimplementować takie oprogramowanie.

Zadanie
Napisz program, który: wczyta listę słów w słowniku oraz zapytania dotyczące wstukanych kodów, wyznaczy słowa przyporządkowane do wprowadzonych kodów i wypisze wyniki na standardowe wyjście.

#### Wejście
W pierwszym wierszu wejścia znajdują się dwie liczby naturalne: N oraz Q, oddzielone pojedynczym odstępem i określające kolejno: liczbę słów w słowniku oraz liczbę zapytań.

W kolejnych N wierszach znajduje się lista słów w słowniku --- po jednym słowie w każdym wierszu. Słowa w słowniku są niepustymi ciągami małych liter alfabetu łacińskiego.

W kolejnych Q wierszach znajdują się zapytania do słownika --- po jednym zapytaniu w każdym wierszu. Zapytania są niepustymi ciągami cyfr.

#### Wyjście
Twój program powinien wypisać na wyjście dokładnie Q wierszy. W i-tym wierszu powinna się znaleźć odpowiedź na i-te zapytanie. Odpowiedź na każde zapytanie powinna być:

słowem NIE --- jeśli dany kod nie występuje w żadnym prefiksie słowa ze słownika,
słowem ze słownika --- jeśli dany kod dopasowuje tylko do prefiksu jednego słowa ze słownika,
liczbą x --- jeśli dany kod dopasowuje do prefiksu dokładnie x (x > 1) słów ze słownika.
Ograniczenia
1 <= N <= 250 000, 1 <= Q <= 500 000.

Długość słów w słowniku nie przekracza 1 000 znaków.
Sumaryczna długość słów w słowniku nie przekracza 1 000 000 znaków.
Długość każdego z zapytań nie przekracza 1 000 znaków.
Sumaryczna długość zapytań nie przekracza 4 000 000 cyfr.
#### Przykład
Dla danych wejściowych

```
4 4
anna
andrzej
ambrozy
pokorski
123
26
266
7
```
poprawną odpowiedzią jest
```
NIE
3
anna
pokorski
```
