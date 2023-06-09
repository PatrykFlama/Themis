# Róże
###### Problem code: KNOROZE \| Time: 6.00 s \| Memory: 32 MB \| Solved: yes \| print

Tomek jest ogrodnikiem, ma założoną własną firmę. Jej motto: im mniej zapłaci klient, tym będzie bardziej radosny ;) Dostał on następujące zlecenie, ma posadzić na przed każdym domem na ulicy róże w jednym z trzech kolorów: białym, żółtym, czerwonym. Jednak z posadzeniem wiąże się również koszt, który jest różny w zależności od numeru domku oraz koloru. Zadanie wyglądało na proste, dopóki Tomek nie udał się na miejsce, gdzie okazało się, że mieszkańcy maja prośbę: chcą, aby żadni dwaj sąsiedzi nie mieli róż o takim samym kolorze (zakładamy, że dom 1 i ostatni nie są sąsiadami). Pomóż Tomkowi wykonać zadanie i napisz program, które zminimalizuje koszty i wypisze minimalny koszt.

#### Wejście
W pierwszej linijce wejścia znajduje się liczba n (1<=n<=1000000) oznaczająca liczbę domków. Następnie n linii, w każdej linii znajdują się 3 liczby a b c (1<=a,b,c<=1000) oznaczające koszty posadzenia róż (a-czerwonych, b-białych, c-żółtych), dla każdego kolejnego domu.

#### Wyjście
Na wyjściu powinna pojawić się dokładnie jedna liczba, oznaczająca najniższy sumaryczny koszt posadzenia róż zgodnie z zasadami.

#### Przykład
Dla danych wejściowych

```
2
1 2 3
3 4 2

```
poprawną odpowiedzią jest
```
3
```
