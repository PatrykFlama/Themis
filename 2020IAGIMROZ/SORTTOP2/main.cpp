#include <bits/stdc++.h>
using namespace std;
vector<int> tab[1000005];
int into[1000005];
int v, e;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> v >> e;

    for(int i = 0; i < e; i++){
        int a, b;
        cin >> a >> b;
        tab[a].push_back(b);
        into[b]++;
    }

    while(v--){
        int temp; cin >> temp;
        if(into[temp]){
            cout << temp << "\n";
            return 0;
        }
        for(int i : tab[temp])
            into[i]--;
    }

    cout << "OK\n";

    return 0;
}