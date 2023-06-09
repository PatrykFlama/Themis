#include<bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s; cin >> s;
    int d = 0, m = 0;

    for(int i = 0; i < s.size(); i++){
    	if(s[i] > 90) m++;
    	else d++;
    }

    cout << m << ' ' << d;

    return 0;
}