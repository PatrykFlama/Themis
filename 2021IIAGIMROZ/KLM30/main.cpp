//funkcja π
#include<bits/stdc++.h>
using namespace std;
const int L = 1e4+5;
int pi[L], n;
string w;//, t;


void compute_pi(){
    int len = 0;
    pi[0] = 0;

    for(int i = 0; i < n-1; i++){
        int j = pi[i];
        while(j > 0 && w[i+1] != w[j])
            j = pi[j-1];
        if(w[i+1] == w[j])
            j++;
        pi[i+1] = j;
    }
}

// void kmp(){
//     int j = 0;
//     for(int i = 0; i < n; i++){
//         while(j != -1 && w[j] != t[i])
//             j = pi[j];
//         j++;
//         if(j == w.size())
//             1;
//     }
// }


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> n >> w;
    compute_pi();

    for(int i = 0; i < n; i++)
        cout << pi[i] << ' ';
    cout << '\n';

    return 0;
}