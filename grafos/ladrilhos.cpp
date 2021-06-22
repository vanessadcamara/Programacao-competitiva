#include<bits/stdc++.h>
using namespace std;
int n, m, cont;
int visitado[222][222];
int a[222][222];

bool dentro(int i, int j){
    return i >= 0 && i < n && j >= 0 && j < m;
}

void dfs(int i, int j, int cor ){
    if(!dentro(i, j) || visitado[i][j] || a[i][j] != cor) return;
    visitado[i][j] = 1;
    cont++;
    dfs(i, j+1, cor);
    dfs(i, j-1, cor);
    dfs(i+1, j, cor);
    dfs(i-1, j, cor);
}
int main(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    int ans = INT_MAX;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cont = 0;
            if(!visitado[i][j]) {
                dfs(i,j, a[i][j]);
                ans = min(cont, ans);
            }   
        }
    }
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < m; j++){
    //         cout << visitado[i][j];
    //     }cout << endl;
    // }
    cout << ans << endl;
    return 0;
}