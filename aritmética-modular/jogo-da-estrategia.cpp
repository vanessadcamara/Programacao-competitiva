#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    map<int, int> mapa;
    for(int i = 0; i < n*m; i++){
        int k;
        cin >> k;
        mapa[i%n]+=k;
    }   
    int maior = INT_MIN, id = -1;
    for(auto it : mapa){
        if(it.second >= maior){
            maior = it.second;
            id = it.first;
        }
    }
    cout << id+1 << endl;

    return 0;
}
