//! BIGNUM
#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long


ll string_mod(string& s, ll p){
    ll res = 0;
    for(char c : s)
        res = (res*10 + (c-'0')) % p;

    return res;
}

ll notsofast_mult(ll a, ll b, ll& p){
    ll res = 0;
    while(b){
        if(b%2 == 1)
            res = (res+a) % p;
        a = (a+a) % p;
        b /= 2;
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    //cin.tie(0);
    //cout.tie(0);

    string stringa, stringb;
    ll p;
    cin >> stringa >> stringb >> p;

    ll a = string_mod(stringa, p), b;
    if(p > 1000) b = string_mod(stringb, p-1);
    else b = stoll(stringb);

    ll res = 1;
    while(b){
        if(b%2 == 1)
            res = notsofast_mult(a, res, p);
        a = notsofast_mult(a, a, p);
        b /= 2;
    }

    cout << res << '\n';

    return 0;
}
//------------
//! Bombowanie - znajdź punkty artykulacji
#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, int>
const int L = 1e5+5;
vector<int> graph[L];
int pre[L], low[L], t = 0;
set<int> S;


void dfs(int v, int p){
    int tempsum = 0;
    low[v] = pre[v] = ++t;

    for(int u : graph[v]){
        if(!pre[u]){
            dfs(u, v);
            low[v] = min(low[v], low[u]);
            if(low[u] >= pre[v] && p != -1)
                S.insert(v);
            ++tempsum;
        } else if(u != p)
            low[v] = min(low[v], pre[u]);
    }

    if(tempsum > 1 && p == -1)
        S.insert(v);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m; cin >> n >> m;    // minn = 1e5, minm = 1e6
    for(int i = 0; i < m; i++){
        int a, b; cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    for(int i = 1; i <= n; i++)
        if(!pre[i])
            dfs(i, -1);

    cout << S.size() << '\n';
    for(auto i : S)
        cout << i << ' ';
    cout << '\n';

    return 0;
}