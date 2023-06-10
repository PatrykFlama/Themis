#include <bits/stdc++.h>
using namespace std;
string s;
int n, m;


bool poss(int x){
    int temp = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '+'){
            temp++, i += x-1;
            if(temp > m)
                return 0;
        }
    }

    return 1;
}

int binsearch(int& minn, int& maxx){
    while(minn < maxx){
        int mid = (minn+maxx)/2;
        if(poss(mid))
            maxx = mid;
        else
            minn = mid+1;
    }

    return minn;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    //cout.tie(0);

    cin >> n >> s >> m;

    int maxx = n-1, minn = 0;

    cout << binsearch(minn, maxx) << '\n';

    return 0;
}
