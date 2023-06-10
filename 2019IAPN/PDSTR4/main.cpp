#include<bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s; cin >> s;
    
    cout << s[0];

    for(int i = 1; i < s.size(); i++){
        if(s[i-1] != s[i]) cout << s[i];
    }

    return 0;
}