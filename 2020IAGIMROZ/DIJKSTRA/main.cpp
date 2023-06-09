#include <bits/stdc++.h>
using namespace std;
#define INF 1e18+5
#define pi pair<long long, int>
vector< pair<int, int> > tab[300005]; //v
long long l[300005]; //v
int v, e;


struct compare{
    bool operator() (const pi &a, const pi &b){
        return a.first > b.first;
    }
};

void dijkstra(int s){
    priority_queue<pi, vector<pi>, compare> q;
    q.push(make_pair(l[s], s));

    while(!q.empty()){
        s = q.top().second;
        long long temp = q.top().first;
        q.pop();

        if (temp == l[s]) {
            for(pi i : tab[s])
                if(l[s] + i.first < l[i.second]) {
                    l[i.second] = l[s] + i.first;
                    q.push(make_pair(l[i.second], i.second));
                }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> v >> e;

    for(int i = 0 ; i < e; i++){
        int a, b, c;
        cin >> a >> b >> c; a--, b--;
        tab[a].emplace_back(c, b);
        tab[b].emplace_back(c, a);
    }

    for(int i = 1; i < v; i++)
        l[i] = INF;

    dijkstra(0);

    for(int i = 1; i < v; i++)
        if(l[i] == INF)
            cout << -1 << ' ';
        else
            cout << l[i] << ' ';
    cout << "\n";

    return 0;
}