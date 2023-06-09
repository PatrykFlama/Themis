//! psomos
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
const int L = 1e6+5;
int tab[L];


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    for(int i = 0; i < n; i++)
        cin >> tab[i];

    ll maxx = 0, local_max = 0;
    for(int i = 0; i < n; i++){
        local_max = max((ll)(tab[i]),local_max + tab[i]);
        maxx = max(maxx, local_max);
    }
    
    cout << maxx << "\n";

    return 0;
}