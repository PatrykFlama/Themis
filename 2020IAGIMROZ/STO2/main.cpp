#include <bits/stdc++.h>
using namespace std;
#define foo(from, to, var) for(int var = from; var < to; var++)
const int L = 1e3+5;

int n, m;
int dp[L][L], in[L][L], out[L], way[L][L];

int safe(int x, int y){
    if(x < 0 || x >= n || y < 0 || y >= m)
        return INT_MAX;
    return dp[x][y];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> n >> m;

    foo(0, n, i)
        foo(0, m, j)
            cin >> in[i][j];

    foo(0, n, i)
        dp[i][0] = in[i][0];

    foo(1, m, i){
        foo(0, n, j){
            dp[j][i] = in[j][i] + min({safe(j-1, i-1), safe(j, i-1), safe(j+1, i-1)});

            if(dp[j][i] == in[j][i] + safe(j-1, i-1))
                way[j][i] = j-1;
            else if(dp[j][i] == in[j][i] + safe(j, i-1))
                way[j][i] = j;
            else if(dp[j][i] == in[j][i] + safe(j+1, i-1))
                way[j][i] = j+1;
        }
    }

    int minn = INT_MAX, ptr;
    foo(0, n, i)
        if(dp[i][m-1] < minn)
            minn = dp[i][m-1], ptr = i;

    out[m] = ptr;
    for(int i = m-1; i > 0; i--)
        out[i] = way[ptr][i], ptr = way[ptr][i];

    foo(1, m+1, i)
        cout << out[i] << ' ';
    cout << '\n';

    return 0;
}