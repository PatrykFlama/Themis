#include <iostream>
using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    while(n--){
    	for(int i = 0; i < m; i++){
    		cout << "*";
    	}
    	cout << "\n";
    }

	return 0;
}