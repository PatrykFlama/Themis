#include<bits/stdc++.h>
using namespace std;

typedef unsigned int LV;

void sito(bool *tab, LV n)
{
    for(int i = 2; i*i <= n; i++){
        if(!tab[i]){
            for(int j = i*i ; j <= n; j+=i){
                tab[j] = 1;
            }
        }
    }
}

LV tabsuma[1000000];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    LV n;
    LV a, b;
    LV sum = 0;
    LV len = 1000000;
    bool *tab;
    
    cin >> n;
    
    tab = new bool [len+1];
    
    for(LV i=2; i<=len; i++){
        tab[i] = 0;
    }
    
    sito(tab, len);    

    for(LV i = 0; i <= len; i++){
        if(!tab[i]){
            sum++;
        }
        tabsuma[i] = sum;
    }


    while(n--){
        cin >> a >> b;
        cout << tabsuma[b] - tabsuma[a-1] << endl;
    }
    
    delete []tab;
    
    return 0;
}