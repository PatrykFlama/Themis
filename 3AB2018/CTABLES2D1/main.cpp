#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9+5;
const short int L = 1005;
int tab[L][L];


int safe(int j, int i, int temp){
    if(i > 0) return tab[j][i-1]+temp;
    return temp;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    int temp;

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++) {
            cin >> temp;
            tab[j][i] = safe(j, i, temp);
        }

    int maxx = -INF, ptr;
    for(int i = 0; i < n; i++)
        if(maxx < tab[i][n-1])
            maxx = tab[i][n-1], ptr = i;

    cout << ptr << '\n';

    return 0;
}