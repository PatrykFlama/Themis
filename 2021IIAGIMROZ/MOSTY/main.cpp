//! Mosty w grafie prostym
#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, int>
const int L = 1e5+5;
vector<int> graph[L];
int pre[L], low[L], t = 1;
priority_queue< pii, vector<pii>, greater<pii> > pq;


void dfs(int v, int p){
    low[v] = pre[v] = t++;

    for(int u : graph[v]){
        if(!pre[u]){
            dfs(u, v);
            low[v] = min(low[v], low[u]);
            if(pre[u] == low[u]){
                if(v < u)
                    pq.push({v, u});
                else
                    pq.push({u, v});
            }
        } else if(u != p)
            low[v] = min(low[v], pre[u]);
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m; cin >> n >> m;    // mn = 1e5, mm = 1e5
    for(int i = 0; i < m; i++){
        int a, b; cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    for(int i = 1; i <= n; i++)
        if(!pre[i])
            dfs(i, -1);

    while(!pq.empty()){
        cout << pq.top().first << ' ' << pq.top().second << '\n';
        pq.pop();
    }

    return 0;
}