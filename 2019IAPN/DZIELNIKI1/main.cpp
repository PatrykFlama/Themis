#include<bits/stdc++.h>
using namespace std;


int main(){
    // ios::sync_with_stdio(false);
    // cin.tie(0);
    // cout.tie(0);

    int sum = 1, in, ain, temp = 1;

    int t; cin >> t;
    t--;
    cin >> in;
    
    while(t--){
        ain = in;
        cin >> in;
        if(ain == in) temp++;
        else{
            sum *= (temp+1);
            temp = 1;
        }
    }

    sum *= (temp+1);

    cout << sum << endl;

    return 0;
}