#include <bits/stdc++.h>
using namespace std;


int f(int n){
    if(n == 0)
        return 2;

    if(n%2 == 0)
        return f(n-1) * 2;
    else
        return f(n-1) + 3;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    cout << f(n) << "\n";

    return 0;
}