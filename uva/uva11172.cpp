#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    int t; cin >> t;
    while(t--){
        cin >> a >> b;
        if(a > b){
            cout << ">";
        }else if(a < b){
            cout << "<";
        }
        else if(a == b){
            cout << "=";
        }
        cout << endl;
    }
    return 0;

}