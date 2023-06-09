#include <iostream>
using namespace std;

main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int x, y = 0;

    cin >> x;

	while(x){
		if(y%3 != 0){
			cout << y << ' ';
			x--;
		}
		y++;
	}

    return 0;
}