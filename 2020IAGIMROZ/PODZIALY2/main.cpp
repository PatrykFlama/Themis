#include <bits/stdc++.h>
using namespace std;


void f(int from, int to, vector<int> tab, int k){
    for(int i = from; i <= to; i++){
        if(tab.size() < k){
            tab.push_back(i);
            f(i, to - i, tab, k);
            tab.pop_back();
        }
    }

    if(!to) {
        if(tab.size() == k){
            for (int i : tab)
                cout << i << ' ';
            cout << "\n";
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, k; cin >> n >> k;
    vector<int> tab;
//    time_t time1 = time(nullptr);

    f(1, n, tab, k);

//    time_t time2 = time(nullptr);
//    cout << "\n\n\n" << time2 - time1 << "\n";

    return 0;
}