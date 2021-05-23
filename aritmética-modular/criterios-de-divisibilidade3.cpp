#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int j = 1, num, ans = 0;
    for(int i = 0; i < s.size(); i++){
        num = ((ans) * j) + (s[i]-'0');
        ans = num % 11;
        j = 10;
    }
    if(ans == 0) cout << "S\n";
    else cout << "N\n";
    return 0;
}
