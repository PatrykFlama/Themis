#include <bits/stdc++.h>
using namespace std;

int main(){
	int in, max = -1, maxv = 0;
	int tab[101] = { 0 };
	cin >> in;
	while(in != -1){
		tab[in]++;
		cin >> in;
	}

	for(int i = 0; i < 101; i++){
		if(tab[i] > max){
			max = tab[i];
			maxv = i;
		}
	}

	cout << maxv;

	return 0;
}