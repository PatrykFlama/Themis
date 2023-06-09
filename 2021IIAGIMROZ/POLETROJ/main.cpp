// PARSEKI
#include<bits/stdc++.h>
using namespace std;
#define FOR(val, from, to) for(int val = from; val < to; val++)
#define pii pair<int, int>

const int L = 2e5+5, LG = 18;
vector<pii> tree[L];    //{to, weight}
pii pp[L];
int jumps[L][LG];
long long prefsum[L];
int t = 1;


void dfs(int u, int depth, int father){
    pp[u].first = t++;

    jumps[u][0] = father;
    FOR(i, 1, LG)
        jumps[u][i] = jumps[jumps[u][i-1]][i-1];

    for(pii& i : tree[u])
        if(i.first != father){
            prefsum[i.first] = prefsum[u] + i.second;
            dfs(i.first, depth+1, u);
        }

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
    cout.tie(0);

    int n, q; cin >> n >> q;

    tree[1].push_back({1, 0});
    FOR(i, 1, n){
        int u, v, w; cin >> u >> v >> w;
        tree[u].push_back({v, w});
        tree[v].push_back({u, w});
    }

    dfs(1, 0, 1);

    while(q--){
        int u, v; cin >> u >> v;
        int temp = lca(u, v);
        cout << prefsum[u]-prefsum[temp]+prefsum[v]-prefsum[temp] << '\n';
    }

    return 0;
}