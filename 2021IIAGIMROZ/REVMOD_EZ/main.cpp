#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t; cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        int tx = 1, ty = 0, ta = a, tb = b, temp;
        
        while(tb){
            if(tb < ta)
                swap(ta, tb), swap(tx, ty);
            temp = tb/ta;
            ty -= temp*tx;
            tb -= temp*ta;
        }
        if(ta == 1){
            if(tx < 0)
                tx += b;
            cout << tx << '\n';
        }
    }
    
    return 0;
}