Rozbicie
Problem code: ROZB | Time: 2.00 s | Memory: 32 MB | Solved: no | print

Jasio jest miłośnikiem historii. Ostatnio wyczytał o rozbiciu dzielnicowym Bajtocji zapoczątkowanym przez Bajtosława Krzywobitnego w roku 10001110010. Oczywiście, takie suche fakty Jasiowi nie wystarczają. Dotarł do dokładnej mapy Bajtocji z tamtego czasu. Infrastruktura Bajtocji w tamtych czasach dopiero się rozwijała. Bajtocja składała się z N miast połączonych dwukierunkowymi drogami. Jasio, z uwagi na to, że jest bardzo wnikliwy, dotarł do materiałów o zamykaniu poszczególnych dróg, w celu utworzenia nowych dzielnic.

Dwa miasta są w tej samej dzielnicy wtedy i tylko wtedy, gdy istnieje pewna ścieżka między tymi miastami, składająca się tylko z niezamkniętych dróg. Jasio pragnie się przekonać, z ilu dzielnic składała się Bajtocja po kolejnych zamknięciach dróg przez kolejnych króli. I to jest właśnie zadanie dla Ciebie, pomóż Jasiowi!

Zadanie
Napisz program, który: wczyta liczbę miast w Bajtocji, opis dróg pomiędzy miastami oraz kolejne blokady dróg, dla każdej blokowanej drogi obliczy ile dzielnic miała wówczas Bajtocja, wypisze wyniki na standardowe wyjście.

Wejście
W pierwszym wierszu wejścia znajdują się dwie liczby naturalne N i M, 1 <= N <= 100 000, 1 <= M <= 200 000, oddzielone pojedynczym odstępem i określające kolejno liczbę miast w Bajtocji oraz liczbę dróg łączących te miasta. W kolejnych M wierszach znajdują się opisy kolejnych dróg. W i+1-szym wierszu znajduje się opis i-tej drogi. Opis każdej drogi składa się z dwóch liczb naturalnych u i v, 1 <= u, v <= N, oddzielonych pojedynczym odstępem. Są to numery miast połączone drogą. W M+2-gim wierszu znajduje się jedna liczba naturalna Q, 1 <= Q <= 100 000, określająca liczbę modyfikacji bajtockich struktur, dokonanych przez kolejnych króli i wykrytych przez Jasia. W M+3-cim wierszu znajduje się Q parami różnych liczb naturalnych Ai pooddzielanych pojedynczymi odstępami, i-ta liczba oznacza numer drogi, która została zamknięta w i-tym momencie.

Wyjście
Twój program powinien wypisać na wyjście dokładnie Q liczb całkowitych pooddzielanych pojedynczymi odstępami, i-ta liczba powinna być równa liczbie dzielnic po usunięciu i-tej drogi.

Przykład
Dla danych wejściowych

6 7
1 6
5 1
2 4
1 2
2 3
3 4
4 5
4
4 7 6 1
poprawną odpowiedzią jest
1 2 2 3
