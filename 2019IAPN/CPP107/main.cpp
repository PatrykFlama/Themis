#include <iostream>
using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int a, b = 0;
    for(int i =0 ;i < n; i++){
    	cin >> a;
    	b += a;
    	cout << b << ' ';
    }
    


	return 0;
}