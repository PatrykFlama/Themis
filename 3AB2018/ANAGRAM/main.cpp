#include<bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s; cin >> s;
    int n; cin >> n;
    bool taks;
    int ms[256] = {0}, ts[256];

    for(int i = 0; i < s.size(); i++){
        ms[s[i]]++;
    }

    while(n--){
        cin >> s;
        taks = true;
        for(int i = 0; i < 256; i++) ts[i] = 0;
        for(int i = 0; i < s.size(); i++) ts[s[i]]++;
        for(int i = 0; i < 256; i++) if(ms[i] != ts[i]) taks = false;
        if(taks) cout << s << endl;
    }

    return 0;
}