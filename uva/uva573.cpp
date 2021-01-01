#include<bits/stdc++.h>
using namespace std;

int main(){
    double h, u, d, f;
    while(cin >> h >> u >> d >> f && h != 0){
        double altura_atual = 0;
        int i = 1;
        double k = (u*f)/100.0;
        while(true){
            if(u > 0) altura_atual += u;
            if(altura_atual > h){
                cout << "success on day " << i << endl;
                break;
            }
            altura_atual -= d;
            if(altura_atual < 0){
                cout << "failure on day " << i << endl;
                break;
            }
            u = u-k;
            i++;
        }
    }

    return 0;
}