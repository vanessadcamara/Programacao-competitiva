#include<bits/stdc++.h>
using namespace std;
int n, sum = 0;
string renas[] = {"Rudolph", "Dasher", "Dancer", "Prancer", "Vixen", "Comet", "Cupid", "Donner", "Blitzen"};
int main(){
    for(int i = 0; i < 9; i++){
        cin >> n;
        sum+= n;
    }
    sum = sum % 9;
    cout << renas[sum] << endl;
    return 0;