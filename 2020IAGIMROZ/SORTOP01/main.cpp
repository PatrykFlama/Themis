#include <bits/stdc++.h>
using namespace std;
vector< vector<int> > tab(100005, vector<int>());
int into[100005];
int res[100005];
int v, e, sum = 0;


void bfs(){
    priority_queue<int> q;
    for(int i = 0; i < v; i++)
        if(into[i] == 0)
            q.push(i);

    while(!q.empty()){
        int temp = q.top();
        q.pop();
        res[sum] = temp, sum++;

        for(int i : tab[temp]){
            into[i]--;
            if(into[i] == 0)
                q.push(i);
        }
    }

    for(int i = 0; i < v; i++){
        if(into[i] > 0){
            cout << "NIE\n";
            exit(0);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> v >> e;
    int a, b;
    for(int i = 0; i < e; i++){
        cin >> a >> b; a--, b--;
        tab[a].push_back(b);
        into[b]++;
    }

    bfs();

    for(int i = 0; i < v; i++)
        cout << res[i]+1 << ' ';

    return 0;
}