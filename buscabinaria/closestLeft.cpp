#include<bits/stdc++.h>
using namespace std;
int n, q;
int a[100123];
int buscabinaria(int consulta){
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
    cin >> n >> q;
    int max_value = INT_MIN;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    while(q--){
        int consulta; cin >> consulta;
        cout << buscabinaria(consulta)  << endl;
    }
    
}