//! BOOKS
#include <bits/stdc++.h>
using namespace std;
#define FOR(val, from, to) for(int val = from; val < to; val++)
const int N = 1e5+5, H = 1e3+1;
int tab[N], n, k;


bool chck(int maxx){
    int div = 0, tempsum = 0, tempmax = INT_MIN;

    FOR(i, 0, n){
        if(div > k)
            return 0;

        if(tempsum+tab[i] > maxx)
            tempmax = max(tempmax, tempsum), tempsum = 0, ++div, --i;
        else
            tempsum += tab[i];
    }
    return 1;
}

void bins(int l, int r){
    int mid = (l+r)/2;

    while(l < r){
        if(chck(mid))
            r = mid;
        else
            l = mid+1;
        
        mid = (l+r)/2;
    }

    cout << mid << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    //cout.tie(0);

    cin >> n >> k; //max 1e5
    FOR(i, 0, n)
        cin >> tab[i]; //max 1e3

    bins(0, H*n);

    return 0;
}