#include <bits/stdc++.h>
using namespace std;
int tab[300005];
int weight[300005];


int find(int a){
    if(a != tab[a])
        tab[a] = find(tab[a]);
    return tab[a];
}

bool find(int a, int b){
    return find(a) == find(b);
}

void uni(int a, int b){
    if(!find(a, b)){
        a = find(a), b = find(b);
        if(weight[a] < weight[b])
            tab[a] = b;
        else if(weight[a] > weight[b])
            tab[b] = a;
        else
            tab[b] = a, weight[a] += weight[b];
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int v, e, t; cin >> v >> e >> t;
    for(int i = 0; i <= v; i++)
        tab[i] = i;

    int a, b;
    while(e--){
        cin >> a >> b;
        uni(a, b);
    }

    bool q;
    while(t--){
        cin >> q >> a >> b;
        if(q)      //union
            uni(a, b);
        else       //find
            cout << (find(a, b) ? "TAK\n" : "NIE\n");
    }

    return 0;
}