#include <iostream>
using namespace std;

main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a = 0, sum = 0;
    
    while(a != -1){
    	cin >> a;
    	sum++;
	}
	cout << sum-1;

    return 0;
}