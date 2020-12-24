#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v;
    int retira = 0;
    while(n!= 0){
        retira = n%10;
        v.push_back(retira);
        n = n/10;
    }
    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    return 0;
}