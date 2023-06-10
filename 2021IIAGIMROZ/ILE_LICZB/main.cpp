#include <bits/stdc++.h>
using namespace std;
const int L = 1e3+15;
int dp[L][L];
// dp[n-cyfrowe][suma k] == ile takich liczb


int main(){
    ios_base::sync_with_stdio(false);
    //cin.tie(0);
    //cout.tie(0);

    int n, k; cin >> n >> k;
    dp[0][0] = 1;

    for(int dlugosc = 0; dlugosc < n; dlugosc++)
        for(int suma = 0; suma <= k; suma++)
            for(int nowacyf = 0; nowacyf < 10; nowacyf++)
                if(dlugosc+nowacyf > 0)
                    dp[dlugosc+1][suma+nowacyf] = (dp[dlugosc+1][suma+nowacyf] + dp[dlugosc][suma]) % 1000000;

    cout << dp[n][k] << '\n';

    return 0;
}