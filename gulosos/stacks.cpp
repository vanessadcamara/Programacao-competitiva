#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long a[123];
        for(long long i = 0; i < n; i++){
            cin >> a[i];
        }
        long long g = 0;
        int f = 0;
        for(long long i = 0; i < n; i++){
            if(a[i] == i) continue;
            if(g < 0){
                f = 1;
                break;
            }
            else if(a[i] > i){
                g+= a[i] - i;
            }else if(a[i] < i){
                g-= i-a[i];
            }
        }
        // cout << g << endl;
        if(f == 1 || g < 0) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}