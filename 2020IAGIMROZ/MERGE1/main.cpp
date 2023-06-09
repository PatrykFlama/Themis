#include <bits/stdc++.h>
using namespace std;
const int L = 1e5+5;
int ltab[L], rtab[L];
int n;


void merge(){
    int lptr = 0, rptr = 0;
    while(lptr < n && rptr < n){
        if(ltab[lptr] <= rtab[rptr])
            cout << ltab[lptr] << ' ', lptr++;
        else
            cout << rtab[rptr] << ' ', rptr++;
    }

    while(lptr < n)
        cout << ltab[lptr] << ' ', lptr++;
    while(rptr < n)
        cout << rtab[rptr] << ' ', rptr++;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> ltab[i];
    for(int i = 0; i < n; i++)
        cin >> rtab[i];

    merge();

    return 0;
}