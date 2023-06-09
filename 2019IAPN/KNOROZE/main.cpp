#include <bits/stdc++.h>
using namespace std;

int dp[1000005][3];
int roze[1000005][3];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin>>n;
    for(int i = 1; i <= n; i ++)
        for(int j = 0; j < 3; j ++) cin >> roze[i][j];
    
    for(int i = 1; i <= n; i ++){
        dp[i][0] = roze[i][0] + min(dp[i-1][1], dp[i-1][2]);
        dp[i][1] = roze[i][1] + min(dp[i-1][0], dp[i-1][2]);
        dp[i][2] = roze[i][2] + min(dp[i-1][0], dp[i-1][1]);
    }
    int ans = 1e9;
    for(int i = 0; i < 3; i ++)
        ans = min(ans, dp[n][i]);

    cout << ans << "\n";
}