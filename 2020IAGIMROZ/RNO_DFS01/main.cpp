#include <bits/stdc++.h>
using namespace std;
vector< vector<int> > tab(100005, vector<int>());
int vis[100005];


void dfs(int s, int p){
    vis[s] = 1;
    for(int i : tab[s]){
        if(i != p){
            dfs(i, s);
            vis[s] += vis[i];
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int v, e; cin >> v >> e;
    int a, b;
    for(int i = 0; i < e; i++){
        cin >> a >> b; a--, b--;
        tab[a].push_back(b);
        tab[b].push_back(a);
    }

    dfs(0, -1);

    for(int i = 0; i < v; i++)
        cout << vis[i] << ' ';
    cout << "\n";

    return 0;
}