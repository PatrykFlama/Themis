#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x; cin >> n;
    bool tab[1000005];
    for(int i = 0; i < n; i++){
        cin >> x;
        if(x < 1000005)
            tab[x] = true;
    }

    int y = 1;
    while(true){
        if(!tab[y]){
            cout << y;
            return 0;
        }
        y++;
    }

    return 0;
}