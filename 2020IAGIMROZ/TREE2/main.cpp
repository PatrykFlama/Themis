#include <bits/stdc++.h>
using namespace std;
vector< vector<int> > tab(100005, vector<int>());
bool vis[100005];


void dfs(int n, int pop){
    vis[n] = 1;
    for(int i = 0; i < tab[n].size(); i++){
        if(tab[n][i] != pop && vis[tab[n][i]]){
            cout << "NIE\n";
            exit(0);
        }
        else if(tab[n][i] != pop)
            dfs(tab[n][i], n);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int v, e; cin >> v >> e;

    if(v-1 != e){
        cout << "NIE\n";
        exit(0);
    }

    int a, b;
    for(int i = 0; i < e; i++){
        cin >> a >> b; a--, b--;
        tab[a].push_back(b);
        tab[b].push_back(a);
    }

    dfs(0, -1);

    for(int i = 0; i < v; i++)
        if(!vis[i]){
            cout << "NIE\n";
            exit(0);
        }

    cout << "TAK\n";

    return 0;
}