#include<bits/stdc++.h>
using namespace std;
#define foo(val, from, to) for(int val = from; val < to; val++)

const int L = 2e5+5, LG = 18;
vector<int> tree[L];
pair<int, int> pp[L];
int jumps[L][LG], dep[L];
int t = 1;


void dfs(int u, int depth, int father){
    pp[u].first = t++;
    dep[u] = depth;

    jumps[u][0] = father;
    foo(i, 1, LG)
        jumps[u][i] = jumps[jumps[u][i-1]][i-1];

    for(int i : tree[u])
        if(i != father)
            dfs(i, depth+1, u);

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

    int n; cin >> n;

    tree[1].push_back(1);
    foo(i, 2, n+1){
        int u, v;
        cin >> u >> v;
        tree[u].push_back(v); tree[v].push_back(u);
    }

    dfs(1, 0, 1);

    int w;
    cin >> w;
    foo(i, 0, w){
        int r, u, v; cin >> r >> u >> v;
        int lca1 = lca(u, v), lca2 = lca(u, r), lca3 = lca(v, r);

        if(dep[lca2] <= dep[lca1] && dep[lca3] <= dep[lca1])
            cout << lca1 << '\n';
        else if(dep[lca2] > dep[lca3])
            cout << lca2 << '\n';
        else
            cout << lca3 << '\n';
    }

    return 0;
}