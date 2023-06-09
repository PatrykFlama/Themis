#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string str; cin >> str;

    cout << '+';
    for(int i = 0; i < str.size()+2; i++)
        cout << '-';
    cout << '+' << "\n";

    cout << '|';
    for(int i = 0; i < str.size()+2; i++)
        cout << ' ';
    cout << "|" << "\n";

    cout << '|' << ' ' << str << ' ' << '|' << "\n";

    cout << '|';
    for(int i = 0; i < str.size()+2; i++)
        cout << ' ';
    cout << "|" << "\n";

    cout << '+';
    for(int i = 0; i < str.size()+2; i++)
        cout << '-';
    cout << '+' << "\n";

    return 0;
}