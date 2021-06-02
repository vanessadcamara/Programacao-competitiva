#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int a[33], b[33];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        sort(a, a+n);
        sort(b,b+n);
        for(int i = 0, j = n-1; i < k; i++, j--){
            if(a[i] < b[j]){
                a[i] = b[j];
            }
        }
        int ans = 0;
        for(int i = 0; i < n; i++){
            ans += a[i];
        }
        cout << ans << endl;
    }
    return 0;
}