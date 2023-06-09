#include <bits/stdc++.h>
using namespace std;
#define pii pair< int, pair<int, int> >

int tab[1000];
int weight[1000];
pii edges[1000000];
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

    for(int i = 0; i < e; i++)
        cin >> edges[i].second.first >> edges[i].second.second >> edges[i].first;

    sort(edges, edges+e);

    int sum = 0, temp = 0;
    for(int i = 0; i < e && temp < v-1; i++) {
        if(!find(edges[i].second.first, edges[i].second.second)) {
            uni(edges[i].second.first, edges[i].second.second);
            sum += edges[i].first, temp++;
        }
    }

    cout << sum;

    return 0;
}