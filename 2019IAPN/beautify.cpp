#include <bits/stdc++.h>
using namespace std;


bool find(wstring s, wstring t) {            //? find t in s
    for(int i = 0; i < s.size(); i++){
        if(s[i] == t[0]){
            bool found = true;
            for(int j = 0; j < t.size(); j++){
                if(t[j] == L' ' || t[j] == L'\n' || t[j] == L'\r') continue;
                if(i+j >= s.size() || s[i + j] != t[j]){
                    found = false;
                    break;
                }
            }
            if(found) return true;
        }
    }
    return false;
}

bool contains(const vector<wstring> strs, const wstring s) {            //? find any string from strs in s
    for(int i = 0; i < strs.size(); i++){
        if(find(s, strs[i]))
            return true;
    }
    return false;
}

void beautify(string filename){
    const wstring codeblock_separator = L"```";
    const vector<wstring> wide4 = {L"Wejście", L"Wyjście", L"Przykład", L"Przykłady",
                                   L"Wej", L"Wyj", L"Przyk"};
    const vector<wstring> codeblock = {L"danych", L"wyjścia", L"wejścia", L"wejściowych", L"wyjściowych", L"przykład", L"przykłady",
                                       L"odpowiedzią", L"poprawną", L"poprawne", L"poprawnym", L"poprawnymi", L"poprawna", L"poprawny",
                                       L"danych", L"wej", L"wyj", L"przyk", L"odpowied", L"poprawn"};

    wifstream fin(filename + "/README.md");
    wofstream fout(filename + "/temp.md");
    wstring line;
    int line_num = 0;
    bool in_codeblock = false;
    bool in_example = false;
    bool codeblock_to_open = false;

    while(getline(fin, line)){
        line_num++;
        wstring newline = L"";

        if(find(line, L"Przyk")) in_example = true;
        if(codeblock_to_open && !line.empty()){
            newline += codeblock_separator + L'\n';
            codeblock_to_open = false;
        }

        if(line_num == 1) newline += L"# " + line;
        else if(line_num == 2){
            newline += L"###### ";
            for(int i = 0; i < line.size(); i++){
                if(line[i] == L'|')
                    newline += L'\\';
                newline += line[i];
            }
        } 
        else if(contains(wide4, line)){
            newline += L"#### " + line;
        }
        else if(in_example && contains(codeblock, line)){
            if(in_codeblock){
                newline += codeblock_separator + L'\n';
                newline += line;
                codeblock_to_open = true;
            } else{
                in_codeblock = true;
                newline += line;
                codeblock_to_open = true;
            }
        }
        else {
            newline += line;
        }
        
        fout << newline << endl;
    }

    if(in_codeblock)
        fout << codeblock_separator << endl;

    fin.close();
    fout.close();

    // remove(filename.c_str());
    // rename((filename + "/temp.md").c_str(), 
    //        (filename + "/README.md").c_str());
    
    cout << filename << endl;
}


int main(){
    // ifstream fin("temp.txt");
    // string filename;
    // while(fin >> filename){
    //     beautify(filename);
    // }
    // fin.close();

    beautify("STARS01");
}
