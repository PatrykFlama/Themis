#include <iostream>
using namespace std;

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int in, temp = 0, tab[20000];
    cin >> in;
    while(in > -1){
        tab[temp] = in;
        cin >> in;
        temp++;
    }
    temp--;
    while(temp >= 0){
        cout << tab[temp] << ' ';
        temp--;
    }
    

    return 0;
}