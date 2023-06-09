Rzetelne badanie
Problem code: KTHELEM | Time: 3.00 s | Memory: 16 MB | Solved: no | print

Bajtocki Instytut Miernictwa, Badań, Ekspertyz i Różniczkowania postanowił przeprowadzić cykl sondaży. Niestety, budżet instytutu nie pozwalał na przeprowadzenie więcej niż jednej ankiety na sondaż. Dlatego też odpowiedzi, których udzieli osoba ankietowana w danym sondażu zostaną opublikowane jako opinia całego społeczeństwa Bajtocji. Oczywiście w takiej sytuacji wybór osoby ankietowanej stał się palącym problemem.

Każdemu potencjalnemu respondentowi przyporządkowano współczynnik radykalności. Instytut nie chce jednak pytać ani najbardziej ani najmniej radykalnych osób. Ustalono, że na ankietę odpowie k-ta osoba w kolejności rosnącego współczynnika. Osoba zapytana raz nie może brać udziału w dalszych sondażach. Na szczęście cały czas napływają nowi respondenci. Instytut potrzebuje tylko prostego programu, który zautomatyzuje proces wyłaniania ankietowanego.

Zadanie
W pierwszej linii wejścia dana jest liczba k (1 ≤ k ≤ 106). Następnie danych jest conajwyżej milion liczb xi, które opisują zdarzenia zachodzące w Instytucie:

xi > 0: do Instytutu zgłosił się nowy respondent o współczynniku radykalności xi
xi = 0: Instytut musi wybrać osobę do sondażu. Na wyjście należy wypisać współczynnik radykalności wybranej osoby, a następnie usunąć tę osobę z listy respondentów. Jeżeli nikt nie może wziąć udziału w ankiecie, należy wypisać NIE MA.
xi = -1: koniec wejścia
Przykład
Dla danych wejściowych

5
2 3 1 3 5 6 3 0 4 2 0 4 2 5 0 0 0 3 0 0 0 0 0 0 0 3 5 0 1 8 0 0 0 -1
poprawną odpowiedzią jest
3
3
3
4
4
3
5
5
6
NIE MA
NIE MA
NIE MA
3
2
5
8
