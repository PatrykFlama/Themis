#include <bits/stdc++.h>
using namespace std;
string s;


int main() {
    //ios_base::sync_with_stdio(false);
    //cin.tie(0);

    while(cin >> s){
        for(int i = 0; i < s.size(); i+=2){
            if(s[i+1] == 'G'){
                cout << ((char)(s[i]-'A'+'a'-1));
            }
            else{
                cout << ((char)(s[i]-'A'+'p'));
            }
        }

        cout << "\n";
    }

    return 0;
}