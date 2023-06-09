#include <bits/stdc++.h>
using namespace std;


bool pairsec(const pair<int, int> &x,
             const pair<int, int> &y){
    if(x.second != y.second)
        return x.second < y.second;
    else
        return x.first > y.first;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    vector< pair<int, int> > tab(n);

    for(int i = 0; i < n; i++){
        int temp;
        cin >> tab[i].first >> temp;
        tab[i].second = temp - tab[i].first;
    }

    sort(tab.begin(), tab.end(), pairsec);

    for(int i = n-1; i >= 0; i--){
        cout << tab[i].first << ' ' << tab[i].second + tab[i].first << "\n";
    }

    return 0;
}