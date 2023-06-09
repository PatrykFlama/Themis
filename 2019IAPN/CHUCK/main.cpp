#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n; cin >> n;
    int t1, t2, t3; cin >> t1 >> t2 >> t3;
    int dist = 0;
    int p[n], tab[n] = {0}; tab[0] = 1;
    for(int i = 0; i < n; i++) cin >> p[i];

    for(int i = 0; i < n; i++){
        if(tab[i] == 1){
            if(!p[i + t1]) tab[i + t1] = 1;
            if(!p[i + t2]) tab[i + t2] = 1;
            if(!p[i + t3]) tab[i + t3] = 2;
        }
        else if(tab[i] == 2){
            if(!p[i + t1]) tab[i + t1] = 2;
            if(!p[i + t2]) tab[i + t2] = 2;
        }
    }

    int i = n - 1;
    while(tab[i] == 0) i--;
    cout << i + 1 << "\n";

    return 0;
}