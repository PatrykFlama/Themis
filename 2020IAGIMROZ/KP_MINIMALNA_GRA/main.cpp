#include <bits/stdc++.h>
using namespace std;
int tab[8];
char s[11][11];


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    for(int i = 0; i < 8; i++)
        for(int j = 0; j < 8; j++)
            cin >> s[i][j];// s[i][j]

    for(int j = 0; j < 8; j++){// j 
      
        int i = 0;// i 
        while(s[i][j] != 'c')
            i++;// i 
        while(s[i][j] != 'b')
            tab[j]++, i++;//i
    }
    
    // for(int i : tab)
    //     cout << i-1 << ' ';
    
    int res = 0;
    for(int i : tab)
        res ^= (i-1);
    
    if(res)
        cout << "Małgosia\n";
    else
        cout << "Jaś\n";
    
    return 0;
}