#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    while(cin >> a >> b){
        int aux = 0;
        if(a == -1 && b == -1) break;
        if(a <= b){
            aux = a - 0 + 100 - b;
            cout << min(b-a, aux);
        }if(a > b){
            aux = 100 - a + b;
            cout << min(a-b, aux);
        }
        cout << endl;
    }
    return 0;
}