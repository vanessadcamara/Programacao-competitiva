#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int k = 1;
    while(cin >> s && s != "*"){
        if(s == "Hajj"){
            cout << "Case " << k << ": " << "Hajj-e-Akbar" << endl;
        }else{
            cout << "Case " << k << ": " << "Hajj-e-Asghar" << endl;
        }
        k++;
    }

    return 0;
}