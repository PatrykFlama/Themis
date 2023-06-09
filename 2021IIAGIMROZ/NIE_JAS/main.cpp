//! korytarze
#include <bits/stdc++.h>
using namespace std;
const int L = 1e3+5;
vector<int> graph[L], comp[L];
vector<int> sccs; //list of strongly connected components... as i assume
int pre[L], low[L], snr[L], t;
bool onStack[L];
stack<int> st;


void dfs(int v){
    onStack[v] = 1, low[v] = pre[v] = ++t;
    st.push(v);

    for(int i : graph[v]){
        if(!pre[i]){
            dfs(i);
            low[v] = min(low[v], low[i]);
        } else if(onStack[i])
            low[v] = min(low[v], pre[i]);
    }

    if(low[v] == pre[v]){
        sccs.push_back(v);
        int temp;
        while(temp != v){
            temp = st.top(), st.pop();
            onStack[temp] = 0;
            //comp[v].push_back(temp);          //??? what was that for?
            //snr[temp] = v;      //??? and that?
        }
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    //cout.tie(0);

    int n, m; cin >> n >> m;
    for(int i = 0; i < m ; i++){
        int a, b; cin >> a >> b;
        graph[a].push_back(b);
    }

    for(int i = 0; i < n; i++)
        if(!pre[i])
            dfs(i);

    int res = 0;
    for(int i : sccs)
        if(i) res++;

    cout << res << '\n';

    return 0;
}