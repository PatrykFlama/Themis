#include <bits/stdc++.h>
using namespace std;



int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, input;
    cin >> n;
    int tab[n] = {0};

    for(int i = 0; i < n; i++){
        cin >> input;
        input--;
        tab[input]++;
    }
    for(int i = 0; i < n; i++){
        if(tab[i] == 0){
            cout << "NIE\n";
            return 0;
        }
    }
    cout << "TAK\n";

    return 0;
}