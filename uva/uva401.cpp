#include<bits/stdc++.h>
#define EOF (-1)
using namespace std;
string s;
int main(){
    while(cin >> s){
        set<char>st{'A', 'H','I','M','O','T','U','V','W','X','Y','1','8'};
        map<char,char> mapa;
        mapa['A'] = 'A';
        mapa['E'] = '3';
        mapa['H'] = 'H';
        mapa['I'] = 'I';
        mapa['J'] = 'L';
        mapa['L'] = 'J';
        mapa['M'] = 'M';
        mapa['O'] = 'O';
        mapa['S'] = '2';
        mapa['T'] = 'T';
        mapa['U'] = 'U';
        mapa['V'] = 'V';
        mapa['W'] = 'W';
        mapa['X'] = 'X';
        mapa['Y'] = 'Y';
        mapa['Z'] = '5';
        mapa['1'] = '1';
        mapa['2'] = 'S';
        mapa['3'] = 'E';
        mapa['5'] = 'Z';
        mapa['8'] = '8';
        string aux = s;
        reverse(aux.begin(),aux.end());
        if(aux == s){
            int f = 1;
            for(int i = 0; i < s.size(); i++){
                if(st.find(s[i]) == st.end()){
                    f = 0;
                    break;
                }
            }
            if(f) cout << s << " -- is a mirrored palindrome.\n"; 
            else cout << s << " -- is a regular palindrome.\n";
        }
        else{
            aux = "";
            for(int i = 0; i < s.size(); i++){
                aux+=mapa[s[i]];
            }
            reverse(aux.begin(),aux.end());
            if(aux == s) cout << s << " -- is a mirrored string.\n";
            else cout << s << " -- is not a palindrome.\n";
        }
        cout << endl;
    }
    return 0;
}