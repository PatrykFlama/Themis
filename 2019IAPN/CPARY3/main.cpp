#include <bits/stdc++.h>
using namespace std;


bool func(const pair<int, int> a,
          const pair<int, int> b){
    long long multa = 1ll * a.first * a.second;
    long long multb = 1ll * b.first * b.second;

    if(multa != multb)
        return multa > multb;
    return ((2 * a.first) + (2 * a.second)) < ((2 * b.first) + (2 * b.second));
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    vector< pair<int, int> > tab(n);

    for(int i = 0; i < n; i++)
        cin >> tab[i].first >> tab[i].second;

    sort(tab.begin(), tab.end(), func);

    for(int i = 0; i < n; i++)
        cout << tab[i].first << ' ' << tab[i].second << "\n";

    return 0;
}