Maskowanie
Problem code: MASKING | Time: 1.00 s | Memory: 16 MB | Solved: yes | print

Druga wojna światowa. Amerykańska armia dała ci niezwykle odpowiedzialne zadanie: masz zamaskować hangary wojskowe na Pearl Harbour. Wygląda to tak, że wzdłuż lotniska, po jego jednej stronie, znajduje się n pagórków (dla uproszczenia, reprezentowane jako punkty całkowite na osi liczbowej), z których niektóre z nich zostały zamienione na hangary. Maskowanie polega na przykrywaniu ich płatami sztucznych krzaczorów (ABC, Artificial Bush Carpet), przy czym, ze względów logistycznych, można na półwysep dostarczyć zaledwie m trawiastych dywanów, i to do tego tej samej wielkości. Twoim zadaniem jest wyznaczenie, jakiej co najmniej szerokości muszą być dywany, aby przykryć wszystkie hangary. Oczywiście, płaty trawy mogą się nakrywać i wystawać (byleby nie spadały na płytę lotniska)

Wejście
Na wejściu pojawi się liczba n (1 ≤ n ≤ 500000) , a następnie fragment mapy terenu (ściśle tajne!) przedstawiający okolice pasa głównego lotniska. Znak '+' oznacza że w danym miejscu znajduje się hangar, znak '.' oznacza, że nic tam nie ma i nie trzeba tego miejsca maskować. Następnie znajduje się liczba m ≤ n.

Wyjście
Wypisz jedną liczbę całkowitą k oznaczających minimalną szerokość dywanu konieczną do zamaskowania hangarów. Szerokość licz w całkowitych krotnościach szerokości hangaru.

Przykład
Dla danych wejściowych

10
+.+..++.++
3
poprawną odpowiedzią jest
3
Wyjaśnienie przykładu:
Oczywiście, trzema dywanami o szerokości m da się przykryć wszystkie plusy, np tak: [+.+].[.++][.++]. Widać też, że szerokość 2 nie wystarczy, a tym bardziej 1.
