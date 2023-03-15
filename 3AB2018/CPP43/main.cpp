#include<bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s;
    int n, trash; cin >> n;
    
    while(n--){
        cin >> trash;
        trash = 0;
        cin >> s;
        for(int i = 0; i < (s.size()+1)/2; i++){
            if(s[i] != s[s.size()-i-1]){
                cout << "NIE" << endl;
                trash = 1;
                break;
            }
        }
        if(!trash) cout << "TAK\n";
    }

    return 0;
}