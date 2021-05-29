#include<bits/stdc++.h>
using namespace std;
#define MOD 131071
int main(){
    string s;
    char c;
    int resto = 0;
    while(cin >> c){
        s+= c;
        if(c == '#'){
            resto = 0;
            for(int i = 0; i < s.size()-1; i++){
                resto = ((resto % MOD) + (s[i] - '0'))%MOD;
                resto*= 2;    
            }    
            if(resto == 0) cout << "YES\n";
            else cout << "NO\n";
            s = "";
        }
    }
    return 0;
}