#include <iostream>
using namespace std;

main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int x;

    cin >> x;
    x++;

    while((x--)-1){
    	cout << x << ' ';
    }

    return 0;
}