#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007

int main(){
    string s;
    while(cin >> s){
        long long ans = 0;
        long long exp = 1;
        for(int i = s.size()-1, j = 0; i >= 0; i--, j++){
            long long aux = ((s[i] - 'A') * (exp))%MOD;
            ans= ((ans%MOD) + (aux%MOD))%MOD;
            exp = ((exp%MOD) * 26) %MOD;
        }
        cout << ans << endl;
    }
    return 0;
}