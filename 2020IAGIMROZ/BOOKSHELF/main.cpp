#include <bits/stdc++.h>
using namespace std;
vector <int> tab[100005];
int into[100005];
int res[100005];
int v, e, sum = 0;


void bfs(){
    priority_queue <int, vector<int>, greater<int> > q;
    for (int i = 1; i <= v; i++)
        if(!into[i])
            q.push(i);

    while(!q.empty()){
        int temp = q.top();
        res[sum] = q.top(), sum++;
        q.pop();

        for(int i : tab[temp]){
            into[i]--;
            if(!into[i])
                q.push(i);
        }
    }

    for(int i = 1; i <= v; i++){
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
        cin >> a >> b;
        tab[b].push_back(a);
        into[a]++;
    }

    bfs();

    for(int i = 0; i < v; i++)
        cout << res[i] << ' ';

    return 0;
}