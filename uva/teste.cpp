#include<bits/stdc++.h>
using namespace std;

int main(){
    double h, u, d, f;
    while(cin >> h >> u >> d >> f){
        if(h == 0) break;
        int cont = 1;
        double height = 0;
        double fat = (u*f)/100.0;
        while(true){
            if(u > 0) height+=u;
            if(height > h) break;
            height = height - d;
            u = u-fat;
            if(height < 0) break;
            cont++;
        }
        if(height >= 0){
            cout << "success on day " << cont << endl;
        }
        else{
            cout << "failure on day " << cont << endl;
        }
        
    }
    return 0;
}   