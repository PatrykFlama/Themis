#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(0);

    int n; cin >> n;
    n *= 2; n++;
    int res = 0;

    while(n--){
        int temp; cin >> temp;
        res ^= temp;
    }

    cout << res << "\n";

    return 0;
}