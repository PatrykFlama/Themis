Książki na półce
Problem code: BOOKS | Time: 1.00 s | Memory: 32 MB | Solved: yes | print

Na półce Jasia znajduje się wiele książek. Każda z nich ma pewną wartość – Jaś odczuwa do każdej z nich wielki sentyment i wycenia je zgodnie z wartością swoich przeżyć z nią związanych. Ponieważ w ciągu wielu lat zebrało się na półce bardzo wiele książek, Jasio dla swojej estetycznej satysfakcji postanowił umieścić między książkami przegródki. Jednak Jasio jest miłośnikiem harmonii – chciałby ustawić przegródki tak, że znajdować się będą pomiędzy kolejnymi książkami na półce (np. pierwsza przegródka pomiędzy trzecią i czwartą książką, druga pomiędzy ósmą i dziewiątą książką i podobnie dalej) oraz tak, aby największa suma wysokości książek w jednej przegródce była jak najmniejsza (patrz przykład). Pomóż mu!

Wejście
Pierwsza linia wejścia zawiera dwie liczby całkowite n – liczbę książek oraz k – liczbę przegródek (1 ≤ n, k ≤ 100000). W kolejnej linii znajduje się n liczb h0, h1, ..., hn-1 – są to wysokości kolejnych książek na półce (1 ≤ hi ≤ 1000).

Wyjście
Wyjście powinno składać się z jednej liczby – minimalnej wartości, jaką może otrzymać Jasio, jeśli poprzekłada książki przegródkami i wybierze spośród oddzielonych części tę o maksymalnej sumie wysokości książek. Traktuj początek i koniec półki jako przegródki (tj. część od pierwszej książki do pierwszej przegródki też wliczamy do rozwiązania, podobnie od ostatniej przegródki do ostatniej książki). Nie musisz wykorzystywać wszystkich przegródek!

Przykład
Dla danych wejściowych

5 2
3 4 8 2 6
poprawną odpowiedzią jest
8
Jeśli wstawimy dwie przegródki tak: 3 4 | 8 | 2 6, otrzymamy sumy części równe 7, 8, 8 – maksimum to osiem. Żaden inny podział nie daje takiej wartości – na przykład 3 | 4 8 | 2 6 daje sumy części równe 3, 12, 8 – największa z nich to 12.

