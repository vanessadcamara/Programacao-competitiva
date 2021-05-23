#include<bits/stdc++.h>
using namespace std;
#define MOD 100000
int main(){
    string s;
    cin >> s;
    if((s[s.size()-1] - '0') % 2 == 0){
        cout << "S\n";
    }else{
        cout << "N\n";
    }
    int div = 0;
    for(int i = 0; i < s.size(); i++){
        div += ((s[i] - '0') % MOD);
    }
    if(div % 3 == 0) cout << "S\n";
    else cout << "N\n";

    if((s[s.size()-1] - '0') % 5 == 0){
        cout << "S\n";
    }else cout << "N\n";
    return 0;
}
