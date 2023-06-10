//kmp?
#include<bits/stdc++.h>
using namespace std;
const int L = 2e6+15;
int pi[L];
string w, t;
vector<int> ans;


void compute_pi(string s, int n){
    int len = 0;
    pi[0] = 0;

    for(int i = 0; i < n-1; i++){
        int j = pi[i];
        while(j > 0 && s[i+1] != s[j])
            j = pi[j-1];
        if(s[i+1] == s[j])
            j++;
        pi[i+1] = j;
    }
}

// void kmp(int& n){
//     int j = 0;
//     for(int i = w.size()+1; i < n; i++){
//         while(j != -1 && w[j] != t[i])
//             j = pi[j];
//         j++;
//         if(j == w.size())
//             ans.push_back(i-t.size()+1);
//     }
// }

void test(int& n){
    for(int i = w.size()+1; i < n; i++)
        if(pi[i] == w.size())
            ans.push_back(i-w.size()-w.size());
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T; cin >> T;
    while(T--){
        cin >> w >> t;     //wzorzec, tekst
        int n = t.size()+w.size()+1;
        compute_pi(w+'#'+t, n);
        test(n);

        for(int i : ans)
            cout << i << '\n';
        //cout << '\n';

        ans.clear();
    }

    return 0;
}