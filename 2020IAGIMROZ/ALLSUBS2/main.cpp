#include <bits/stdc++.h>
using namespace std;


void func(int n, int i, string s){
    if(i == n)
        return;
        
    s += char('a' + i);
    cout << s << "\n";
    func(n, i+1, s);
    s.pop_back();
    func(n, i+1, s);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    string s;

    func(n, 0, s);

    return 0;
}