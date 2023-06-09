#include <bits/stdc++.h>
using namespace std;
const int N = 31, L = 33000;
#define ll long long
int tab[N];
vector<ll> sumL, sumR;
int n;

void mitmL(ll sum, int i, int cnt){
    if(i == n/2){
        if(cnt){
            sumL.push_back(sum);

            if(sum == 0){
                cout << "TAK\n";
                exit(0);
            }
        }

        return;
    }

    mitmL(sum + tab[i], i+1, cnt+1);
    mitmL(sum, i+1, cnt);
}

void mitmR(ll sum, int i, int cnt){
    if(i == n){
        if(cnt){
            sumR.push_back(sum);

            if(sum == 0){
                cout << "TAK\n";
                exit(0);
            }
        }

        return;
    }

    mitmR(sum + tab[i], i+1, cnt+1);
    mitmR(sum, i+1, cnt);
}


int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(0);
    // cout.tie(0);

    sumL.reserve(L), sumR.reserve(L);
    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> tab[i];

    mitmL(0, 0, 0);
    mitmR(0, n/2, 0);

    sort(sumR.begin(), sumR.end());

    for(ll i : sumL){
        if(binary_search(sumR.begin(), sumR.end(), -i)){
            cout << "TAK\n";
            exit(0);
        }
    }

    cout << "NIE\n";

    return 0;
}