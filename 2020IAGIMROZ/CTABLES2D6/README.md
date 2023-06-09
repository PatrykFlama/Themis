Czy to jest kwadrat magiczny?
Problem code: CTABLES2D6 | Time: 1.00 s | Memory: 10 MB | Solved: yes | print

Zadanie
Celem jest zbadanie, czy wprowadzony na wejściu zestaw liczb stanowi poprawny kwadrat półmagiczny.

Kwadrat półmagiczny to taki układ liczb w kształcie kwadratu, w którym występują tylko kolejne (1, 2, 3, ...) liczby naturalne (bez zera), żadna z nich się nie powtarza, a do tego suma liczb w każdej kolumnie i suma liczb w każdym wierszu - są dokładnie takie same. Tę sumę nazywamy sumą magiczną kwadratu.

Wejście
Na wejściu znajduje się jedna liczba N nie większa niż 100, określająca wielkość badanego kwadratu, na następnie N² liczb całkowitych.

Wyjście
Jeżeli liczby podane na wejściu stanowią poprawny kwadrat półmagiczny, program powinien wypisać dokładnie jedną liczbę całkowitą, równą sumie magicznej tego kwadratu. Jeżeli z jakiejkolwiek przyczyny ten kwadrat nie jest półmagiczny, należy wypisać -1.

Przykład
Dla danych wejściowych

3
4	9	2
3	5	7
8	1	6
poprawną odpowiedzią jest
15
natomiast dla danych wejściowych
2
1 2
3 4
poprawną odpowiedzią jest
-1
