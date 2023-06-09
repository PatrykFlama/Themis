# Krasnale ogrodowe
###### Problem code: KRASNALESOLVE \| Time: 5.00 s \| Memory: 32 MB \| Solved: yes \| print

Zadanie
Dawid jest kolekcjonerem krasnali ogrodowych. W jego kolekcji znajduje się N egzemplarzy, każdy o innej wysokości. Dawid chciałby ozdobić ogród swoimi krasnalami, ustawiając je wszystkie w jednym rzędzie w taki sposób, żeby wysokości sąsiednich krasnali różniły się o 1. Niestety, takie ustawienie może nie być możliwe (na przykład kiedy kolekcja składa się jedynie z dwóch krasnali o wysokościach 2 i 4). Pominięcie któregoś z posiadanych krasnali nie wchodzi w grę, ale Dawid jest skłonny dokupić kilka dowolnie wysokich sztuk, żeby zrealizować swój cel. Pomóż mu! Napisz program, który wczyta opis kolekcji Dawida i wypisze minimalną liczbę krasnali, o które należy ją powiększyć, żeby ozdobienie ogrodu było możliwe.

#### Wejście
W pierwszym wierszu wejścia znajduje się jedna liczba N, oznaczająca liczbę krasnali w kolekcji Dawida. W drugim wierszu znajduje się N, parami różnych, liczb całkowitych H_i pooddzielanych pojedynczymi odstępami, oznaczających wysokości kolejnych krasnali.

#### Wyjście
W pierwszym (jedynym) wierszu wyjścia wypisz minimalną liczbę krasnali, które Dawid musi dodać do swojej kolekcji, żeby mógł nią ozdobić ogród w wyżej opisany sposób.

Ograniczenia
2 ≤ N ≤ 1 000 000, 1 ≤ Hi ≤ 1018

#### Przykład
Dla danych wejściowych

```
3
8 3 5
```
poprawną odpowiedzią jest
```
3
```
a dla danych wejściowych
```
2
1 2
```
poprawną odpowiedzią jest
```
0
Komentarz
```
W pierwszym przykładzie Dawid potrzebuje jeszcze krasnali o wysokościach 4, 6, 7.
```
