//TRIE
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int next[26];
    bool is_end;

    Node(){
        memset(next, -1, sizeof(next));
        is_end = false;
    }
};

const int L = 5e5+5;      //suma długości słów
Node nodes[L];
int nodes_cnt = 1;


void add_word(const string& s){
    int v = 0;
    for(char c : s){
        if(nodes[v].next[c-'a'] == -1)
            nodes[v].next[c-'a'] = nodes_cnt++;
        v = nodes[v].next[c-'a'];
    }

    if(!nodes[v].is_end)
        nodes[v].is_end = true;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    // cout.tie(0);

    int n, maxlen = INT_MIN; cin >> n;
    string s;
    for(int i = 0; i < n; i++){
        cin >> s;
        maxlen = max(maxlen, int(s.size()));
        add_word(s);
    }

    cout << (nodes_cnt-1)*2+n-maxlen << '\n';

    return 0;
}