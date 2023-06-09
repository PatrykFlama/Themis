#include <bits/stdc++.h>
using namespace std;
vector< vector<int> > tab(100005, vector<int>());
int vis[100005];



void bfs(int s){
    int l = 0;
    queue<int> q;
    q.push(s);
    vis[s] = l;
    l++;

    while(!q.empty()){
        queue<int> tq = q;
        for(int i = 0; i < q.size(); i++)
            q.pop();

        while(!tq.empty()){
            s = tq.front();
            tq.pop();

            for(int i = 0 ; i < tab[s].size(); i++){
                if(vis[tab[s][i]] == -1){
                    q.push(tab[s][i]);
                    vis[tab[s][i]] = l;
                }
            }
        }

        l++;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int v, e, s, d; cin >> v >> e >> s >> d;
    s--;

    for(int i = 0; i < v; i++)
        vis[i] = -1;

    int a, b;
    for(int i = 0; i < e; i++){
        cin >> a >> b; a--, b--;
        tab[a].push_back(b);
        tab[b].push_back(a);
    }

    bfs(s);

    for(int i = 0; i < v; i++){
        if(vis[i] == d)
            cout << i+1 << ' ';
    }

    return 0;
}