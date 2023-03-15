#include <bits/stdc++.h>
using namespace std;


bool fsort(vector<int> a, vector<int> b){
    int suma = 0, sumb = 0;
    for(int i = 0; i < a.size()-1; i++){
        suma += a[i];
        sumb += b[i];
    }

    if(suma == sumb){
        return a[a.size() - 1] < b[b.size() - 1];
    }
    return suma < sumb;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    vector< vector<int> > tab(n, vector<int> (n));

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> tab[i][j];

    for(int i = 0; i < n; i++)
        tab[i].push_back(i);

    sort(tab.begin(), tab.end(), fsort);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            cout << tab[i][j] << ' ';
        cout << "\n";
    }

    return 0;
}