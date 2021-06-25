#include<bits/stdc++.h>
using namespace std;
int n, m;
string ans;
pair<int,int> A, B;
char matriz[1010][1010];
int visitado[1010][1010];
int dentro(int i, int j){
    return (i >= 0 && i < n && j >= 0 && j < m);
}

void dfs(int i, int j){
    visitado[i][j] = 1;
    if(dentro(i, j+1) && visitado[i][j+1] == 0 && matriz[i][j+1] == '.'){
        ans+='R';
        dfs(i, j+1);
    }
    if(dentro(i, j-1) && visitado[i][j-1] == 0 && matriz[i][j-1] == '.'){
        ans+='L';
        dfs(i, j-1);
    }
    if(dentro(i-1, j) && visitado[i-1][j] == 0 && matriz[i-1][j] == '.'){
        ans+='U';
        dfs(i-1, j);
    }
    if(dentro(i+1, j) && visitado[i+1][j] == 0 && matriz[i+1][j] == '.'){
        ans+='D';
        dfs(i+1, j);
    }
}

int main(){
    cin >> n >> m;
    // n--;
    // m--;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> matriz[i][j];
            if(matriz[i][j] == 'A') A.first = i, B.second = j, matriz[i][j] = '.';
            if(matriz[i][j] == 'B') B.first = i, B.second = j, matriz[i][j] = '.';
        }
    }
    dfs(A.first, A.second);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << visitado[i][j];
        } cout << endl;
    }
    if(visitado[A.first][A.second] && visitado[B.first][B.second]){
        cout << "YES" << endl;
        // shortest path
        cout << ans << endl;
    }else cout << "NO\n";
    return 0;
}