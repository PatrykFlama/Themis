Starcie magów
Problem code: LOTR1 | Time: 2.00 s | Memory: 32 MB | Solved: no | print

<span style="color:white">Wielki czarodziej, Grandalf</span>, udał się do przyjaciela, potężnego <span style="color:red">Narusama</span>, aby poprosić go o pomoc w walce ze złem. Niestety, <span style="color:red">Narusam</span> przyłączył się do sił ciemności. <span style="color:white">Grandalf</span> wiedział, że będzie zmuszony go powstrzymać, jednak nie był pewny, czy podoła temu bez niczyjej pomocy. <span style="color:red">Narusam</span> bowiem dorównywał, a wręcz nawet przewyższał <span style="color:white">Grandalfa</span> siłą. Niegdyś obaj otrzymali wiedzę od Bajtarów, więc potrafili rzucać te same zaklęcia, wiedzieli też jak przed nimi się bronić. <span style="color:white">Grandalf</span> wiedział, że <span style="color:red">Narusam</span> nie popełni błędu - odbije każde możliwe zaklęcie. Jego ulubione czary, w rzucaniu których był prawdziwym mistrzem, sprawiały, że nadlatujący pocisk zawracał w stronę przeciwnika. Było ich dokładnie n, a rzucenie zaś i-tego wymagało pozyskania odpowiedniej ilości energii ze źródła mocy, równej ai (każde miało dokładnie taki sam efekt, różniły się jedynie kosztem).

<span style="color:white">Grandalf</span> wymyślił sprytny plan jak zwyciężyć - postanowił również użyć ulubionych zaklęć <span style="color:red">Narusama</span>. Gdy ten wycelował w <span style="color:white">Grandalfa</span> kulą ognia, on przygotował się na odbicie uroku. Wiedział, że <span style="color:red">Narusam</span> zrobi dokładnie to samo. Bitwa nie zapowiadała się zbyt ekscytująco, obaj czarodzieje mieli zamiar odbijać tą nieszczęsną kulę ognia aż do skutku, za każdym razem zużywając odpowiednią ilość mocy z wybranego przez siebie źródła. Oczywiście kula była tylko jedna, więc czary zamierzali rzucać naprzemiennie, wpierw <span style="color:white">Grandalf</span>, potem <span style="color:red">Narusam</span>.
Każdy z nich dążył do jednego celu - podczas swojej kolejki wykorzystać ostatnią moc ze wszystkich źródeł, aby przeciwnik nie mógł już rzucić żadnego czaru. Nie był on już wtedy w stanie uniknąć kuli ognia i czekał go straszliwy koniec!!! Obaj magowie byli też wybitnie bystrzy - każdy zawsze uważnie wybierał, którego zaklęcia użyć, mając na uwadze pozostały stan energii w źródłach mocy.

Zadanie
<span style="color:white">Grandalf</span> wie, że w siedzibie <span style="color:red">Narusama</span>, Bitengardzie, znajdują się różne źródła mocy - z każdego z nich pozyskać można pewną ilość energii. Zna on jednak bardzo dużo różnych miejsc i nie pamięta, które konkretnie liczby dotyczą Bitengardu. Jest pewny, że może to być jedno z q znanych przez niego miejsc mocy, każde z nich posiada k źródeł mających po bj energii. Niestety, nie będzie miał za dużo czasu. Chce zdecydować, czy da radę pokonać <span style="color:red">Narusama</span>, czy będzie musiał uciekać - wtedy konieczne będzie powiadomienie orłów. W momencie sprawdzenia, którym miejscem mocy jest Bitengard musi natychmiast podjąć decyzje, stąd też musi wcześniej przemyśleć, czy dla j-tego miejsca będzie w stanie wygrać. Pomóż mu, los Śródsiecia jest w Twoich rękach!

Wejście
W pierwszym wierszu wejścia znajduje się liczba n (1 <= n <= 1000), oznaczająca ilość znanych zaklęć obronnych. Kolejny wiersz zawiera n liczb całkowitych ai (1 <= ai <= 1000), oznaczających ilość potrzebnej mocy do pozyskania aby rzucić i-te zaklęcie.

Kolejny wiersz zawiera liczbę q (1 <= q <= 1000) oznaczającą ilość znanych przez <span style="color:white">Grandalfa</span> miejsc. Następne q wierszy opisuje poszczególne miejsce: podana jest liczba k - ilość różnych źródeł, a następnie k liczb bj oznaczających ilość możliwej do pozyskania mocy. (1 <= k, bj <= 1000) Możesz założyć, że żadne dwa czary nie mają takiego samego kosztu mocy.

Wyjście
Program powinien wypisać q wierszy, każdy odpowiadającemu kolejnemu miejscu mocy podanemu na wejściu. Jeśli <span style="color:white">Grandalf</span> jest w stanie pokonać <span style="color:red">Narusama</span>, gdyby Bitengard był j-tym miejscem, wypisz "WYGRANA". W przeciwnym przypadku wypisz "ORLY".

Przykład
Dla danych wejściowych:

1
1
2
1 5
1 6
poprawną odpowiedzią jest:
WYGRANA
ORLY
Przykład 2
Dla danych wejściowych:

5
2 5 3 6 10
2
6 64 93 152 346 999 345
6 734 78 98 99 1000 3
poprawną odpowiedzią jest:
ORLY
WYGRANA