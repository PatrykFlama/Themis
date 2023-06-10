#include<bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s, ns, cs; cin >> s;
    int tab[256] = {0};
    char l = 0;

    for(int i = 0; i < s.size(); i++){
        tab[s[i]]++;
    }

    for(int i = 65; i < 123; i++){
        if(tab[i] > 1){
            for(int x = 0; x < tab[i]/2; x++){
                ns.push_back(char(i));
            }
            if(tab[i] % 2 == 0) tab[i] = 0;
            else tab[i] = 1;
        }

        if(tab[i] == 1 && l == 0){
            l = i;
        }
    }

    cs = ns;
    if(l != 0) ns += l;

    for(int i = cs.size()-1; i >= 0; i--){
        ns += cs[i];
    }

    cout << ns << endl;

    return 0;
}