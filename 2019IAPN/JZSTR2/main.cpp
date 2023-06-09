#include<bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s; cin >> s;

    for(int i = s.size()-1; i >= 0; i--){
        cout << s[i];
    }

    cout << endl;

    return 0;
}