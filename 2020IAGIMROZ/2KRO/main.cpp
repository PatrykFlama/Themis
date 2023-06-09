#include <bits/stdc++.h>
using namespace std;
#define pi pair<long long, int>
const long long INF = 1e18+5;
const int S = 500005;
vector< pair<int, int> > tab[S+3]; //v
long long l[S+3]; //v
int v, e;


struct compare{
    bool operator() (const pi &a, const pi &b){
        return a.first > b.first;
    }
};

void dijkstra(int s, int des){
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

        if(s == des)
            return;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int from, to;
    cin >> v >> e >> from >> to;
    from--, to--;

    for(int i = 0 ; i < e; i++){
        int a, b;
        cin >> a >> b; a--, b--;
        tab[a].emplace_back(0, b);
        tab[b].emplace_back(1, a);
    }

    for(int i = 0; i < v; i++)
        l[i] = INF;
    l[from] = 0;

    dijkstra(from, to);

    if(l[to] == INF)
        cout << -1 << "\n";
    else
        cout << l[to] << "\n";

    return 0;
}