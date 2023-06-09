#include <bits/stdc++.h>
using namespace std;
const int L = 1e6+15;
vector<int> tree[L];
bool vis[L];
int children[L], heavy[L];
int heavies = 0;


void dfs(int v, int father){
    vis[v] = true;

    int sum = 0, maxx = INT_MIN, ptr = -1;
    for(int i : tree[v]){
        if(!vis[i]){
            dfs(i, v);
            children[v] += children[i] + 1;
            if(maxx < children[i])
                maxx = children[i], ptr = i;
        }
    }

    if(ptr != -1){
        heavy[v] = ptr;
        if(!heavy[father])
            heavies++;
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    for(int i = 1; i < n; i++){
        int a, b; cin >> a >> b;
        tree[a].push_back(b);
        tree[b].push_back(a);
    }

    dfs(1, 0);

    cout << heavies << '\n';
    for(int i = 1; i <= n; i++){
        if(heavy[i])
            cout << i << ' ' << heavy[i] << '\n';
    }

    return 0;
}