#include <bits/stdc++.h>
using namespace std;
string input;
vector<long long> tabw, tabn;


long long f(vector<long long> tab){
    if(tab.size() < 2)
        return 0;

    long long rep;
    if(!tab[tab.size()-1])
        rep = tab[tab.size()-3];
    else
        rep = tab[tab.size()-1];

    long long sum = 0;

    for(long long i = 0; i < tab.size(); i += 2)
        sum += tab[i] * tab[i + 1] * (rep - tab[i]);

    return sum;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> input;
    char cw = 'O', cn = 'U';

    tabw.push_back(0), tabn.push_back(0);
    //OwO; UnU;
    //------------COUNT REPEATS------------
    for(char i : input){
        if(i == 'O' || i == 'w'){
            if(i == cw){
                tabw[tabw.size()-1]++;
            } else{
                tabw.push_back(1);
                cw = i;
            }
        }
        else if(i == 'U' || i == 'n'){
            if(i == cn){
                tabn[tabn.size()-1]++;
            } else{
                tabn.push_back(1);
                cn = i;
            }
        }
    }

    //----------COUNT UP----------
    for(long long i = 2; i < tabw.size(); i += 2)
        tabw[i] += tabw[i-2];
    for(long long i = 2; i < tabn.size(); i += 2)
        tabn[i] += tabn[i-2];

    //---------KEEP SEQUENCE---------
    if(cw == 'w')
        tabw.push_back(0);
    if(cn == 'n')
        tabn.push_back(0);

    //--------COUNT SUBSEQUENCES--------
    long long ssw, ssn;
    ssw = f(tabw);
    ssn = f(tabn);

    //----------WRITE---------
    cout << ssw - ssn << "\n";

    return 0;
}