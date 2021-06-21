#include<bits/stdc++.h>
using namespace std;
double a[100123];
int n, dist;
bool f(double x){
    bool resp = 1;
    if(a[0] > x || dist - a[n-1] > x){
        resp = 0;
    }

    //para todas as outras lanternas
    for(int i = 0; i < n-1; i++){
        if((a[i+1]- a[i]) / 2.0 > x){
            resp = 0;
        }
    }return resp;
}
double buscaBinaria(){
    double lo = 0, hi = 1e9, mid = 0;
    for(int i = 0; i < 100; i++){
        mid = (lo+hi)/2;
        if(f(mid)){
            hi = mid;
        }else{
            lo = mid ;
        }

    }
    return lo;
}


int main(){
    cin >> n >> dist;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    cout << buscaBinaria() << endl;
    return 0;   
}