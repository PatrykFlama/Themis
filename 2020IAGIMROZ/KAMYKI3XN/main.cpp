#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    int input[3][n], tab[5][n];

    for(int i = 0; i < 3; i++)
        for(int j = 0; j < n; j++)
            cin >> input[i][j];

    //-----------SET STATES---------
    for(int i = 0; i < n; i++){
        tab[0][i] = input[0][i] + input[2][i];
        tab[1][i] = input[1][i];
        tab[2][i] = input[0][i];
        tab[3][i] = input[2][i];
        tab[4][i] = 0;
    }

    //--------------DP--------------
    for(int i = 0; i < n-1; i++){
        tab[0][i + 1] += max({ tab[1][i], tab[4][i] });
        tab[1][i + 1] += max({ tab[0][i],  tab[2][i], tab[3][i], tab[4][i] });
        tab[2][i + 1] += max ({ tab[1][i], tab[3][i], tab[4][i] });
        tab[3][i + 1] += max ({ tab[1][i], tab[2][i], tab[4][i] });
        tab[4][i + 1] += max ({ tab[0][i], tab[1][i], tab[2][i], tab[3][i] });
    }

    cout << max({ tab[0][n-1], tab[1][n-1], tab[2][n-1], tab[3][n-1], tab[4][n-1] }) << "\n";

    return 0;
}