#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;

    while(t--){
        int v, e; cin >> v >> e;
        e *= 2;
        vector<int> tab(v, 0);

        int temp;
        while(e--){
            cin >> temp;
            temp--;
            tab[temp]++;
        }

        for(int i : tab)
            cout << i << ' ';
        cout << "\n";
    }

    return 0;
}