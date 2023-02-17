# Policz wyspy
###### fsdProblem code: CNTISLES \| Time: 1 s \| Memory: 8 MB \| Solved: yes \| print

Pirat Ernio lubi żyć niebezpiecznie. Ostatnio na przykład splądrował skarbiec króla Bajtazara. Nie chodziło mu jednak ani o znajdujące się tam góry złota, ani o piękne dziewice zamknięte w lochach pod zamczyskiem (król Bajtazar nie ma wież w swoim zamku, bo ma kompleksy), ani nawet o zapasy wina wystarczające, by upijać się do nieprzytomności codziennie przez następne trzydzieści lat. Nie, pirat Ernio jest bardzo rozsądnym piratem i co dzień myśli o rozszerzeniu swego panowania na kolejne morza i oceany. A tak się akurat składa, że w skarbcu króla znajdowała się pewna bardzo cenna mapa... Na mapie tej zaznaczono pewien archipelag wysp; woda została oznaczona zerami, a ląd jedynkami. Wyspa to fragment lądu po którym można swobodnie poruszać się idąc jedynie w dół, w górę, w lewo lub w prawo (i nie wchodząc po drodze do wody, oczywiście).

Pomóż piratowi i policz, ile wysp znajduje się na jego mapie.

#### Wejście
W pierwszej linii wejścia znajduje się liczba n (1 ≤ n ≤ 100) oznaczająca rozmiar mapy. Następnie dana jest mapa o n wierszach i n kolumnach wedle opisu w treści zadania.

#### Wyjście
Należy wypisać jedną liczbę: liczbę wysp na mapie.

#### Przykład
Dla danych wejściowych

```
5
0 1 0 1 0
1 0 1 0 1
1 1 0 1 1
0 1 0 1 0
1 0 1 0 1
```
poprawną odpowiedzią jest
```
8
```
Wyjaśnienie: na poniższym diagramie wyspy oznaczono kolorkami, a wodę zniknięto.

\_ <span style="color:yellow">1</span> \_ <span style="color:orange;">1</span> \_  
<span style="color:red">1</span> \_ <span style="color:purple;">1</span> \_ <span style="color:green;">1</span>   
<span style="color:red">1</span> <span style="color:red">1</span> \_ <span style="color:green;">1</span> <span style="color:green;">1</span>   
\_ <span style="color:red">1</span> \_ <span style="color:green">1</span> \_   
<span style="color:darkblue;">1</span> \_ <span style="color:pink">1</span> \_ <span style="color:blue">1</span>   
