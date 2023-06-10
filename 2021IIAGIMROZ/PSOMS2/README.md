# Trudniejszy podciąg spójny o maksymalnej sumie
###### Problem code: PSOMS2 \| Time: 15.00 s \| Memory: 96 MB \| Solved: no \| print

Zadanie polega na znalezieniu podciągu spójnego o maksymalnej sumie (PSOMS). Dla przypomnienia: podciąg spójny ciągu jest to dowolny jego spójny kawałek od pewnego elementu do pewnego innego (w szczególności pusty ciąg jest podciągiem spójnym dowolnego ciągu). Pojęcie sumy i maksimum chyba nie trzeba tłumaczyć. Aby nie było za łatwo elementy ciągu będą się często zmieniać, odpytywać będziemy się tylko o PSOMSy kawałków ciągu i będzie dużo, dużo zapytań.

Zadanie
Napisz program, który: wczyta ciąg liczb, zapytania i operacje zmiany ciągu, odpowie na wszystkie zapytania i wypisze wyniki na standardowe wyjscie

#### Wejście
W pierwszym wierszu wejścia znajduje się jedna liczba naturalna N, określająca długość ciągu. W drugim wierszu wejścia znajduje się ciąg N liczb całkowitych Ti, pooddzielanych pojedynczymi odstępami. Są to kolejne wyrazy ciągu, dla którego należy wyznaczyć wartość PSOMSa. W trzecim wierszu wejścia znajduje się jedna liczba naturalna Q, określająca liczbę operacji/zapytań dotyczących ciągu. W kolejnych Q wierszach znajdują się informacje o zapytaniach i operacjach do wykonania na ciągu, po jednej w wierszu — wiersze składają się z litery określającej typ instrukcji Oi, pojedynczego odstępu oraz dwóch liczb całkowitych Ai, Bi oddzielonych pojedynczych odstępem: jeżeli Oi jest równe C — wiersz określa zmianę elementu numer Ai ciągu na wartość Bi, jeśli Oi jest równe Q to wiersz określa zapytanie o wartość podciągu spójnego o maksymalnej sumie dla podciągu spójnego elementów od Ai-tego do Bi-tego włącznie. Elementy ciągu numerujemy kolejnymi liczbami naturalnymi od 1 do N.

#### Wyjście
Twój program powinien wypisywać odpowiedzi na zapytania (wiersze wejścia, w których Oi jest równe Q) zgodnie z kolejnością ich występowania i według aktualnej wiedzy, na temat ciągu — odpowiedzią na każde pytanie jest liczba całkowita — wartość podciągu o maksymalnej sumie (dla podciągu spójnego od Ai-tego elementu do Bi-tego włącznie)

Ograniczenia
1 <= N <= 1 000 000, 1 <= Q <= 1 000 000, −10^9 <= Ti <= 10^9.
We wszystkich operacjach: 1 <= Ai <= N, −10^9 <= Bi <= 10^9.
We wszystkich zapytaniach: 1 <= Ai <= Bi <= N.
W testach wartych łącznie 20% maksymalnej punktacji: Q <= 5 000, N <= 2 000.
W testach wartych łącznie 60% maksymalnej punktacji: Q <= 100 000, N <= 100 000.
#### Przykład
Dla danych wejściowych

```
7
2 -3 4 -2 5 -10 3
5
Q 1 7
Q 1 4
C 6 -2
Q 1 7
Q 4 7
```
poprawną odpowiedzią jest
```
7
4
8
6
```
