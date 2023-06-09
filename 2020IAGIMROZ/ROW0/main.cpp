#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    long double l, k, a, b;
    cin >> l >> k >> a >> b;
    cout << (long long)floor(((l/k)*b)/a) << "\n";

    return 0;
}