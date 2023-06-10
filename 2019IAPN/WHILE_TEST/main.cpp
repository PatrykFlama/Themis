#include <iostream>
using namespace std;

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a;
    cin >> a;
    while(a%2 == 0){
        a /= 2;
    }

    cout << a;

    return 0;
}