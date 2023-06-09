#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m; cin >> n >> m;
    int tab[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)
            cin >> tab[i][j];
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++)
            cout << tab[j][i] << ' ';
        cout << "\n";
    }

    int i;
    i = 0;

    return 0;
}