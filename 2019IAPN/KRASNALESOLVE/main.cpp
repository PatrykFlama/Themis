#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n; cin >> n;
    long long h[n];

    for(int i = 0; i < n; i++)
        cin >> h[i];

    sort(h, h+n);

    long long suma = 0;
    for(int i = 1; i < n; i++){
        if(h[i] != h[i-1]+1){
            while(h[i-1]+1 != h[i]){
                suma++;
                h[i-1]++;
            }
        }
    }

    cout << suma << "\n";

    return 0;
}