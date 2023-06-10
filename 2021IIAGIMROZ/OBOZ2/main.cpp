//! sale wykładowe
#include <bits/stdc++.h>
using namespace std;
const int L = 1e3+5;
vector<int> graph[L];
vector<int> allscc;   // list of scc representatives
vector<int> components[L];  // list of scc verticies
vector<int> smallestcomp(L, INT_MAX);
int pre[L], low[L], t;
//int subnr[L];   // to which scc you belong
bitset<L> onStack;
stack<int> st;


void dfs(int v){
    onStack[v] = true, low[v] = pre[v] = ++t;
    st.push(v);

    for(int i : graph[v]){
        if(!pre[i]){
            dfs(i);
            low[v] = min(low[v], low[i]);
        } else if(onStack[i])
            low[v] = min(low[v], pre[i]);
    }

    if(low[v] == pre[v]){
        allscc.push_back(v);
        int temp;
        while(temp != v){       //get verticies from the stack as long as they are not you
            temp = st.top(), st.pop();
            onStack[temp] = false;
            components[v].push_back(temp);
            smallestcomp[v] = min(smallestcomp[v], temp);
            //subnr[temp] = v;
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

    for(int i = 1; i <= n; i++)
        if(!pre[i])
            dfs(i);

    int maxx = INT_MIN, smallest = INT_MAX, ptr;
    for(int nr : allscc){
        if((maxx < int(components[nr].size())) || (maxx == int(components[nr].size()) && smallestcomp[nr] < smallest))
            maxx = int(components[nr].size()), ptr = nr, smallest = smallestcomp[nr];
    }

    // for(int i : allscc){
    //     cout << i << '/' << components[i].size() << '/' << smallestcomp[i] << ": ";
    //     for(auto j : components[i]){
    //         cout << j << ' ';
    //     }
    //     cout << '\n';
    // }

    sort(components[ptr].begin(), components[ptr].end());

    cout << maxx << '\n';
    for(int i : components[ptr])
        cout << i << '\n';
    cout << '\n';

    return 0;
}