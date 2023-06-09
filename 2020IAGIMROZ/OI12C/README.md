Samochodziki
Problem code: OI12C | Time: 10.00 s | Memory: 64 MB | Solved: no | print

Jasio jest trzylatkiem i bardzo lubi bawić się samochodzikami. Jasio ma n różnych samochodzików. Wszystkie samochodziki leżą na wysokiej półce, do której Jasio nie dosięga. W pokoju jest mało miejsca, więc na podłodze może znajdować się jednocześnie co najwyżej k samochodzików.

Jasio bawi się jednym z samochodzików leżących na podłodze. Oprócz Jasia w pokoju cały czas przebywa mama. Gdy Jasio chce się bawić jakimś innym samochodzikiem i jeśli ten samochodzik jest na podłodze, to sięga po niego. Jeśli jednak samochodzik znajduje się na półce, to musi mu go podać mama. Mama podając Jasiowi jeden samochodzik, może przy okazji zabrać z podłogi dowolnie wybrany przez siebie inny samochodzik i odłożyć go na półkę (tak, aby na podłodze nie brakło miejsca).

Mama bardzo dobrze zna swoje dziecko i wie dokładnie, którymi samochodzikami Jasio będzie chciał się bawić. Dysponując tą wiedzą mama chce zminimalizować liczbę przypadków, gdy musi podawać Jasiowi samochodzik z półki. W tym celu musi bardzo rozważnie odkładać samochodziki na półkę.

Zadanie
Napisz program, który:

wczyta ze standardowego wejścia ciąg kolejnych samochodzików, którymi będzie chciał się bawić Jasio,
obliczy minimalną liczbę przypadków zdejmowania przez mamę samochodzików z półki,
wypisze wynik na standardowe wyjście.
Wejście
W pierwszym wierszu standardowego wejścia znajdują się trzy liczby całkowite: n, k, p (1 ≤ k ≤ n ≤ 100.000, 1 ≤ p ≤ 500.000), pooddzielane pojedynczymi odstępami. Są to kolejno: łączna liczba samochodzików, liczba samochodzików mogących jednocześnie znajdować się na podłodze oraz długość ciągu samochodzików, którymi będzie chciał się bawić Jasio. W kolejnych p wierszach znajduje się po jednej liczbie całkowitej. Są to numery kolejnych samochodzików, którymi będzie chciał się bawić Jasio (samochodziki są ponumerowane od 1 do n ).

Wyjście
W pierwszym i jedynym wierszu standardowego wyjścia należy zapisać jedną liczbę całkowitą - minimalną liczbę przypadków podania samochodzika z półki przez mamę.

Przykład
Dla danych wejściowych:

3 2 7
1
2
3
1
3
1
2
prawidłową odpowiedzią jest:
4
