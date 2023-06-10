#include <bits/stdc++.h>
using namespace std;
#define FOR(var, from, to) for(int var = from; var < to; var++)
int dp[21][12][12][4][4]; //? [dlugosc][garby][antygarby][przedostatni y][ostatni y]


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, t; cin >> n >> t;

    FOR(i, 0, 4)
        FOR(j, 0, 4)
            if(i != j)
                dp[2][0][0][i][j] = 1;      // różne y po bokach

    // po wszystkich polach z dp (możliwościach)
    FOR(dlugosc, 2, n)
        FOR(garby, 0, t+1)
            FOR(antygarby, 0, t)
                FOR(i, 0, 4)
                    FOR(j, 0, 4)
                        FOR(w, 0, 4)
                            if(j != w)  // różne y
                                dp[dlugosc+1][garby + (i < j and j > w)][antygarby + (i > j and j < w)][j][w] += dp[dlugosc][garby][antygarby][i][j];

    int sum = 0;
    FOR(i, 0, 4)
        FOR(j, 0, 4)
            sum += dp[n][t][t-1][i][j];

    cout << sum << '\n';

    return 0;
}