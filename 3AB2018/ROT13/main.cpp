#include<bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s; cin >> s;

    for(int i = 0; i < s.size(); i++){
        if((s[i]+13) > 'z'){
            s[i] = 'a' + (s[i]+13)-'z'-1;
        }
        else s[i] += 13;
        cout << s[i];
    }

    return 0;
}