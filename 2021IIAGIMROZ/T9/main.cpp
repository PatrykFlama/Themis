//! SLOWNIK T9
#include<bits/stdc++.h>
using namespace std;

int encode[26] =    {  
                        2, 2, 2, 3, 3, 3, 
                        4, 4, 4, 5, 5, 5, 6, 6, 6, 
                        7, 7, 7, 7, 8, 8, 8, 9, 9, 9, 9
                    };


struct Node{
    int next[10];
    string end_word;
    int last_word_path, words_ahead;

    Node(){
        memset(next, -1, sizeof(next));
        end_word = "", words_ahead = 0, last_word_path = -1;
    }
};

const int L = 1e6+5;      //suma długości słów
Node nodes[L];
int nodes_cnt = 1, words_cnt = 0;


void add_word(const string& s){
    int v = 0;
    for(char c : s){
        nodes[v].words_ahead++;
        if(nodes[v].next[encode[c-'a']] == -1)
            nodes[v].next[encode[c-'a']] = nodes_cnt++;
        nodes[v].last_word_path = nodes[v].next[encode[c-'a']];
        v = nodes[v].next[encode[c-'a']];
    }

    nodes[v].words_ahead++;
    if(nodes[v].end_word == "")
        nodes[v].end_word = s, words_cnt++;
}

int find_word(const string& s){
    int v = 0;
    for(char c : s){
        if(nodes[v].next[c - '0'] == -1)
            return -1;
        v = nodes[v].next[c - '0'];
    }

    return v;
}

int goto_end(int v){
    while(nodes[v].end_word == "")
        v = nodes[v].last_word_path;

    return v;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, q; cin >> n >> q;
    string s;
    for(int i = 0; i < n; i++){
        cin >> s;
        add_word(s);
    }

    for(int i = 0; i < q; i++){
        cin >> s;
        int v = find_word(s);
        if(v == -1)
            cout << "NIE\n";
        else if(nodes[v].words_ahead == 1)
            cout << nodes[goto_end(v)].end_word << '\n';
        else
            cout << nodes[v].words_ahead << '\n';
    }

    return 0;
}

/*
4 4
anna
andrzej
ambrozy
pokorski

123
26
266
7
*/