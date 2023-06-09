#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int a, x;
	cin >> a;

	for(int i = 2; i < a; i++){
		x = pow(i, 2);
		if(a % i == 0){
			cout << "zlozona";
			return 0;
		}
		else if(x > a){
			cout << "pierwsza";
			return 0;
		}
	}
	cout << "pierwsza";

	return 0;
}