#include <bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, temp, tt, s, w = 0;
    cin >> n;
    int tab[n];

    for(int i = 0; i < n; i++){
        cin >> tab[i];
    }
    cout << endl;

    for(int i = 0; i < n; i++){
        temp = tab[i];
        tab[i] = -1;
        if(temp > -1){
            tt = temp;
            temp = tab[temp-1];
            tab[tt-1] = -1;
            s = 1;
            while(temp != tab[i]){
                tt = temp;
                temp = tab[temp-1];
                tab[tt-1] = -1;
                s++;
            }
            w = max(w, s);
        }
    }

    cout << w;

	return 0;
}