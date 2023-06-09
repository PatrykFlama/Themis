#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m, a, b; cin >> n >> m;
    vector< vector<int> > tab(n, vector<int>());
    for(int i = 0; i < m; i++){
        cin >> a >> b; a--, b--;
        tab[a].push_back(b);
        tab[b].push_back(a);
    }

    for(int i = 0; i < n; i++){
        if(!tab[i].size())
            cout << "vertex " << i+1 << " has no neighbours";
        else
            cout << "vertex " << i+1 << " has neighbours ";
        for(int j = 0; j < tab[i].size(); j++)
            cout << tab[i][j]+1 << ' ';
        cout << "\n";
    }

    return 0;
}