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
 
int main(){
    cin >> n >> q;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    while(q--){
        int consulta; cin >> consulta;
        cout << buscabinaria(consulta) + 1 << endl;
    }
    
}