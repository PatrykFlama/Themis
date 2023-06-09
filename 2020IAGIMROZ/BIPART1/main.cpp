#include <bits/stdc++.h>
using namespace std;
vector< vector<int> > tab(1000005, vector<int>());
int vis[1000005];


void bfs(int s){
    queue<int> q;
    q.push(s);
    vis[s] = 1;

    while(!q.empty()){
        s = q.front();
        q.pop();

        for(int i : tab[s]){
            if(vis[i] == 0){
                vis[i] = vis[s] * -1;
                q.push(i);
            } else if(vis[i] == vis[s]){
                cout << "NIE\n";
                exit(0);
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int v, e; cin >> v >> e;
    int a, b;
    for(int i = 0; i < e; i++){
        cin >> a >> b; a--, b--;
        tab[a].push_back(b);
        tab[b].push_back(a);
    }

    for(int i = 0; i < v; i++){
        if(!vis[i])
            bfs(i);
    }

    cout << "TAK\n";

    return 0;
}