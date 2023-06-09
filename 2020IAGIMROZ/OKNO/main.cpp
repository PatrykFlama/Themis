#include <bits/stdc++.h>
using namespace std;
#define maxint 2*1e9


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, k, p; cin >> n >> k >> p;
    vector<int> tab(n+k);

    for(int i = 0; i < n; i++)
        cin >> tab[i];
    for(int i = n; i < n+k; i++)
        tab[i] = maxint;

    deque<int> dq;
    vector<int> ans(n+k);
    for(int i = 0; i < k; i++) {
        while (!dq.empty() && tab[dq.back()] >= tab[i])
            dq.pop_back();

        dq.push_back(i);
        ans[i] = tab[dq.front()];
    }

    for(int i = k; i < n+k; i++){
        while(!dq.empty() && tab[dq.back()] >= tab[i])
            dq.pop_back();
        dq.push_back(i);

        while(!dq.empty() && dq.front() < i-k+1)
            dq.pop_front();

        ans[i] = tab[dq.front()];
    }

    while(p--){
        int q; cin >> q;
        cout << ans[q+k-1] << "\n";
    }

    return 0;
}