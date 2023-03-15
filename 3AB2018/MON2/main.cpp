#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    const int inf = 10001;
    int tab[10005]; tab[0] = 0;
    for(int i = 1; i < 10006; i++) tab[i] = inf;
    int n, temp; cin >> n;

    for(int i = 0; i < n; i++){
        cin >> temp;
        for(int x = 0; x < 10006 - temp; x++){
            if(tab[x] != inf){
                tab[x + temp] = min(tab[x] + 1, tab[x + temp]);
            }
        }
    }

    cin >> temp;
    if(tab[temp] != inf) cout << tab[temp] << "\n";
    else cout << "NIE\n";

    return 0;
}