#include <bits/stdc++.h>
using namespace std;

int mod(long long int a){
	return a%1000000007;
}

int main(){
	ios::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);

	int n, sum = 0;
	cin >> n;
	for(int i = 0; i <= n; i++){
		if(i%2 == 1){
			sum += mod(mod(i)*mod(i));
			sum = mod(sum);
		}
	}

	cout << sum  << "\n";

	return 0;
}