//! palindromy hashe
#include <bits/stdc++.h>
using namespace std;


template <int X, int MOD>
struct Hash{
    vector<int> hash;
    vector<int> pows;

    Hash(){}
    Hash(const string s){
        //create hash
        hash.resize(s.size());
        hash[0] = s[0] - 'a' + 1;
        for(int i = 1; i < s.size(); i++)
            hash[i] = (1LL * hash[i-1] * X + s[i] - 'a' + 1) % MOD;

        //precalculate pows
        pows.resize(s.size() + 1);
        pows[0] = 1;
        for(int i = 1; i < s.size(); i++)
            pows[i] = (1LL * pows[i-1] * X) % MOD;
    }

    int get(const int a, const int b){
        if(a == 0)
            return hash[b];
        return ( 1LL * hash[b] - (1LL * hash[a-1] * pows[b - a + 1]) % MOD + MOD) % MOD;
    }
};


template <int X, int MOD>
struct Query{
    Hash<X, MOD> hash, hashr;
    int n;

    Query(string s){
        n = s.size();
        hash = Hash<X, MOD>(s);
        reverse(s.begin(), s.end());
        hashr = Hash<X, MOD>(s);
    }

    bool compare(int a1, int b1, int a2, int b2){
        return hash.get(a1, b1) == hashr.get(n - b2 - 1, n - a2 - 1);
    }
};


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    const int X = 27, MOD = 1e9+7;

    string s; cin >> s;
    Query<X, MOD> obj(s);

    int t; cin >> t;
    while(t--){
        int q, x;
        cin >> q >> x;
        x--;
        
        if(q == 1){         //* nieparzysty [x]
            int l = 0, r = x;
            while(l < r){
                int mid = (l+r)/2;
                if(obj.compare(mid, x, x, x + x-mid))
                    r = mid;
                else
                    l = mid + 1;
            }

            cout << (x - l) * 2 + 1 << '\n';
        } else{             //* parzysty [x, x+1]
            if(s[x] != s[x+1]){
                cout << "-1\n";
            }
            else{
                int l = 0, r = x;
                while(l < r){
                    int mid = (l+r)/2;
                    if(obj.compare(mid, x, x + 1, x + 1 + x-mid))
                        r = mid;
                    else
                        l = mid + 1;
                }

                cout << (x - l) * 2 + 2 << '\n';
            }
        }
    }

    return 0;
}