#include <iostream>
using namespace std;

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, w = 1;
    cin >> n;
    for(int i = 1; i <= n; i++){
        w *= i;
    }

    cout << w;

    return 0;
}