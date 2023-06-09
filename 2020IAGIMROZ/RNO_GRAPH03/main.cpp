#include <bits/stdc++.h>
using namespace std;

vector<int> tab[1000005];
pair<int, int> pp[1000005];
bool vis[1000005];
int tpr = 1, tpo = 1;


void dfs(int s){
    pp[s].first = tpr; tpr++;
    vis[s] = true;

    for(int i : tab[s])
        if (!vis[i])
            dfs(i);

    pp[s].second = tpo; tpo++;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int v; cin >> v;
    int a, b;
    for(int i = 2; i <= v; i++){
        cin >> a;
        tab[a].push_back(i);
        tab[i].push_back(a);
    }

    dfs(1);

    int n; cin >> n;
    while(n--){
        cin >> a >> b;
        if((pp[b].first <= pp[a].first) && (pp[a].second <= pp[b].second))
            cout << "TAK\n";
        else
            cout << "NIE\n";
    }

    return 0;
}