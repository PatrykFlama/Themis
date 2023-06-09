#include <bits/stdc++.h>
using namespace std;
int tab[105][105];
int a, b;
bool master = false;


void moddfs(int x, int y){
    if(tab[x][y] == 2 || master) {
        master = true;
        return;
    }

    tab[x][y] = 1;
    bool rc = 0;
    if(x > 0)
        if(tab[x-1][y] != 1) {
            moddfs(x - 1, y);
            rc = 1;
        }
    if(y > 0)
        if(tab[x][y-1] != 1){
            moddfs(x, y-1);
            rc = 1;
        }
    if(x < a)
        if(tab[x+1][y] != 1){
            moddfs(x+1, y);
            rc = 1;
        }
    if(y < b)
        if(tab[x][y+1] != 1){
            moddfs(x, y+1);
            rc = 1;
        }

    if(x > 0 && y > 0)
        if(tab[x-1][y-1] != 1) {
            moddfs(x - 1, y-1);
            rc = 1;
        }
    if(x > 0 && y < b)
        if(tab[x-1][y+1] != 1){
            moddfs(x-1, y+1);
            rc = 1;
        }
    if(x < a && y > 0)
        if(tab[x+1][y-1] != 1){
            moddfs(x+1, y-1);
            rc = 1;
        }
    if(x < a && y < b)
        if(tab[x+1][y+1] != 1){
            moddfs(x+1, y+1);
            rc = 1;
        }

    if(rc)
        moddfs(x, y);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> a >> b;

    for(int i = 0 ; i < a; i++)
        for(int j = 0; j < b; j++)
            cin >> tab[i][j];

    a--, b--;

    moddfs(0, 0);
    if(master)
        cout << 1 << "\n";
    else
        cout << 0 << "\n";

    return 0;
}