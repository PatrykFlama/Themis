#include<bits/stdc++.h>
using namespace std;
#define foo(i, a, b) for(int i = a; i <= b; i++)

const int L = 1e6+5;
vector<int> tree[L];
int father[L];
int depth[L];


void dfs(int dep, int node){
    depth[node] = dep;

    for(int i : tree[node])
        if(depth[i] == 0)
            dfs(dep+1, i);
}

int main() {
    ios_base::sync_with_stdio(false);
    cout.tie(0);

    int n; cin >> n;
    foo(i, 2, n){
        cin >> father[i];
        tree[father[i]].push_back(i);
    }

    dfs(1, 1);

    int t; cin >> t;
    while(t--){
        int u, v; cin >> u >> v;
        while(u != v){
            if(depth[u] > depth[v])
                u = father[u];
            else
                v = father[v];
        }
        cout << u << '\n';
    }

    return 0;
}