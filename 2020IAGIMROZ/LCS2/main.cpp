#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    //-----------READ------------
    string a = "0", b = "0", temps;
    cin >> temps;
    a += temps;
    cin >> temps;
    b+= temps;
    //------------PREPARE TABLE-------------
    int tab[b.size()][a.size()];
    for(int i = 0; i < b.size(); i++)
        for(int j = 0; j < a.size(); j++)
            tab[i][j] = 0;
    //-----------FIND LCS------------
    for(int i = 1; i < b.size(); i++){
        for(int j = 1; j < a.size(); j++){
            if(a[j] == b[i])
                tab[i][j] = tab[i - 1][j - 1] + 1;
            else
                tab[i][j] = max(tab[i - 1][j], tab[i][j - 1]);
        }
    }
    //-----------PREPARE OUTPUT-----------
    int ptrx = a.size()-1, ptry = b.size()-1;
    string output;
    while(ptrx > 0 && ptry > 0){
        if(b[ptry] == a[ptrx]) {
            output.push_back(a[ptrx]);
            ptrx--, ptry--;
        }
        else{
            if(tab[ptry][ptrx-1] > tab[ptry-1][ptrx])
                ptrx--;
            else
                ptry--;
        }
    }
    //--------------OUTPUT OUTPUT-------------
    for(int i = output.size()-1; i >= 0; i--)
        cout << output[i];

    cout << "\n";

    return 0;
}