PARSEKI
Problem code: PARSEKI | Time: 3.00 s | Memory: 128 MB | Solved: yes | print

Pewien międzygalaktyczny przemytnik postanowił pochwalić się osiągami jego nowo zakupionego statku,
Strusia Tysiąclecie. Aby to zrobić, chciałby pokonać q wybranych przez siebie tras i zapisać czas, w jaki
udało mu się je przebyć. Niestety źle skonfigurował swój prędkościomierz (o ile w ogóle był to prędkościomierz)
i otrzymał statystyki jedynie na trasach bezpośrednio pomiędzy dwiema planetami. Pomóż mu odtworzyć jego
wyniki na całych trasach, by miał się czym przechwalać przy nowych klientach.

"Czy jest szybki? Nigdy nie słyszałeś o Strusiu Tysiąclecie? To statek, który zrobił trasę na Wa-Tle w mniej niż 12 parseków."

Zadanie
Galaktyka składa się z n planet połączonych n - 1 autostradami nadświetlnymi w taki sposób, że możliwy jest
przejazd między każdą parą planet. Na i-tej autostradzie przemytnik uzyskał "czas" ai parseków.
Dla każdej z q tras pomiędzy planetami a i b należy policzyć, ile czasu zajęło mu w sumie przebycie po każdej
z autostrad na tej trasie.

Wejście
Liczby całkowite n i q (1 <= n <= 10^5), (1 <= q <= 10^5) - ilość planet oraz ilość tras do wyliczenia.
Następne n - 1 wierszy zawiera trzy liczby całkowite a, b i c (1 <= a,b <= n), (1 <= c <= 10^5),
oznaczające autostradę między planetami a i b, której przebycie zajmuje przemytnikowi c parseków.
Kolejne q wierszy zawiera dwie liczby całkowite a i b, oznaczające, że przemytnik chciałby znać swój czas na trasie od planety a do b.

Wyjście
Program powinien wypisać q wierszy - czas przemytnika na i-tej trasie.

Przykład
Dla danych wejściowych

4 2
1 2 1
1 3 2
2 4 5
1 2
3 4
poprawną odpowiedzią jest
1
8
