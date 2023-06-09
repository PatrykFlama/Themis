#include <bits/stdc++.h>
using namespace std;



int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int perm1[n], perm2[n];
    for(int i = 0; i < n; i++){
        cin >> perm1[i];
    }
    for(int i = 0; i < n; i++){
        cin >> perm2[i];
    }

    for(int i = 0; i < n; i++){
        cout << perm2[perm1[i]-1] << ' ';
    }
    cout << endl;

	return 0;
}