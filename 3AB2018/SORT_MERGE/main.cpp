#include<bits/stdc++.h>
using namespace std;
#define foo(val, from, to) for(int val = from; val < to; val++)
const int L = 1e5+5;
int tab[L], temptab[L];


void merge(int ll, int &lr, int rl, int &rr){
    int ptr = 0, l = ll;
    while(ll <= lr && rl <= rr){
        if(tab[ll] < tab[rl])
            temptab[ptr] = tab[ll], ll++, ptr++;
        else
            temptab[ptr] = tab[rl], rl++, ptr++;
    }
    while(ll <= lr)
        temptab[ptr] = tab[ll], ll++, ptr++;
    while(rl <= rr)
        temptab[ptr] = tab[rl], rl++, ptr++;

    foo(i, l, rr+1)
        tab[i] = temptab[i-l];
}

void merge_sort(int l, int r){
    int mid = (l+r)/2;

    if(l < mid)
        merge_sort(l, mid);
    if(mid+1 < r)
        merge_sort(mid+1, r);

    merge(l, mid, mid+1, r);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    foo(i, 0, n)
        cin >> tab[i];

    merge_sort(0, n-1);

    foo(i, 0, n)
        cout << tab[i] << ' ';
    cout << '\n';

    return 0;
}