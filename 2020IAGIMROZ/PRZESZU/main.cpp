#include <bits/stdc++.h>
using namespace std;
vector< vector<int> > tab(100005, vector<int>());
vector<bool> visited(1000005, false);


void dfs(int pos){
    visited[pos] = true;
    cout << pos + 1 << ' ';
    for(int i : tab[pos])
        if(!visited[i])
            dfs(i);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int v, e; cin >> v >> e;

    for(int i = 0; i < e; i++){
        int a, b; cin >> a >> b;
        a--, b--;
        tab[a].push_back(b);
        tab[b].push_back(a);
    }

    for(int i = 0; i < v; i++)
        if(!visited[i])
            dfs(i);

    return 0;
}