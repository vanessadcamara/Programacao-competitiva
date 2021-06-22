#include<bits/stdc++.h>
using namespace std;
char matriz[60][60];
int n, m;
int visitado[60][60];
int cont = 0;
int a[] = {0,0,1,-1};
int b[] = {1,-1,0,0};

int dentro(int i, int j){
    return (i >= 0 && i < n && j >= 0 && j < m);
}
void dfs(int i, int j){
    visitado[i][j] = 1;
    for(int k = 0; k < 4; k++){
        if(dentro(i+a[k],j+b[k]) && !visitado[i+a[k]][j+b[k]] && (matriz[i+a[k]][j+b[k]] == 'A' || matriz[i+a[k]][j+b[k]] == 'T')){
            matriz[i+a[k]][j+b[k]] = 'T';
            dfs(i+a[k], j+b[k]);
        }
    }
}
int main(){
    while(cin >> n >> m){
        if(!n && !m) return 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> matriz[i][j];
                visitado[i][j] = 0;
            }
        }
        cont = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(matriz[i][j] == 'A' || matriz[i][j] == 'X' || visitado[i][j]) continue;
                else{
                    cont++;
                    dfs(i,j);
                }
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cout << matriz[i][j];
            }cout << endl;
        }
        cout << endl;
    }
    return 0;
}