#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;

    vector< vector<int> > tab(n, vector<int> (n, 1005));

    //-------------READ--------------
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> tab[i][j];
    //----------ADD-----------
    for(int i = 0; i < n-1; i++){
        for(int j = 1; j < n; j++){
            tab[i+1][j-1] += tab[i][j];
        }
    }

    //--------FIND MAX SUM---------
    int maxx = -1005, ans;
    for(int i = 0; i < n; i++){
        if(tab[i][0] > maxx){
            maxx = tab[i][0];
            ans = i+1;
        }
    }
    for(int i = 0; i < n; i++){
        if(tab[n-1][i] > maxx){
            maxx = tab[n-1][i];
            ans = i+n;
        }
    }

    cout << ans << ": ";

    //---------WRITE---------
    if(ans <= n){
        cout << tab[0][ans - 1] << ' ';
        int x = 1;
        for(int i = ans-2; i >= 0; i--){
            cout << tab[x][i] - tab[x-1][i+1] << ' ';
            x++;
        }
    }
    else{
        ans -= n;
        cout << tab[ans][n-1] << ' ';
        int x = n-2;
        for(int i = ans+1; i < n; i++){
            cout << tab[i][x] - tab[i-1][x+1] << ' ';
            x--;
        }
    }

    return 0;
}