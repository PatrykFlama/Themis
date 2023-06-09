#include <iostream>
using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, k;
    cin >> n >> k;
    
    for(int x = 1; x <= n; x++){
		if(!k){
			break;
		}
		k--;
		cout << x << ' ';
		if(!k){
			break;
		}
		k--;
		cout << n-x+1 << ' ';
    }

	return 0;
}