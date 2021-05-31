#include<bits/stdc++.h>
using namespace std;
#define MOD 9
int main(){
    string s, t;
    cin >> s >> t;
    long long num = 0;
    for(long long i = 0; i < s.size(); i++){
        num *= 10;
        num = ((num % MOD) + (s[i] - '0')) % MOD;
    }
    long long exp = 0;
    if(num == 1) cout << 1 << endl;
    if(num == 2 || num == 5){
        for(long long i = 0; i < t.size(); i++){
            exp*=10;
            exp = ((exp % 6) + (t[i] - '0')) % 6;
        }
        if(num == 2){
            long long a[] = {1, 2, 4, 8,7,5};
            cout << a[exp] << endl;
        }else{
            long long a[] = {1,5,7,8,2};
            cout << a[exp] << endl;
        }
    }
    else if(num == 3 || num == 6){
        if(t == "0") cout << 1 << endl;
        else if(t == "1") cout << num << endl;
        else cout << 9 << endl;
    }
    else if(num == 4 || num == 7){
        for(long long i = 0; i < t.size(); i++){
            exp*= 10;
            exp = ((exp%3) + (t[i] - '0')) % 3;
        }
        if(num == 4){
            long long a[] = {1,4,7};
            cout << a[exp] << endl;
        }else{
            long long a[] = {1,7,4};
            cout << a[exp] << endl;
        }
    }
    else if(num == 8){
        for(long long i = 0; i < t.size(); i++){
            exp *= 10;
            exp = ((exp%2) + (t[i] - '0')) % 2;
        }
        long long a[] = {1,8};
        cout << a[exp];
    }
    if(num == 0){
        if(t == "1") cout << 1 << endl;
        else cout << 9 << endl;
    }
    return 0;
}