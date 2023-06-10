#include <iostream>
#include <string>
using namespace std;

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a, b;
    cin >> a >> b;
    if(((a+b)%3 == 0) && (a%2 == 0 || b%2 == 0)){
        cout << "TAK\n";
    } else cout << "NIE";

    return 0;
}