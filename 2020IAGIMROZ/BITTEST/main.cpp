#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, res = 0, a; cin >> n;

    while(n--){
        cin >> a;
        res += 1 << (a-1);
    }

    cout << res << "\n";

    return 0;
}