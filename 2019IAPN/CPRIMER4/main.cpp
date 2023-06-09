#include <iostream>
using namespace std;

int sc(int liczba){
	int suma = 0;
	while(liczba){
		suma += liczba%10;
		liczba /= 10;
	}
	return suma;
}

int f(int n){
	int poprzedni = sc(n);
	while(poprzedni != n){
		n = poprzedni;
		poprzedni = sc(n);
	}
	return n;
}

int main(){
	int n;
	cin >> n;
	cout << f(n) << "\n";
}