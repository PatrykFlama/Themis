#include <bits/stdc++.h>
using namespace std;


void f(short int from, short int to, short int helper, int n){
    if(n == 1){
        cout << from << ' ' << to << "\n";
        return;
    }

    f(from, helper, to, n - 1);
    cout << from << ' ' << to << "\n";
    f(helper, to, from, n - 1);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    f(1, 3, 2, n);


    return 0;
}