#include <bits/stdc++.h>
using namespace std;
#define cerr if(0) cout
const int INF = 2e9+5;
const int L = 1e5+5;
int tree[L];
int maxx = 0;


void top(){
    if(maxx == 0)
        return;
    cout << tree[1] << ' ';
}


void push(int n){
    maxx++;
    tree[maxx] = n;

    int ptr = maxx;
    while(ptr > 1){
        if(tree[ptr/2] > tree[ptr])
            swap(tree[ptr/2], tree[ptr]);
        ptr /= 2;
    }
}

void pop(){
    if(maxx == 0)
        return;

    swap(tree[1], tree[maxx]);
    tree[maxx] = INF;
    maxx--;

    int ptr = 1;
    bool act = false;
    cerr << "Dpop > ";

    while(ptr*2 <= maxx){
        //int temp_ptr=ptr;
        act = false;
        //cerr << ptr << ": " <<tree[ptr]<<' '<< ptr*2 <<" "<<tree[2*ptr]<< "/" << ptr*2+1 << " "<<tree[2*ptr+1]<< "   -    ";

        if(tree[ptr*2] < tree[ptr*2+1]){
            if(tree[ptr*2] < tree[ptr]){
                swap(tree[ptr*2], tree[ptr]);
                ptr *= 2;
                act = true;
            }
        }
        else if(tree[ptr*2+1] < tree[ptr]){
            swap(tree[ptr*2+1], tree[ptr]);
            ptr = ptr*2+1;
            act = true;
        }

        if(!act)
            return;

        // cerr << temp_ptr << ": " << tree[temp_ptr] << ' ' << temp_ptr*2 << '/' << tree[temp_ptr*2]<< "/" << temp_ptr*2+1 << '/' << tree[temp_ptr*2+1] << "\n";
    }
    cerr << "\n";
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    fill(tree, tree+L, INF);

    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int temp; cin >> temp;
        push(temp);
    }
    for(int i = 0; i < n; i++){
        top();
        pop();
    }

    return 0;
}