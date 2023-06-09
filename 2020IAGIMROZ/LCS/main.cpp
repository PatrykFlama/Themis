#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string a, b;
    cin >> a >> b;

    int tab[b.size() + 1][a.size() + 1];
    for(int i = 0; i < b.size()+1; i++)
        for(int j = 0; j < a.size()+1; j++)
            tab[i][j] = 0;

    for(int i = 1; i < b.size() + 1; i++){
        for(int j = 1; j < a.size() + 1; j++){
            if(a[j - 1] == b[i - 1])
                tab[i][j] = tab[i - 1][j - 1] + 1;
            else
                tab[i][j] = max(tab[i - 1][j], tab[i][j - 1]);
        }
    }

    cout << tab[b.size()][a.size()] << '\n';

    return 0;
}