Tetris 2D
Problem code: TETRIS2D | Time: 2.00 s | Memory: 32 MB | Solved: yes | print

Mały Jaś poznał ostatnio grę Tetris. W grze tej klocki o różnych kształtach opadają na platformę. Gra ta zainspirowała Jasia do zastanowienia się nad następującym problemem. Załóżmy że wszystkie klocki to prostokąty o wymiarach (1, l), gdzie l to długość boku poziomego. Klocki mają opadać osobno, w pewnej ustalonej kolejności. Dany klocek opada, dopóki nie natrafi na przeszkodę w postaci platformy albo innego, już stojącego klocka, a wtedy się zatrzymuje (w pozycji, w jakiej opadał) i pozostaje na swoim miejscu do końca gry. Mając dane wymiary, kolejność opadania i tory lotu klocków gracz będzie musiał podać wysokość najwyżej położonego punktu w układzie powstałym po opadnięciu wszystkich klocków. Wszystkie klocki opadają pionowo w dół i nie obracają się w trakcie opadania.

Zadanie
Napisz program, który:

wczyta ze standardowego wejścia opisy kolejno opadających klocków,
wyznaczy najwyższy punkt układu klocków po zakończeniu ich opadania,
wypisze wynik na standardowe wyjście.
Wejście
W pierwszum wierszu wejścia znajdują się dwie liczby całkowite d, n (1 <= d <= 10^6, 1 <= n <= 2*10^4), oznaczające odpowiednio: szerokość platformy oraz liczbę klocków, które na nią opadną. W następnych n wierszach występują opisy kolejno opadających klocków. Każdy opis klocka składa się z dwóch liczb całkowitych: l, x (1 <= l <= d, 0 <= x, l+x <= d), reprezentujących klocek o szerokości l. Wierzchołki rzutu klocka na platformę będą miały współrzędne: x i x+l.

Wyjście
W jedynym wierszu wyjścia należy wypisać wysokość najwyższego punktu w układzie klocków po zakończeniu ich opadania.

Przykład
Dla danych wejściowych:

8 5
3 1
2 6
1 4
4 3
5 0
poprawną odpowiedzią jest:

3
