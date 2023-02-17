#include <bits/stdc++.h>
using namespace std;
vector< vector<bool> > tab(1005, vector<bool>(1005, false));

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int e, v, a, b; cin >> v >> e;


    for(int i = 0; i < e; i++){
        cin >> a >> b; a--, b--;
        //a = rand() % 1001, b = rand() % 1001;
        tab[a][b] = true;
        tab[b][a] = true;
    }

    //unsigned __int64 time1 = chrono::duration_cast<chrono::milliseconds>(chrono::system_clock::now().time_since_epoch()).count();

    //----------MATRIX---------
    cout << "Macierz:\n";
    for(int i = 0; i < v; i++){
        for(int j = 0; j < v; j++){
            cout << tab[i][j];
        }
        cout << "\n";
    }

    //---------LIST-------
    cout << "\nLista:\n";
    for(int i = 0; i < v; i++){
        cout << i+1 << ": ";
        for(int j = 0; j < v; j++){
            if(tab[i][j])
                cout << j+1 << ' ';
        }
        cout << "\n";
    }

    //unsigned __int64 time2 = chrono::duration_cast<chrono::milliseconds>(chrono::system_clock::now().time_since_epoch()).count();
    //cout << "\n\n\n" << time2 - time1 << "ms\n";

    return 0;
}


//3 5 = 15