#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int T = 1 << 20;

ll tree[T << 1], lazy[T << 1];
const int NONE = 0; //! UWAGA TO ZALEZY (tutaj trzeba dobrac zeby nie kolidowało)


void push(int node, int lo, int hi) {
    // if(have_lazy[node]) 

    if(lazy[node] != NONE) {
        tree[node] = 1LL * (hi - lo + 1) * lazy[node]; //! od operacji
        if(lo != hi) {
            lazy[node * 2]     = lazy[node]; //! od operacji
            lazy[node * 2 + 1] = lazy[node]; //! od operacji
        }
        lazy[node] = NONE;
    }
}

ll get(int a, int b, int node = 1, int lo = 0, int hi = T - 1) {
    // zepchnij
    push(node, lo, hi);
    
    if(hi < a or b < lo)
        return 0; //! UWAGA TO ZALEZY od zapytania

    if(a <= lo and hi <= b)
        return tree[node];

    // przecina sie
    int mid = (lo + hi) / 2;
    ll l = get(a, b, node * 2    , lo     , mid);
    ll r = get(a, b, node * 2 + 1, mid + 1, hi );
    return l + r; //! UWAGA ZALEZY od zapytania
}

void update(int a, int b, int val, int node = 1, int lo = 0, int hi = T - 1) {
    // zepchnij
    push(node, lo, hi);

    if(hi < a or b < lo)
        return;

    if(a <= lo and hi <= b) {
        // caly w srodku
        lazy[node] = val; //! UWAGA TO ZALEZY od operacji
        push(node, lo, hi);
        return;
    }

    // przecina sie
    int mid = (lo + hi) / 2;
    update(a, b, val, node * 2    , lo     , mid);
    update(a, b, val, node * 2 + 1, mid + 1, hi );
    tree[node] = tree[node * 2] + tree[node * 2 + 1]; //! UWAGA TO ZALEZY od zapytania
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        int temp; cin >> temp;
        update(i, i, temp);
    }
    

    int t; cin >> t;
    while(t--){
        string s; cin >> s;

        if(s == "Query"){
            int a, b; cin >> a >> b;
            cout << get(a, b) << '\n';
        } else if(s == "Update"){
            int a, b, val; cin >> a >> b >> val;
            update(a, b, val);
        }
    }

    return 0;
}