#include <bits/stdc++.h>
using namespace std;
const int T = 1e4+5, M = 505;
int dp[T][M];
// dp[time][exhaustion] == total dist


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m, dist; cin >> n >> m;

    for(int t = 0; t < n; t++){
        cin >> dist;
        for(int ex = 0; ex <= m && ex <= t; ex++){
            if(ex == 0)
                dp[t+1][ex] = max(dp[t+1][ex], dp[t][ex]);
            if(t+ex <= n)
                dp[t+ex][0] = max(dp[t+ex][0], dp[t][ex]);
            if(ex+1 <= m)
                dp[t+1][ex+1] = max(dp[t+1][ex], dp[t][ex] + dist);
        }
    }

    cout << dp[n][0];

    return 0;
}