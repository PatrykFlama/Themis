#include <bits/stdc++.h>
using namespace std;


int NWD(int a, int b){
    int temp;

    while(b){
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

bool compare(const pair<int, int> &a,
             const pair<int, int> &b){
    int tempa = NWD(a.first, a.second);
    int tempb = NWD(b.first, b.second);

    if(tempa != tempb)
        return tempa > tempb;

    if((a.second - a.first) != (b.second - b.first))
        return (a.second - a.first) > (b.second - b.first);

    return a.first > b.first;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    vector< pair<int, int> > tab(n);

    for(int i = 0; i < n; i++)
        cin >> tab[i].first >> tab[i].second;

    sort(tab.begin(), tab.end(), compare);

    for(int i = n-1; i >= 0; i--){
        cout << tab[i].first << ' ' << tab[i].second << "\n";
    }

    return 0;
}