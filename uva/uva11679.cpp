#include<bits/stdc++.h>
using namespace std;

int main(){
    int b, n;
    while(cin >> b >> n){
        if(b + n == 0){
            return 0;
        }
        int v[100123];
        string ans = "S";
        for(int i = 1; i <= b; i++){
            cin >> v[i];
        }
        for(int i = 1; i <= n; i++){
            int bank, debenture, value;
            cin >> bank >> debenture >> value;
            v[debenture] += value;
            v[bank] -= value;
        }
        for(int i = 1; i <= b; i++){
            if(v[i] < 0){
                ans = "N";
                break;
            }
        }
        cout << ans << endl;
    }

    return 0;
}