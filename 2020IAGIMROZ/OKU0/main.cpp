#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    string temp;
    vector<long long> tab;

    for(int i = 0; i < n; i++){
        cin >> temp;
        if(temp != "*"){
            tab.push_back(stoll(temp));
            tab.push_back(i);
            if(tab.size() == 4)
                break;
        }
    }

    long long r = tab[2] - tab[0], l = tab[0];
    r /= tab[3] - tab[1];
    for(long long i = tab[1] - 1; i >= 0; i--)
        l -= r;

    cout << l << ' ' << r << "\n";

    return 0;
}