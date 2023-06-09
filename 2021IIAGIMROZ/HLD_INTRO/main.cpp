#include <bits/stdc++.h>
using namespace std;

#define FOR(from, to) for(int i = from; i <= to; i++)
const int L = 1e5 + 7, T = (1 << 18);

/* #region ---- DECLARATION ---- */
vector<int> tree[L];

int father[L];                  //? father of vertex
// int depth[L];                   //? depth of vertex

int heavy[L];                   //? is the path(father of v to v) heavy
int head[L];                    //? head of heavy path

int range_tree[T << 1];               //? range tree of heavy paths
int pos[L], pos_ptr = 0;        //? vertex position in range tree
/* #endregion */

/* #region ---- Initialization ---- */

int dfs(int v){
    int children = 0, maxx = INT_MIN;

    for(int u : tree[v]){
        if(u != father[v]){
            father[u] = v;
            // depth[u] = depth[v] + 1;

            int children_children = dfs(u);
            children += children_children;

            if(maxx < children_children)
                maxx = children_children, heavy[v] = u;
        }
    }

    return children;
}

void make_paths(int v, int h){
    pos[v] = pos_ptr++;
    head[v] = h;

    if(heavy[v])
        make_paths(heavy[v], h);
    
    for(int u : tree[v]){
        if(u != father[v] && u != heavy[v])
            make_paths(u, u);
    }
}

void init(int &n){
    cin >> n;

    father[1] = 1;
    FOR(1, n-1){
        int a, b; cin >> a >> b;
        tree[a].push_back(b);
        tree[b].push_back(a);
    }

    dfs(1);
    make_paths(1, 1);
}
/* #endregion */

/* #region ---- Range Tree operations ---- */
int range_tree_query(int l, int r){
    l += T, r += T;
    int res = range_tree[l];
    if(l != r) res += range_tree[r];

    while(l/2 != r/2){
        if(l%2 == 0)
            res += range_tree[l+1];
        if(r%2 == 1)
            res += range_tree[r-1];

        l /= 2, r /= 2;
    }

    return res;
}

void range_tree_update(int v, int val){
    v += T;
    while(v){
        range_tree[v] += val;
        v /= 2;
    }
}
/* #endregion */

/* #region ---- HLD Operations ---- */
int query(int a, int b){
    int res = 0;

    while(head[a] != head[b]){
        // if(depth[a] > depth[b])     // assure that b is lower
        //     swap(a, b);
        res += range_tree_query(pos[head[b]], pos[b]);
        b = father[head[b]];
    }

    // if(depth[a] > depth[b])     // assure that b is lower
        // swap(a, b);
    res += range_tree_query(pos[head[b]], pos[b]);

    return res;
}

void update(int a, int val){
    range_tree_update(pos[a], val);
}
/* #endregion */

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    init(n);

    int q; cin >> q;
    while(q--){
        int op; cin >> op;

        if(op == 1){
            int a, b; cin >> a >> b;
            cout << query(a, b) << '\n';
        } else{
            int a, val; cin >> a >> val;
            update(a, val);
        }
    }

    return 0;
}