//! elephant
#include<bits/stdc++.h>
using namespace std;
//#define cerr if(1) cout
const int L = 2e5+15;
int pi[2*L];
int w[L], t[L];
int nw, nt, ans;


void pi_wzorzec(){
    for(int i = 0; i < nw-1; i++){
        int j = pi[i];
        while(j > 0 && w[i+1] != w[j])
            j = pi[j-1];
        if(w[i+1] == w[j])
            j++;
        pi[i+1] = j;
    }
}

void compute_pi(){
    for(int i = 1; i < nt-1; i++){
        int j = pi[i+nw];
        while(j > 0 && t[i+1] != w[j])
            j = pi[j-1];
        if(t[i+1] == w[j])
            j++;
        pi[i+1+nw] = j;
        if(pi[i+1+nw] == nw)
            ans++;
    }
}

int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(0);
    // cout.tie(0);

    cin >> nt >> nw;     //liczbaa - wzorzec, text
    nw--;

    if(nw == 0){
        cout << nt << '\n';
        return 0;
    }

    int prev, act;
    t[0] = 0;
    cin >> prev;
    for(int i = 1; i < nt; i++){
        cin >> act;
        t[i] = act-prev;
        prev = act;
    }

    cin >> act >> prev;
    w[0] = prev-act, w[nw] = INT_MIN;
    for(int i = 1; i < nw; i++){
        cin >> act;
        w[i] = act-prev;
        prev = act;
    }

    pi_wzorzec();
    pi[nw+1] = 1, ans = 0;
    compute_pi();

    // for(int i = 0; i < nt; i++)
    //     cerr << t[i] << ' ';
    // cerr << '\n';
    // for(int i = 0; i < nw; i++)
    //     cerr << w[i] << ' ';
    // cerr << '\n';
    // for(int i = 0; i < nw+nt+1; i++)
    //     cerr << pi[i] << ' ';
    // cerr << '\n';

    cout << ans << '\n';

    return 0;
}