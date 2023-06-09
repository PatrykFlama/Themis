#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;

    vector< vector<int> > tab(2, vector<int> (n, 0));

    for(int j = 0; j < 2; j++)
        for(int i = 0; i < n; i++)
            cin >> tab[j][i];

    tab[1][1] += tab[0][0];
    tab[0][1] += tab[1][0];

    for(int i = 2; i < n; i++){
        tab[0][i] += max(tab[1][i-1], tab[1][i-2]);
        tab[1][i] += max(tab[0][i-1], tab[0][i-2]);
    }

    cout << max(tab[0][n-1], tab[1][n-1]) << "\n";

    return 0;
}