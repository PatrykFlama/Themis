#include<bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s; cin >> s;
    
    if(s[s.size()-1] == 'a') cout << "dziewczynka" << endl;
    else cout << "chlopiec" << endl;

    return 0;
}