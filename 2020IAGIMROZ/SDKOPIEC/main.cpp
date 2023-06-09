#include <bits/stdc++.h>
using namespace std;
#define cerr if(0) cout
const int INF = -1e9+5;
const int L = 50003;
int tree[L];
int maxx = 0;


void top(){
    if(maxx == 0)
        return;
    cout << tree[1] << "\n";
}


void push(int n){
    maxx++;
    tree[maxx] = n;
    
    int ptr = maxx;
    while(ptr > 1){
        if(tree[ptr/2] < tree[ptr])
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
        
      if(tree[ptr*2] > tree[ptr*2+1]){
            if(tree[ptr*2] > tree[ptr]){
                swap(tree[ptr*2], tree[ptr]);
                ptr *= 2;
                act = true;
            }
      }
      else if(tree[ptr*2+1] > tree[ptr]){
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
    //ios_base::sync_with_stdio(false);
    //cin.tie(0);
    
    fill(tree, tree+L, INF);
    
    int t; cin >> t;
    while(t--){
    //while(true){
        string s; cin >> s;
        if(s == "top")
            top();
        else if(s == "push"){
            int temp; cin >> temp;
            push(temp);
        }
        else if(s == "pop")
            pop();
        //else if(s == "end")
        //    break;
    }
    
    cout << "all done\n";
    
    return 0;
}