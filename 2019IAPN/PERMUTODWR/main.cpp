#include <bits/stdc++.h>
using namespace std;



int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int tab1[n], tab2[n];
    for(int i = 0; i < n; i++){
        cin >> tab1[i];
        tab2[tab1[i]-1] = i+1;
    }
    for(int i = 0; i < n; i++){
        cout << tab2[i] << ' ';
    }


    return 0;
}