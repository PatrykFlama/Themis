#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    long long temp, res;
    cin >> res >> temp;
    res ^= temp;
    cin >> temp;
    res^= temp;
    
    if(!res)
        cout << "Basia\n";
    else
        cout << "Ania\n";
    
    return 0;
}