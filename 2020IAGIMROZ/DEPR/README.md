Depresja
Problem code: DEPR | Time: 4.00 s | Memory: 192 MB | Solved: no | print

Jasio dostał od rodziców na urodziny nowiutki, markowy, pachnący jeszcze fabryką ciąg liczb całkowitych a_1, a_2, ..., a_N. Od razu przystąpił do zabawy ciągiem: wybiera losowo fragment (spójny niepusty podciąg) a_i, a_{i+1}, ..., a_j i wyznacza minimum tego podciągu. Jasio wybiera jednorodnie: wybór każdego podciągu a_i, a_{i+1}, ..., a_j dla pary indeksów i, j spełniających warunek 1 <= i <= j <= N jest jednakowo prawdopodobny. Niestety, Jasio jest dość depresyjnym dzieckiem: po obejrzeniu ciągu Jasio popada w dziecięcą depresję i rodzice muszą go pocieszać przez m sekund, gdzie m to minimum wybranego przez niego podciągu.

Rodzice chcą przewidzieć, ile czasu będą musieli poświęcić na pocieszanie Jasia. Pomóż im i napisz program, który: wczyta ciąg liczb, który otrzymał Jasio, wyznaczy i wypisze średni czas depresji Jasia.

Wejście
W pierwszym wierszu wejścia znajduje się liczba naturalna N (1 <= N <= 100000), określająca długość ciągu, który dostał Jasio. W drugim wierszu wejścia znajduje się opis ciągu, który dostał Jasio; jest to N liczb naturalnych a_1, ..., a_N pooddzielanych pojedynczymi odstępami (1 <= a_i <= 10^6).

Wyjście
W pierwszym i jedynym wierszu wyjścia powinna się znaleźć jedna liczba rzeczywista: średnia wartość czasu m, przez który rodzice będą musieli pocieszać Jasia.

Odpowiedź uznaje się za prawidłową, jeśli błąd względny lub bezwzględny obliczonej wartości nie przekracza 10^{-6}.

Przykład
Dla danych wejściowych

3
1 7 2
poprawną odpowiedzią jest
2.3333333333
