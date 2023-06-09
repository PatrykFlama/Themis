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

        int maxx = -1, no;
        for(int i = 0; i < tab.size(); i++){
            if(tab[i] >= maxx){
                maxx = tab[i];
                no = i;
            }
        }
        cout << no+1 << ' ' << maxx << "\n";
    }

    return 0;
}