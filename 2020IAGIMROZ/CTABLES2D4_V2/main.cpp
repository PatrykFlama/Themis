#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    int tab[2*n] = {0};

    //---------ADD--------
    int input;
    for(int i = n-1; i >= 0; i--){
        for(int j = i; j < i+n; j++){
            cin >> input;
            tab[j] += input;
        }
    }

    //---------FIND---------
    int maxx = -1, ans;
    for(int i = 0; i < 2*n; i++){
        if(tab[i] > maxx){
            maxx = tab[i];
            ans = i+1;
        }
    }

    cout << ans << ' ' << maxx << "\n";

    return 0;
}