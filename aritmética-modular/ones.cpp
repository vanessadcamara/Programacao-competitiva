#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin >> n){
        int d = 1, cont = 1;
        while(d % n){
            d = (d*10 + 1) % n;
            cont++;
        }
        cout << cont << endl;
    }
    return 0;
}
