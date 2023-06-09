Najdłuższa wspólna wymazanka
Problem code: LCS2 | Time: 1.00 s | Memory: 32 MB | Solved: yes | print

Słowem u nazywamy dowolny skończony ciąg liter z alfabetu {a,b,c,...,z}. Wymazanką słowa u nazywamy dowolne słowo, które może być otrzymane przez usunięcie z u pewnej liczby jego liter i skonkatenowanie pozostałych liter. W terminach ciągów jest to po prostu dowolny podciąg ciągu (tj. słowa) u. Wymazankami słowa deskorolka są między innymi ola, elka, deska, kolka, deskorolka, sroka.

Dla danych dwóch słów u i v należy znaleźć ich najdłuższą wspólną wymazankę. Na przykład, wspólnymi wymazankammi słów u=deskorolka i v=stokrotka, są między innymi a, o, ka, kka, oa, sroka, sooka, skoka, skroka, soroka, skroka. Łatwo zauważyć, że nie istnieje wspólna wymazanka słów u i v o długości większej niż 6. Tak więc w tym przykładzie najdłuższą wspólną wymazanką słów u i v jest zarówno słowo skroka jak i soroka.

Zadanie
Napisz program, który:

wczyta ze standardowego wejścia dwa słowa,
znajdzie dowolną z ich wspólnych wymazanek o maksymalnej długości.
Wejście
W każdym z dwóch wierszy znajduje się jedno słowo o długości nie większej niż 1000.

Wyjście
W jedynym wierszu wyjścia należy wypisać najdłuższa wspólna wymazanka słów z wejścia. Jeśli takich wymazanek jest więcej niż jedna, należy wypisać dowolną z nich.

Przykład
Dla danych wejściowych

abba
baba
poprawną odpowiedzią jest
aba
Uwaga:
w powyższym przykładzie poprawną odpowiedzią jest także
bba
