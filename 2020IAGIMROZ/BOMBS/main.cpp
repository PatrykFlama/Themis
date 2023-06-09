#include <bits/stdc++.h>
using namespace std;
#define cerr if(0) cout
const int INF = 1e9+6;
int tab[25];
int h, w, res = INF;


void f(int mask, int bits_on, int n, int ored){
    int cols = __builtin_popcount(ored);
    int rows = h - (bits_on);    
    res = min(res, max(cols, rows));
    
    if(n >= h)
        return;
    
    for(int i = n; i < h; i++)
        f(mask | (1 << i), bits_on+1, i+1, ored | tab[i]);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> h >> w;

    for(int i = 0; i < h; i++){
        string s; cin >> s;
        for(int j = 0; j < w; j++)
            if(s[j] == '*')
                tab[i] |= (1 << j);
    }

    f(0, 0, 0, 0);

    cout << res << "\n";

    return 0;
}