#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;

    while(t--){
        int a, b; cin >> a >> b;
        int tab[a][b] = {0};
        for(int i = 0; i < a; i++)
            for(int j = 0; j < b; j++)
                cin >> tab[i][j];

        for(int i = 1; i < a; i++)
            tab[i][0] += tab[i - 1][0];

        for(int i = 1; i < b; i++)
            tab[0][i] += tab[0][i - 1];

        for(int i = 1; i < a; i++)
            for(int j = 1; j < b; j++){
                tab[i][j] += max(tab[i - 1][j], tab[i][j - 1]);
            }

        cout << tab[a-1][b-1] << "\n";
    }


    return 0;
}