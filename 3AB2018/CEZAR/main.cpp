#include <bits/stdc++.h>
using namespace std;
string s;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    while(true){
        cin >> s;
        if(s == "!")
            return 0;

        for(char &i : s){
            if(i <= 'm')
                i += 13;
            else
                i -= 13;
        }

        cout << s << "\n";
    }
}