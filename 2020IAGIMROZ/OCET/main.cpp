#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int T = (1 << 14);
int tree[(T << 1) + 3];
ll bottles = 0, prices = 0;


void write_fraction(ll a, ll b){
    if(a == 0){
        cout << "0/1" << "\n";
        return;
    }

    ll gcd = __gcd(a, b);
    cout << a/gcd << '/' << b/gcd << "\n";
}

//update vinegar amount in tree
void update(int n, const short int val){
    n += T;

    while(n != 0){
        tree[n] += val;
        n /= 2;
    }
}

//find element
int find(int node, int k){
    if(node >= T)                 //when node == leaf
        return node - T;

    if(tree[node * 2] > k)
        return find(node * 2, k);
    else
        return find(node * 2 + 1, k - tree[node * 2]);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, input; cin >> t;
    while(t--){
        cin >> input;
        if(input == 1){ //new bottle
            int temp; cin >> temp;
            bottles++, prices += temp;
            update(temp , 1);
        } else if(input == 2){ //cheap customer
            int ans = find(1, 0);
            bottles--, prices -= ans;
            cout << ans << "\n";
            update(ans, -1);
        } else if(input == 3){ //expensive customer
            int ans = find(1, bottles-1);
            bottles--, prices -= ans;
            cout << ans << "\n";
            update(ans, -1);
        } else{                //inspection
            write_fraction(prices, bottles);
        }
    }

    return 0;
}