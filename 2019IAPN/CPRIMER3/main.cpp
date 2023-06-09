#include <iostream>
using namespace std;

main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, x = 1;

    cin >> n;
    n--;

	for(int i = 1; i <= n; i++){			//1+1=2 2+2=4 4+3=7 7+4=11 11+5=16 16+6=22
		x+=i;
	}

	cout << x;

    return 0;
}