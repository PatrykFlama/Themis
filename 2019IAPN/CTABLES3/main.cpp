#include <bits/stdc++.h>
using namespace std;

int main(){
	int input, tabsort[101] = { 0 };

	cin >> input;
	while(input != -1){
		tabsort[input]++;
		cin >> input;
	}
	for(int i = 0; i < 101; i++){
		while(tabsort[i]){
			cout << i << ' ';
			tabsort[i]--;
		}
	}

	return 0;
}