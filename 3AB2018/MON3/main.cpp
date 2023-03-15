#include <bits/stdc++.h>
using namespace std;
int tab[1002];
int tc[10001];
int justtab[10001];
int main()
{
    int inf = 100001;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> tab[i];
        cin >> justtab[tab[i]];
    }
    int s;
    cin >> s;
    tc[0] = 0;
    for(int i = 1; i <= s; i++){
        tc[i] = inf;
    }
    for(int i = 0; i < n; i++){
        for(int h = 0; h < justtab[tab[i]]; h++){
            for(int j = s - tab[i]; j >= 0; j--){
                if(tc[j] != inf){
                    int x = tab[i] + j;
                    tc[x] = min (tc[j] + 1, tc[x]);
                }
            }
        }
    }
    if(tc[s] != inf)
        cout << tc[s];
    else
        cout << "NIE";
}