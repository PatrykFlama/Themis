#include<bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int in;
    cin >> in;
    int a = 0;

    for(int i = 1; i <= sqrt(in); i++){
    	if(in%i == 0){
    		if(in/i == i){
    			a++;
    		}else{
    			a+=2;
    		}
    	}
    }

    cout << a << endl;
    
    return 0;
}