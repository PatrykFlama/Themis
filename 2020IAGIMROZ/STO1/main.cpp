#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;

    while(t--){
        int n, m; cin >> n >> m;
        vector< vector<int> > tab(n, vector<int> (m + 1,0));

        for(int i = 0; i < n; i++)
            for(int j = 1; j <= m; j++)
                cin >> tab[i][j];

        for(int i = 1; i <= m; i++) {
            tab[0][i] += min(tab[0][i-1], tab[1][i-1]);
            for (int j = 1; j < n-1; j++)
                tab[j][i] += min({tab[j - 1][i - 1], tab[j][i - 1], tab[j + 1][i - 1]});
            tab[n - 1][i] += min(tab[n - 1][i - 1], tab[n - 2][i - 1]);
        }

        int minn = 1e9;
        for(int i = 0; i < n; i++)
            minn = min(tab[i][m], minn);

        cout << minn << "\n";
    }

    return 0;
}