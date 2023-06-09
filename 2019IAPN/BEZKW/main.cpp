#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 0, z = 0;
    cin >> n;
    int t[n+1];

    for(int i = 1; i <= n; i++){
        t[i] = 1;
    }

    for(int i = 2; i*i <= n; i++){
        for(int j = i*i; j <= n; j+=i*i){
            t[j] = 0;
        }
    }
    for(int p = 1; p <= n; p++){
        if(t[p]==1){
            z++;
        }
    }
    cout << z;

    return 0;
}