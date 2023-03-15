#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int tab[30];
    cin >> tab[0];
    fill(tab, tab+26, 0);
    string s; cin >> s;

    for(char i : s)
        tab[i-'a']++;

    int maxx = -1, ch;
    for(int i = 0; i < 26; i++)
        if(tab[i] > maxx)
            maxx = tab[i], ch = i;

    cout << maxx << ' ' << (char)(ch+'a') << '\n';

    return 0;
}