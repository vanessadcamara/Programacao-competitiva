#include<bits/stdc++.h>
using namespace std;
#define MOD 100000
string s, t = "";
int main(){
    cin >> s;
    int k = s.size();
    if(k >= 4){
        for(int i = k-4; i < k; i++){
            t+= s[i];
        }
    }
    else t = s;
    int n = stoi(t);
    if(n % 4 == 0){
        cout << "S\n";
    }else cout << "N\n";
    n = 0;
    for(int i = 0; i < k; i++){
        n+= (s[i] - '0')%MOD;
    }
    if(n % 9 == 0){
        cout << "S\n";
    }else cout << "N\n";
    t = "";
    if(k >= 2){
        for(int i = k-2; i < k; i++){
            t+= s[i];
        }
        if(t == "75" || t == "25" || t == "00" || t == "50"){
            cout << "S\n";
        }else cout << "N\n";
    }else{
        n = stoi(s);
        if(n % 25 == 0){
            cout << "S\n";
        }else cout << "N\n";
    }
    return 0;   
}
