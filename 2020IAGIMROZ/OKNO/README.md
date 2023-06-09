Cows hiss by my window
Problem code: OKNO | Time: 4.00 s | Memory: 16 MB | Solved: yes | print

Tomek uwielbia podróże pociągiem do Wrocławia z jednej z lokalnych małych miejscowości. Podczas swej podróży zawsze mija pastwisko z pasącymi się krowami. Tomek lubi widzieć jak najwięcej krów, ale okno w pociągu jest wąskie, i widać z niego jedynie pewną liczbę krów. Tomek interesuje się zagadnieniem bydła mlecznego i potrafi oszacować wiek krowy ze 100% pewnością. Tomek zauważył też, że krowy zawsze pasą się w rzędzie równoległym do torów kolejowych, te same sztuki zawsze w tych samych miejscach, w tej samej odległości od siebie. W czasie swych podróży Tomek zerka często przez okno i próbuje ocenić, która z widzianych przezeń krów jest najmłodsza. Pomóż mu!

Zadanie
Dany jest ciąg liczb nieujemnych całkowitych, indeksowany od 0 do n-1, oznaczający wiek kolejnych krów. Szerokość okna Tomka pozwala mu widzieć jedynie k kolejnych krów naraz. Napisz program, który dla podanego ciągu wieku krów, odpowiadać będzie na pytania, która z widzianych przez Tomka w momencie M krów jest najmłodsza, jeśli patrząc przez okno w momencie M Tomek widzi krowy o numerach od M do M+k-1.

Wejście
Wejście rozpoczyna się linią, zawierającą liczby n, k i p, oznaczające ilość krów, szerokość okna i liczbę zapytań. (0 < n <= 1000000, 0 < k <= n, 0 < p <= 1000000) W następnej linii znajduje się n liczb całkowitych nieujemnych z zakresu <0,1000000000>, oznaczających wiek krów, od krowy o numerze 0 do krowy o numerze n-1. W następnych p liniach znajdują się liczby Mi (0 <= i < p), oznaczające treść i-tego zapytania.

Wyjście
Na wyjście należy wypisać p liczb całkowitych Ti - oznaczających wiek najmłodszej krowy, widzianej przez Tomka w momencie Mi

Przykład
Dla danych wejściowych

5 2 3
8 5 6 7 2
0
2
3
poprawną odpowiedzią jest
5
6
2
Dla danych wejściowych

10 4 7
8 5 6 4 5 6 4 7 8 6 
3
0
4
2
5
5
5
poprawną odpowiedzią jest
4
4
4
4
4
4
4
