#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while (cin >> n && n){
        string s;
        int a = -1, b = -1, ans = INT_MAX;
        cin >> s;
        for (int i = 0; i < n; i++){
            if (s[i] == 'Z'){
                ans = 0;
                break;
            }
            if (s[i] == 'D'){
                a = i;
            }
            if (s[i] == 'R'){
                b = i;
            }
            // cout << a << " " << b << endl;
            if(a != -1 && b != -1){
                ans = min(abs(a - b), ans);
            }
        }
        cout << ans << endl;
    }
    return 0;
}