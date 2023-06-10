//! Bombowanie - znajdź punkty artykulacji
#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, int>
const int L = 1e5+5;
vector<int> graph[L];
int pre[L], low[L], t = 0;
set<int> S;


void dfs(int v, int p){
    int tempsum = 0;
    low[v] = pre[v] = ++t;

    for(int u : graph[v]){
        if(!pre[u]){
            dfs(u, v);
            low[v] = min(low[v], low[u]);
            if(low[u] >= pre[v] && p != -1)
                S.insert(v);
            ++tempsum;
        } else if(u != p)
            low[v] = min(low[v], pre[u]);
    }

    if(tempsum > 1 && p == -1)
        S.insert(v);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m; cin >> n >> m;    // minn = 1e5, minm = 1e6
    for(int i = 0; i < m; i++){
        int a, b; cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    for(int i = 1; i <= n; i++)
        if(!pre[i])
            dfs(i, -1);

    cout << S.size() << '\n';
    for(auto i : S)
        cout << i << ' ';
    cout << '\n';

    return 0;
}