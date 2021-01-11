#include<bits/stdc++.h>
using namespace std;
int n, m;
bool dentro(int i,int j){
    if(i >= 0 && i <= n && j >= 0 && j <= m) return 1;
    else return 0;
}
int main(){
    cin >> n >> m;
    int m[9][9];
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            m[i][j] = 1;
        }
    }
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if(dentro(i-1, j-2)) m[i-1][j-2] = 0;
            if(dentro(i-2, j-1)) m[i-2][j-1] = 0;
            if(dentro(i+2, j-1)) m[i+2][j-1] = 0;
            if(dentro(i+1, j-2)) m[i+1][j-2] = 0;
            if(dentro(i+2, j+1)) m[i+2][j+1] = 0;
            if(dentro(i+1, j+2)) m[i+1][j+2] = 0;
            if(dentro(i-1, j+2)) m[i-1][j+2] = 0;
            if(dentro(i-2, j+1)) m[i-2][j+1] = 0;

        }
    }
    int cont = 0;
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if(m[i][j]) cont++;
            cout << m[i][j] << " ";
        }cout << endl;
    }
    cout << cont << endl;
    return 0;
}