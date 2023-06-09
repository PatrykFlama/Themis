#include <bits/stdc++.h>
using namespace std;

const int T = (1 << 17);
int tree[2 * T + 5];
#define cerr if(1) cout

void update(int l, int r, int n) {
    if(l > r) return;
    l += T, r += T;

    tree[l] += n;
    if(l != r)
        tree[r] += n;

    while (l/2 != r/2) {
        if(l%2 == 0)
            tree[l+1] += n;
        if(r%2 == 1)
            tree[r-1] += n;

        l /= 2, r /= 2;
    }
}

int find(int node){
    node += T;
    int res = 0;
    while(node != 1){
        res += tree[node];
        node /= 2;
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;

    while (t--) {
        bool q; cin >> q;
        if(q){
            int a, b, c;
            cin >> a >> b >> c;
            update(a, b, c);
        } else{
            int a; cin >> a;
            cout << find(a) << "\n";
        }
    }

    return 0;
}