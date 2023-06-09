#include <bits/stdc++.h>

using namespace std;

#define psi pair<string, int>
const int T = (1 << 19);
int tree[(T << 1) + 3];
vector<psi> vec;
vector<int> num;

//update table in tree
void update(int n, const short int val){
    n += T;

    while(n != 0){
        tree[n] += val;
        n /= 2;
    }
}

//output element
void find(int n, int k){
    if(n >= T){                 //when node == leaf
        // auto it = num.begin() + n-T; dont work
        cout << num[n - T] << "\n";
        return;
    }

    if(tree[n * 2] > k)
        find(n * 2, k);
    else
        find(n * 2 + 1, k - tree[n * 2]);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    //-------------HOPEFULLY - SPEED UP VECTOR----------------
    vec.reserve(500000);
    num.reserve(500000);
    //-------------READ--------------
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int a;
        cin >> a;
        vec.emplace_back(s, a);
        //save needed numbers
        if(s == "add")
            num.push_back(a);
    }

    sort(num.begin(), num.end());

    //-----------------ANSWER ON QUESTIONS-----------------
    for(psi p : vec){
        if(p.first == "add") //add | range f   , range to,  what   | convert from iterator
            update(int(lower_bound(num.begin(), num.end(), p.second) - num.begin()), 1);
        else if(p.first == "query") //query
            find(1, p.second);
        else //remove
            update(int(lower_bound(num.begin(), num.end(), p.second) - num.begin()), -1);
    }

    return 0;
}