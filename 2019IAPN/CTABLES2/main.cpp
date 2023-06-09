#include <bits/stdc++.h>
using namespace std;

int main(){
	int temp, n;
	vector<long long int> A, B;

	cin >> n;
	while(n--){
		cin >> temp;
		A.push_back(temp);
	}
	cin >> n;
	while(n--){
		cin >> temp;
		B.push_back(temp);
	}

	for(int x = 0; x < B.size(); x++){
		//if(B[x] == A[0]){
			for(int y = 0; y < A.size(); y++){
				temp = 0;
				for(int i = x; i < B.size(); i++){
					if(A[y] == B[i]){
						temp = 1;
						x = i+1;
						break;
					}
				}
				if(!temp /*|| (x >= B.size() && y > A.size())*/){
					cout << "NIE\n";
					return 0;
				}
			}
			cout << "TAK\n";
			return 0;
		//}
	}

	cout << "NIE\n";

	return 0;
}