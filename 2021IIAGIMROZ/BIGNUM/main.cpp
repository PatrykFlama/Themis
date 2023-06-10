//! BIGNUM
#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long


ll string_mod(string& s, ll p){
    ll res = 0;
    for(char c : s)
        res = (res*10 + (c-'0')) % p;

    return res;
}

ll notsofast_mult(ll a, ll b, ll& p){
    ll res = 0;
    while(b){
        if(b%2 == 1)
            res = (res+a) % p;
        a = (a+a) % p;
        b /= 2;
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    //cin.tie(0);
    //cout.tie(0);

    string stringa, stringb;
    ll p;
    cin >> stringa >> stringb >> p;

    ll a = string_mod(stringa, p), b;
    if(p > 1000) b = string_mod(stringb, p-1);
    else b = stoll(stringb);

    ll res = 1;
    while(b){
        if(b%2 == 1)
            res = notsofast_mult(a, res, p);
        a = notsofast_mult(a, a, p);
        b /= 2;
    }

    cout << res << '\n';

    return 0;
}