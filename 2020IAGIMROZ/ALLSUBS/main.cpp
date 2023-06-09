#include <bits/stdc++.h>
using namespace std;
int limit;


void output(int mask){
    int ptr = 97, t = 1;
    for(int i = 0; i < limit; i++){
        if(mask & t)
            putchar(ptr);
        ptr++;
        t = t << 1;
    }
    putchar('\n');
}

void masker(int mask, int n){
    if(n > limit)
        return;

    if((mask & (1 << (n-1))) > 0)
        output(mask);

    for(int i = n; i < limit; i++)
        masker(mask | (1 << i), i+1);
}

int main(){
    cin >> limit;

    masker(0, 0);

    return 0;
}

//__builtin_clz
// (mask &(~(1<<k)))