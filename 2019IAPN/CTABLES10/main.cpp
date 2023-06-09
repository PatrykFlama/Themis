#include <bits/stdc++.h>
using namespace std;



int main(){
	int input;
	int tab[101] = { 0 };

	cin >> input;
	while(input != -1){
		tab[input]++;
		cin >> input;
	}

	for(int i = 0; i < 101; i++){
		if(tab[i]%2 == 0 && tab[i] != 0){
			cout << i << ' ';
		}
	}

	return 0;
}