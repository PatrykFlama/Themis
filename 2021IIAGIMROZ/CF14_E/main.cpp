#include<bits/stdc++.h>
using namespace std;
#define foo(val, from, to) for(int val = from; val < to; val++)

const int L = 1e6+5;
vector<int> tree[L];
pair<int, int> pp[L];
int t;


void dfs(int node){
    pp[node].first = t++;

    for(int i : tree[node])
        dfs(i);

    pp[node].second = t++;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    int n; cin >> n;
    foo(i, 2, n+1){
        int temp; cin >> temp;
        tree[temp].push_back(i);
    }

    dfs(1);

    int t; cin >> t;
    while(t--){
        int u, v; cin >> u >> v;
        if((pp[u].first >= pp[v].first) && (pp[u].second <= pp[v].second))
            cout << "TAK\n";
        else
            cout << "NIE\n";
    }

    return 0;
}