#include<bits/stdc++.h>
using namespace std;
 
int n;
int ans, parcial, x;
 
int main(){_
    ans = INT_MIN;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x;
        parcial = max(parcial+x, x);
        ans = max(ans, parcial);
    }
    cout << ans << endl;
    return 0;
}