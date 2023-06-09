LICZBANWD
Problem code: LICZBANWD | Time: 1.00 s | Memory: 32 MB | Solved: yes | print

Analizujemy naiwny algorytm Euklidesa. Naiwny algorytm Euklidesa dla danych liczb A, B działa w następujący sposób: w każdym kroku analizuje jakieś NWD(A,B). Jeśli A >= B (A jest "większe równe" B), to przechodzi z NWD(A,B) -> NWD(A-B, B). W przeciwnym razie, czyli jeśli A < B, przechodzi z NWD(A, B) -> NWD(B, A). Algorytm kończy swoje działanie, jeśli któraś z liczb jest równa 0. Pytanie dla Ciebie - ile razy nastąpi pierwsze przejście tego algorytmu (czyli odejmowanie) dla danych A, B?

Zadanie
Napisz program, który wczyta dwie liczby nieujemne A, B i obliczy ile razy naiwny algorytm Euklidesa wykona odejmowanie dla podanych liczb.
Przykład
Dla danych wejściowych

6 17
poprawną odpowiedzią jest
8