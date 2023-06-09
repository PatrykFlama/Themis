#include <bits/stdc++.h>
using namespace std;
const int T = 1 << 20;

int tree[T << 1], lazy[T << 1];
const int NONE = 0; //! UWAGA TO ZALEZY (tutaj trzeba dobrac zeby nie kolidowało)


int func(int a, int b){
    return max(a, b);
}

void push(int node, int lo, int hi) {
    if(lazy[node] != NONE) {
        tree[node] = lazy[node]; //! od operacji
        if(lo != hi) {
            lazy[node * 2]     = lazy[node]; //! od operacji
            lazy[node * 2 + 1] = lazy[node]; //! od operacji
        }
        lazy[node] = NONE;
    }
}

int get(int a, int b, int node = 1, int lo = 0, int hi = T - 1) {
    push(node, lo, hi);
    
    if(hi < a or b < lo)        //poza
        return NONE; //! UWAGA TO ZALEZY od zapytania

    if(a <= lo and hi <= b)
        return tree[node];

    // przecina sie
    int mid = (lo + hi) / 2;
    int l = get(a, b, node * 2    , lo     , mid);
    int r = get(a, b, node * 2 + 1, mid + 1, hi );
    return func(l, r); //! UWAGA ZALEZY od zapytania
}

void update(int a, int b, int val, int node = 1, int lo = 0, int hi = T - 1) {
    push(node, lo, hi);

    if(hi < a or b < lo)    //poza
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
    tree[node] = func(tree[node * 2], tree[node * 2 + 1]); //! UWAGA TO ZALEZY od zapytania
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int d, t; cin >> d >> t;    // szerokość ; liczba klocków
    while(t--){
        int l, x;
        cin >> l >> x;
        update(x, x+l-1, get(x, x+l-1)+1);
    }

    cout << get(0, d+1) << '\n';

    return 0;
}