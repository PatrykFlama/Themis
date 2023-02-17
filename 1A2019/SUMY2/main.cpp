#include <bits/stdc++.h>
using namespace std;
#define pi pair<int, pair<int, int> >
#define st first 
#define nd second 
const int T=(1<<20);

int tree[2*T+5];

#define cerr2 if(0) cout

int find(int a, int b){
  int l = a + T, r = b + T;
  
  int res = tree[r];
  
  
  if(l != r)
     res += tree[l];
  
  cerr2 << res << " : ";
  
  while(r/2 != l/2){
    cerr2 << l << ' ' << r << " : ";
    
    // l=4, r=6 
    // res += tree[4+1]=tree[5]=5;
    
    if(l%2 == 0){
      cerr2 << " : if1 : ";
      res += tree[l+1];
    }
    
    if(r%2 == 1){
      cerr2 << " : if2 : ";
      res += tree[r-1];
    }
    
    r /= 2, l /= 2;
    cerr2 << res << " : ";
    cerr2 << l << ' ' << r << "\n";
  }
  
  return res;
}

#define cerr if(0) cout

void update(int a, int b){
  a += T;
  while(a){
    cerr << a << ' ' << tree[a];
    tree[a] += b;
    cerr << " : " << tree[a] << "\n";
    a /= 2;
  }
}

bool f(pi a, pi b){
  return a.nd.st < b.nd.st; 
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int t;
  cin >> t;
  
  while(t--){
    int a, b;
    char q = 'L';
    
    while(q != 'K'){
      cin >> q >> a >> b;
      
      if(q == 'A'){
        update(a, b);
      }
      else if(q == 'S'){
        cout << find(a, b) << "\n";
      }
    }
    
    fill(tree, tree+2*T, 0 );
  }
  
  return 0;
}

/*
1
A 1 5
A 0 9
A 2 3
S 0 2
*/