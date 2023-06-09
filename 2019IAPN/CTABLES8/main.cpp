#include <bits/stdc++.h>
using namespace std;

int main(){
	int temp, n, vmax = -1000, vmin = 1000;
	vector<long long int> maxlist;

	cin >> n;

	while(n--){
		cin >> temp;
		vmin = min(temp, vmin);
		vmax = max(temp, vmax);
		cout << vmin << ' ';
		maxlist.push_back(vmax);
	}
	cout << "\n";
	for(int i = 0; i < maxlist.size(); i++){
		cout << maxlist[i] << ' ';
	}
	cout << "\n";

	return 0;
}