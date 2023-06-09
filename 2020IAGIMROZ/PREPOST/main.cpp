#include <bits/stdc++.h>
using namespace std;
vector< vector<int> > tab(100005, vector<int>());
vector< pair<int, int> > pp(100005, pair<int, int>());
bool vis[100005];
int tin = 1;
int tout = 1;


void dfs(int s){
    pp[s].first = tin; tin++;
    vis[s] = true;
    for(int i = 0; i < tab[s].size(); i++){
        if(!vis[tab[s][i]]){
            dfs(tab[s][i]);
        }
    }
    pp[s].second = tout; tout++;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int v, e; cin >> v; e = v-1;
    int a, b;
    for(int i = 0; i < e; i++){
        cin >> a >> b; a--, b--;
        tab[a].push_back(b);
        tab[b].push_back(a);
    }

    dfs(0);

    for(int i = 0; i < v; i++)
        cout << pp[i].first << ' ';
    cout << "\n";
    for(int i = 0; i < v; i++)
        cout << pp[i].second << ' ';
    cout << "\n";

    return 0;
}