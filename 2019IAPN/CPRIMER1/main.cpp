#include <iostream>
using namespace std;

main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a;
    cin >> a;

    for(int i = 0; i <= a; i++){
    	cout << i << ' ';
    }

    return 0;
}