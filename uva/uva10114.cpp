#include<bits/stdc++.h>
using namespace std;
double v[100123];

int main(){
    double m, p, o, gm;
    cin >> m >> p >> o >> gm;
    for(int i = 0; i < gm; i++){
        int a;
        double b;
        cin >> a >> b;
        v[a] = b;
    }

    double aux = 0;
    double comp = o + p;
    cout << comp << endl;
    for(int i = 0; i < m /*30*/; i++){
        if(v[i] == 0){
           comp *= (1- aux); 
        }else{
            aux = v[i];
            comp *= (1 - v[i]);
        }
        cout << comp << " " << o << endl;
        if(comp > o){
            cout << i << endl;
            break;
        }
        o-= p;
    }

    return 0;
}