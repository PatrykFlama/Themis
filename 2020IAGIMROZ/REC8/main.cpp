#include <bits/stdc++.h>
using namespace std;


void f(int from, int to, vector<int> tab){
    if(!to) {
        for (int i : tab)
            cout << i << ' ';
        cout << "\n";
    }

    for(int i = from; i <= to; i++){
        tab.push_back(i);
        f(i+1, to - i, tab);
        tab.pop_back();
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    vector<int> tab;

    f(1, n, tab);

    return 0;
}