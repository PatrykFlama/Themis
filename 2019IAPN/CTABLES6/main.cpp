#include <bits/stdc++.h>
using namespace std;



int main(){
	int input;
	vector<int> tab, v;

	cin >> input;
	while(input != -1){
		tab.push_back(input);
		cin >> input;
	}

	for(int i = 0; i < (tab.size()+1)/2; i++){
		if(tab[i] != tab[tab.size()-i-1]){
			cout << 0 << endl;
			return 0;
		}
	}

	cout << 1 << endl;

	return 0;
}