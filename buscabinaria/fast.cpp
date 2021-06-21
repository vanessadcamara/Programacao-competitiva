#include<bits/stdc++.h>
using namespace std;
int n, q;
int a[100123];
int buscabinaria(int consulta){
    int hi = n, lo = 0, mid;
    while(lo < hi){
        mid = lo+(hi-lo)/2;
        if(a[mid] >= consulta){
            hi = mid;
        }else{
            lo = mid+1;
        }
    }
    return lo;
}
 
int buscabinaria2(int consulta){
    int hi = n, lo = 0, mid;
    while(lo < hi){
        mid = lo+(hi-lo)/2;
        if(a[mid] <= consulta){
            lo = mid+1;
        }else{
            hi = mid;
        }
    }
    return lo;
}
int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int q;
    cin >> q;
    sort(a, a + n);
    while(q--){
        int l, r;
        cin >> l >> r;
        int k1 = buscabinaria(l) + 1;
        int k2 = buscabinaria2(r) + 1;
        cout << k2 - k1 << endl;
    }
}