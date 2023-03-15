#include<bits/stdc++.h>
using namespace std;
#define foo(val, from, to) for(int val = from; val < to; val++)
const int L = 1e5+5;
int tab[L];

void selsort(int n){
    foo(i, 0, n){
        int minn = INT_MAX, ptr;
        foo(j, i, n)
            if(tab[j] < minn)
                minn = tab[j], ptr = j;

        swap(tab[i], tab[ptr]);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    foo(i, 0, n)
        cin >> tab[i];

    selsort(n);

    foo(i, 0, n)
        cout << tab[i] << ' ';
    cout << '\n';

    return 0;
}