#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int num;
        int ans = INT_MIN;
        cin >> num;
        while(num--){
            int k;
            cin >> k;
            ans = max(ans, k);
        }
        cout << "Case " << i+1 << ": " << ans << endl;
    }
    return 0;
}