#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long temp = 0, n;
    cin >> n;
    if(n == 1){
        cout << "NIE";
        return 0;
    }
    n--;

    while(n != 1){
        if(n % 2 == 0){
            n = n / 2;
            temp++;
        }
        else{
            cout << "NIE";
            return 0;
        }
    }

    cout << temp;

    return 0;
}