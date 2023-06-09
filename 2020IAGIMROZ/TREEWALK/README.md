Walk over a tree
Problem code: TREEWALK | Time: 1.00 s | Memory: 32 MB | Solved: no | print

Given is a tree on n nodes. A person is currently standing in node number 1. In a single step, the person can move from its current node to any adjacent node. You are given an integer L. The person is allowed to make at most L steps.
Find the maximum number of nodes the person can visit during the walk. Node 1 (where the walk starts) and the node where the walk ends count as visited. Each visited node is only counted once, even if it is visited multiple times.

Wejście
In the first line of input there is n- the number of nodes. (1 ≤ n ≤ 10^6). Later, in subsequent n-1 lines there are edges (1 <= a != b <= n). In the last line there is number L (1 ≤ L ≤ 10^6).

Wyjście
One number - the maximum number of nodes the person can visit during the walk

Przykład
Dla danych wejściowych

3
1 2
1 3
2
poprawną odpowiedzią jest
2
a dla danych wejściowych

5
1 2
2 3
3 4
4 5
2
poprawną odpowiedzią jest
3