#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    int temp, input, maxx = 1, l = 0;

    cin >> temp;
    n--;
    while(n--){
        cin >> input;
        if(input > temp) {
            maxx++;
            temp = input;
        }
        else{
            l = max(l, maxx);
            maxx = 1;
            temp = input;
        }
    }

    l = max(l, maxx);

    cout << l << "\n";

    return 0;
}