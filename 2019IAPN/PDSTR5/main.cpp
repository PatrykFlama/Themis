#include<bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s; cin >> s;
    int temp = 1;

    for(int i = 1; i < s.size(); i++){
        if(s[i] == s[i-1]){
            temp++;
        }
        else{
            cout << s[i-1];
            if(temp != 1){
                cout << temp;
            }
            temp = 1;
        }
    }

    cout << s[s.size()-1];
    if(temp != 1){
        cout << temp;
    }

    return 0;
}