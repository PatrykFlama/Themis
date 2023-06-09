#include <bits/stdc++.h>
using namespace std;
const int L = 1e5+5;
int tab[L];
int n;


void merge(int l, int r, int m){
    int ltab[m - l + 1], rtab[r - m];

    for(int i = 0; i < (m - l + 1); i++)
        ltab[i] = tab[i+l];
    for(int i = 0; i < (r - m); i++)
        rtab[i] = tab[i+m+1];

    int lptr = 0, rptr = 0, mptr = l;
    while(lptr < (m - l + 1) && rptr < (r - m)){
        if(ltab[lptr] <= rtab[rptr])
            tab[mptr] = ltab[lptr], lptr++;
        else
            tab[mptr] = rtab[rptr], rptr++;

        mptr++;
    }

    while(lptr < (m - l + 1))
        tab[mptr] = ltab[lptr], mptr++, lptr++;

    while(rptr < (r - m))
        tab[mptr] = rtab[rptr], mptr++, rptr++;
}

void merge_sort(int l, int r){
    if(l < r){
        merge_sort(l, l + (r-l)/2);
        merge_sort((l + (r-l)/2) + 1, r);

        merge(l, r, l + (r-l)/2);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> tab[i];

    merge_sort(0, n-1);

    for(int i = 0; i < n; i++)
        cout << tab[i] << ' ';

    return 0;
}