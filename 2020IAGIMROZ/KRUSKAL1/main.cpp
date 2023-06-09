#include <bits/stdc++.h>
using namespace std;
#define pii pair< pair<int, int>, pair<int, int> >

int tab[7000];
int weight[7000];
pii edges[300000];
int v, e;


int find(int a){
    if(tab[a] != a)
        tab[a] = find(tab[a]);
    return tab[a];
}

bool find(int a, int b){
    return find(a) == find(b);
}

void uni(int a, int b){
    if(!find(a, b)){
        int roota = find(a), rootb = find(b);
        if(weight[roota] < weight[rootb])
            tab[roota] = rootb;
        else if(weight[roota] > weight[rootb])
            tab[rootb] = roota;
        else
            tab[rootb] = roota, weight[roota]++;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> v >> e;
    for(int i = 0; i <= v; i++)
        tab[i] = i;

    for(int i = 0; i < e; i++) {
        cin >> edges[i].second.first >> edges[i].second.second >> edges[i].first.first;
        edges[i].first.second = i+1;
    }

    sort(edges, edges+e);

    int temp = 0;
    for(int i = 0; i < e && temp < v-1; i++) {
        if(!find(edges[i].second.first, edges[i].second.second)) {
            uni(edges[i].second.first, edges[i].second.second);
            cout << edges[i].first.second << "\n";
        }
    }

    return 0;
}