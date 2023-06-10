//! ILE LICZB 2
#include <bits/stdc++.h>
using namespace std;
const int L = 1e3+15;
int dp[2][L][10];
// dp[n-cyfrowe][suma k][cyfra] == ile takich liczb


void fill(int x, int& k){
    for(int i = 0; i <= k; i++)
        for(int j = 0; j < 10; j++)
            dp[x][i][j] = 0;
}

int main(){
    ios_base::sync_with_stdio(false);
    //cin.tie(0);
    //cout.tie(0);

    int n, k; cin >> n >> k;
    for(int i = 1; i < 10; i++)
        dp[1][i][i] = 1;

    for(int dlugosc = 1; dlugosc < n; dlugosc++){
        for(int suma = 0; suma <= k; suma++)
            for(int a = 0; a < 10 && a <= suma; a++){
                int tempsum = 0;
                for(int b = 0; b < 10; b++)
                    if(a != b)
                        tempsum += dp[dlugosc%2][suma-a][b];
                    dp[(dlugosc+1)%2][suma][a] = tempsum % 1000000;
            }

        fill(dlugosc%2, k);
    }

    int res = 0;
    for(int i = 0; i < 10; i++)
        res += dp[n%2][k][i];
    cout << res % 1000000 << '\n';

    return 0;
}