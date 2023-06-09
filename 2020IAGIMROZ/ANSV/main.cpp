#include <bits/stdc++.h>
using namespace std;


void printPrevSmaller(int tab[], int n){
    stack<int> s;

    for(int i = 0; i < n; i++){
        //find smallest
        while(!s.empty() && s.top() >= tab[i])
            s.pop();
        //no smaller
        if(s.empty())
            cout << 0 << ' ';
        //cout nearest smaller
        else
            cout << s.top() << ' ';
        //refill stack
        s.push(tab[i]);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    int tab[n];
    for(int i = 0; i < n; i++)
        cin >> tab[i];

    printPrevSmaller(tab, n);

    return 0;
}