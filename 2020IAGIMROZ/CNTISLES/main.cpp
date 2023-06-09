#include <bits/stdc++.h>
using namespace std;
int tab[105][105];


void moddfs(int n, int x, int y){
    tab[x][y] = 0;
    if(x > 0)
        if(tab[x-1][y])
            moddfs(n, x-1, y);
    if(y > 0)
        if(tab[x][y-1])
            moddfs(n, x, y-1);
    if(x < n)
        if(tab[x+1][y])
            moddfs(n, x+1, y);
    if(y < n)
        if(tab[x][y+1])
            moddfs(n, x, y+1);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    int sum = 0;
    int ttab[n][n];

    for(int i = 0 ; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> tab[i][j];

    for(int i = 0 ; i < n; i++)
        for(int j = 0; j < n; j++)
            ttab[i][j] = tab[i][j];


    for(int i = 0 ; i < n; i++){
        for(int j = 0; j < n; j++){
            if(tab[i][j]) {
                moddfs(n, i, j);
                sum++;
            }
        }
    }

    cout << sum << "\n";

    return 0;
}