#include<bits/stdc++.h>
using namespace std;


void fill(const int x, const int y, vector< vector<int> > &tab){
    for(int px = x+1; px < 8; px++) {
        if (tab[px][y] == -1)
            break;
        tab[px][y]++;
    }

    for(int px = x-1; px >= 0; px--){
        if (tab[px][y] == -1)
            break;
        tab[px][y]++;
    }

    for(int py = y+1; py < 8; py++){
        if(tab[x][py] == -1)
            break;
        tab[x][py]++;
    }

    for(int py = y-1; py >= 0; py--){
        if(tab[x][py] == -1)
            break;
        tab[x][py]++;
    }


    for(int py = y+1, px = x+1; py < 8 && px < 8; py++, px++){
        if(tab[px][py] == -1)
            break;
        tab[px][py]++;
    }

    for(int py = y-1, px = x+1; py >= 0 && px < 8; py--, px++){
        if(tab[px][py] == -1)
            break;
        tab[px][py]++;
    }

    for(int py = y+1, px = x-1; py < 8 && px >= 0; py++, px--){
        if(tab[px][py] == -1)
            break;
        tab[px][py]++;
    }

    for(int py = y-1, px = x-1; py >= 0 && px >= 0; py--, px--){
        if(tab[px][py] == -1)
            break;
        tab[px][py]++;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    vector< vector<int> > tab(8, vector<int> (8, 0));
    pair<int, int> input[n];

    for(int i = 0; i < n; i++){
        cin >> input[i].first >> input[i].second;
        input[i].first--; input[i].second--;
        tab[input[i].first][input[i].second] = -1;
    }

    for(int i = 0; i < n; i++){
        fill(input[i].first, input[i].second, tab);
    }

    int maxx = -1;
    for(int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++)
            if (tab[i][j] > maxx) {
                maxx = tab[i][j];
            }

    cout << maxx << "\n";

    return 0;
}