#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int k; cin >> k;
    int tab[k][k];
    int count[10005] = {0};

    for(int x = 0; x < k; x++){
        for(int y = 0; y < k; y++){
            cin >> tab[x][y];

            if(tab[x][y] == 0 || tab[x][y] > pow(k, 2)) {
                cout << -1;
                return 0;
            }

            count[tab[x][y]]++;
            if(count[tab[x][y]] > 1){
                cout << -1;
                return 0;
            }
        }
    }

    int magsum = 0;
    for (int i = 0; i < k; i++)
        magsum += tab[0][i];

    for (int i = 0; i < k; i++){
        int tempsum = 0;

        for (int j = 0; j < k; j++)
            tempsum += tab[i][j];

        if (tempsum != magsum){
            cout << -1;
            return 0;
        }
    }

    for (int i = 0; i < k; i++){
        int tempsum = 0;

        for (int j = 0; j < k; j++)
            tempsum += tab[j][i];

        if (tempsum != magsum){
            cout << -1;
            return 0;
        }
    }

    cout << magsum;

    return 0;
}