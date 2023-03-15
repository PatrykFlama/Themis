#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9+6;
const int L = 2*1005;
int tab[L];


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, temp; cin >> n;

    for(int i = n-1; i >= 0; i--)
        for(int j = i; j < i+n; j++)
            cin >> temp, tab[j] += temp;

    int maxx = -INF, ptr;
    for(int i = 0; i < 2*n; i++)
        if(tab[i] > maxx)
            maxx = tab[i], ptr = i;

    cout << ptr+1 << ' ' << maxx << '\n';


    return 0;
}