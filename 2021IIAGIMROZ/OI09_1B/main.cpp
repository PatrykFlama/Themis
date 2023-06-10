//konowojazer
#include<bits/stdc++.h>
using namespace std;
#define foo(val, from, to) for(int val = from; val < to; val++)
const int L = 2e5+5, LG = 20;

vector<int> tree[L];
pair<int, int> pp[L];
int jumps[L][LG], depth[L];
int t = 1;


void dfs(int u, int v, int dep){
    pp[u].first = t++;
    depth[u] = dep;

    jumps[u][0] = v;
    foo(i, 1, LG)
        jumps[u][i] = jumps[jumps[u][i-1]][i-1];

    for(int i : tree[u])
        if(i != v)
            dfs(i, u, dep+1);

    pp[u].second = t++;
}

bool in_stree(int u, int v){
    return (pp[u].first <= pp[v].first) && (pp[u].second >= pp[v].second);
}

int lca(int u, int v){
    if(in_stree(u, v))
        return u;
    if(in_stree(v, u))
        return v;
    for(int i = LG-1; i >= 0; i--){
        if(!in_stree(jumps[u][i], v))
            u = jumps[u][i];
    }
    return jumps[u][0];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;    //no. cities
    //read roads
    tree[1].push_back(1);
    foo(i, 2, n+1){
        int a, b; cin >> a >> b;
        tree[a].push_back(b);
        tree[b].push_back(a);
    }
    //calculate
    dfs(1, 1, 0);

    int u, v, suma = 0;
    cin >> t >> v;
    t--;
    while(t--){
        cin >> u;
        suma += depth[v] + depth[u] - 2*depth[lca(u,v)];
        v = u;
    }

    cout << suma << '\n';

    return 0;
}