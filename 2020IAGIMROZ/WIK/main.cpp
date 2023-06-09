#include <bits/stdc++.h>
using namespace std;
int tab[100005];
int weight[100005];
int n, t;


int find(int a){
    if(tab[a] != a)
        tab[a] = find(tab[a]);
    return tab[a];
}

bool find(int a, int b){
    if(find(a) == find(b))
        return 1;
    return 0;
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

    cin >> n >> t;
    for(int i = 0; i < n; i++)
        tab[i] = i;

    bool op;
    int a, b;
    while(t--){
        cin >> op >> a >> b;
        if(op)                    //union
            uni(a, b);
        else if(find(a, b))       //find
            cout << "Tak\n";
        else
            cout << "Nie\n";
    }

    return 0;
}