//! LIS
#include <bits/stdc++.h>
using namespace std;
#define FOR(val, from, to) for(int val = from; val < to; val++)
const int N = 1e3+5;
int n, len = 0, ptr = 1, tab[N];
int temp[N]; //? [lis length] = last minimal possible value
//int res[N]; //? [number] = which number is before it in lis


// int bins(){

// }

void lis(){
    temp[0] = -1, temp[1] = 0;

    FOR(i, 1, n){
        if(tab[i] > tab[temp[ptr]]){
            ++ptr, temp[ptr] = i, len++;
            //res[i] = temp[ptr-1];
        }
        else{               //TODO: binsearch it!!!
            FOR(j, 1, ptr+1){
                if(tab[i] < tab[temp[j]]){
                    temp[j] = i;
                    //res[i] = temp[j-1];
                    break;
                }
            }
            //bins();
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    //cout.tie(0);

    cin >> n;
    FOR(i, 0, n)
        cin >> tab[i];
    //fill(res, res+n, -1);

    lis();

    cout << len+1 << '\n';

    // cout << "temp:\n";
    // FOR(i, 0, ptr+1)
    //     cout << i << ' ';
    // cout << '\n';
    // FOR(i, 0, ptr+1)
    //     cout << temp[i] << ' ';
    // cout << "\n\n";

    return 0;
}