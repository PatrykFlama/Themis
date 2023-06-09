#include<bits/stdc++.h>
using namespace std;


int find(vector< pair<int, int> > tab, int x, int y){
    for(int i = 0; i < tab.size(); i++)
        if(tab[i].first == x && tab[i].second == y)
            return i;
}

void erase(const int x, const int y, vector< vector<int> > tab, vector< pair<int, int> > &input){
    for(int px = x+1; px < 8; px++)
        if (tab[px][y] < 0) {
            input.erase(input.begin() + find(input, px, y));
            break;
        }

    for(int px = x-1; px >= 0; px--)
        if (tab[px][y] < 0) {
            input.erase(input.begin() + find(input, px, y));
            break;
        }

    for(int py = y+1; py < 8; py++)
        if(tab[x][py] < 0) {
            input.erase(input.begin() + find(input, x, py));
            break;
        }

    for(int py = y-1; py >= 0; py--)
        if(tab[x][py] < 0) {
            input.erase(input.begin() + find(input, x, py));
            break;
        }


    for(int py = y+1, px = x+1; py < 8 && px < 8; py++, px++)
        if(tab[px][py] < 0) {
            input.erase(input.begin() + find(input, px, py));
            break;
        }

    for(int py = y-1, px = x+1; py >= 0 && px < 8; py--, px++)
        if(tab[px][py] < 0) {
            input.erase(input.begin() + find(input, px, py));
            break;
        }

    for(int py = y+1, px = x-1; py < 8 && px >= 0; py++, px--)
        if(tab[px][py] < 0) {
            input.erase(input.begin() + find(input, px, py));
            break;
        }

    for(int py = y-1, px = x-1; py >= 0 && px >= 0; py--, px--)
        if(tab[px][py] < 0) {
            input.erase(input.begin() + find(input, px, py));
            break;
        }
}

void fill(const int x, const int y, vector< vector<int> > &tab){
    for(int px = x+1; px < 8; px++) {
        if (tab[px][y] < 0)
            break;
        tab[px][y]++;
    }

    for(int px = x-1; px >= 0; px--){
        if (tab[px][y] < 0)
            break;
        tab[px][y]++;
    }

    for(int py = y+1; py < 8; py++){
        if(tab[x][py] < 0)
            break;
        tab[x][py]++;
    }

    for(int py = y-1; py >= 0; py--){
        if(tab[x][py] < 0)
            break;
        tab[x][py]++;
    }


    for(int py = y+1, px = x+1; py < 8 && px < 8; py++, px++){
        if(tab[px][py] < 0)
            break;
        tab[px][py]++;
    }

    for(int py = y-1, px = x+1; py >= 0 && px < 8; py--, px++){
        if(tab[px][py] < 0)
            break;
        tab[px][py]++;
    }

    for(int py = y+1, px = x-1; py < 8 && px >= 0; py++, px--){
        if(tab[px][py] < 0)
            break;
        tab[px][py]++;
    }

    for(int py = y-1, px = x-1; py >= 0 && px >= 0; py--, px--){
        if(tab[px][py] < 0)
            break;
        tab[px][py]++;
    }
}

void way(const int x, const int y, vector< vector<int> > &tab){
    for(int px = x+1; px < 8; px++) {
        if (tab[px][y] < 0){
            px--;
            while(px != x){
                tab[px][y] = -3;
                px--;
            }
            break;
        }
    }

    for(int px = x-1; px >= 0; px--){
        if (tab[px][y] < 0) {
            px--;
            while (px != x) {
                tab[px][y] = -3;
                px++;
            }
            break;
        }
    }

    for(int py = y+1; py < 8; py++) {
        if (tab[x][py] < 0){
            while (py != y) {
                tab[x][py] = -3;
                py--;
            }
            break;
            }
    }

    for(int py = y-1; py >= 0; py--){
        if(tab[x][py] < 0){
            while(py != y){
                tab[x][py] = -3;
                py++;
            }
            break;
        }
    }


    for(int py = y+1, px = x+1; py < 8 && px < 8; py++, px++){
        if(tab[px][py] < 0) {
            while (px != x && py != y) {
                tab[px][py] = -3;
                px--, py--;
            }
            break;
        }
    }

    for(int py = y-1, px = x+1; py >= 0 && px < 8; py--, px++){
        if(tab[px][py] < 0){
            while (px != x && py != y) {
                tab[px][py] = -3;
                px--, py++;
            }
            break;
        }
    }

    for(int py = y+1, px = x-1; py < 8 && px >= 0; py++, px--){
        if(tab[px][py] < 0){
            while (px != x && py != y) {
                tab[px][py] = -3;
                px++, py--;
            }
            break;
        }
    }

    for(int py = y-1, px = x-1; py >= 0 && px >= 0; py--, px--) {
        if (tab[px][py] < 0) {
            while (px != x && py != y) {
                tab[px][py] = -3;
                px++, py++;
            }
            break;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    vector< vector<int> > tab(8, vector<int> (8, 0));
    vector< pair<int, int> > input(n);

    //---------READ INPUT AND SET PAWNS--------
    for(int i = 0; i < n; i++){
        cin >> input[i].first >> input[i].second;
        input[i].first--; input[i].second--;
        tab[input[i].first][input[i].second] = -1;
    }

    //-------FILL TABLE--------
    for(int i = 0; i < n; i++)
        fill(input[i].first, input[i].second, tab);

    //-------FIND FIRST MAX--------
    int maxx1 = -1, ansi, ansj;
    for(int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++)
            if (tab[i][j] > maxx1){
                maxx1 = tab[i][j];
                ansi = i, ansj = j;
            }

    //--------ERASE HITS--------
    erase(ansi, ansj, tab, input);

    //----------EMPTY----------
    for(int i = 0; i < 8; i++)
        for(int j = 0; j < 8; j++)
            if(tab[i][j] > -1)
                tab[i][j] = 0;

    //--------ADD QUEEN--------
    tab[ansi][ansj] = -2;

    //-------FILL TABLE-------
    for(auto & i : input)
        fill(i.first, i.second, tab);

    //---------ADD QUEEN WAYS--------
    //way(ansi, ansj, tab);

    //--------FIND SECOND MAX--------
    int maxx2 = -1;
    for(int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++)
            if (tab[i][j] > maxx2)
                maxx2 = tab[i][j];

    cout << maxx1 + maxx2 << "\n";

    return 0;
}