#include<bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s;
    char l;
    int maxx; cin >> maxx; maxx = 0;
    cin >> s;
    int alf[256] = {0};

    for(int i = 0; i < s.size(); i++){
        alf[tolower(s[i])]++;
    }

    for(int i = 0; i < s.size(); i++){
        if(alf[s[i]] > maxx){
            maxx = alf[tolower(s[i])];
            l = tolower(s[i]);
        }
    }
    cout << maxx << ' ' << l << endl;

    return 0;
}