#include<bits/stdc++.h>
using namespace std;

int main(){
    double h, u, d; 
    double f;
    while(cin >> h >> u >> d >> f){
        if(h == 0) break;
        
        //h é altura do poço
        //u é a distancia subida inicialmente
        //d distancia da decida
        //f é o fator de encolhimento da distancia de subida  
        double altura_atual = 0;
        double k = (u*f)/100.0;
        int i = 1;
        while(true){
            if(u > 0) altura_atual += u;
            // cout << altura_atual << endl;
            if(altura_atual > h){
                cout << "success on day " << i << endl;
                break;
            }
            altura_atual -= d;
            if(altura_atual < 0){
                cout << "failure on day " << i << endl;
                break;
            }
            
            u = u-(k); // 2.7
            i++;
        }
    }

    return 0;
}