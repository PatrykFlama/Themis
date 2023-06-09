#include <bits/stdc++.h>
using namespace std;
#define pi pair<int, pair<int, int> >
#define st first 
#define nd second 
vector<pi> vec;


void find(int l, int r, int node, const int a, const int b){
  if( a <= l && r <= b){
    vec.push_back({node, {l, r}});
    return;
  }
  if( r < a || b < l )
    return;
  
  //     node
  // 2*node  (2*node)+1
  // l    mid mid+1    r 
        
  int mid=(l+r)/2;
  
        
  find(l, mid, node*2, a, b);
  find(mid+1, r, (node*2)+1, a, b);
}

bool f(pi a, pi b){
  return a.nd.st < b.nd.st; 
}

int main() {
  int n, x, y;
  cin >> n >> x >> y;
  
  find(0, n-1, 1, x, y);  
  
  sort(vec.begin(), vec.end(), f);
  
  for(pi x : vec)
    cout << x.st << ":\t[" << x.nd.st << ", " << x.nd.nd << "]\n";
  
  return 0;
}