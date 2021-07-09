#include<bits/stdc++.h>
using namespace std;
long long v[] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192};
map<long long,long long>mapa;
int main(){
    for(long long i = 0; i < 14; i++){
        mapa[v[i]] = 1;
    }
    long long n;
    cin >> n;
    long long ans = 0, k = 0;
    while(n > 0){
        if(n > 8192){
            n-=8192;
            ans++;
        }
        else{
            k = *lower_bound(v, v+14, n);
            if(mapa.find(n) == mapa.end()) k/= 2;
            n-= k;
            ans++;
        }
    }
    cout << ans << endl;


}