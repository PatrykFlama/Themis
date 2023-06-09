#include <bits/stdc++.h>
using namespace std;
int tab[20];


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int h, w; cin >> h >> w;

    for(int i = 0; i < h; i++){
        string s; cin >> s;
        for(int j = 0; j < w; j++)
            if(s[j] == '*')
                tab[i] |= (1 << j);
    }

    int res = max(h, w);
    for(int col = 0; col < (1 << w); col++){
        int row = 0;
        for(int i = 0; i < h; i++){
            if((col & tab[i]) != tab[i])
                row++;
        }

        int temp = max(__builtin_popcount(col), row);
        res = min(res, temp);
    }

    cout << res << "\n";

    return 0;
}