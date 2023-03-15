#include <bits/stdc++.h>
using namespace std;
#define foo(val, from, to) for(int val = from; val < to; val++)
const int L = 1e5+5;
int tab[L];


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n; cin >> n;

    foo(i, 0, n)
        cin >> tab[i];

    foo(i, 0, n){
        int ptr = i-1;
        while(tab[ptr] > tab[ptr+1] && ptr >= 0){
            swap(tab[ptr], tab[ptr+1]);
            ptr--;
        }
    }

    foo(i, 0, n)
        cout << tab[i] << ' ';
    cout << '\n';

    return 0;
}