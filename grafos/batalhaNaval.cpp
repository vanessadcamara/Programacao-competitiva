#include <bits/stdc++.h>
using namespace std;

const int MAX = 101;
int n, m, q, x, y, cont=0, f;
string a[MAX];
int destruiu[MAX][MAX], visitado[MAX][MAX];

void dfs(int i, int j){
    if(i==n||i==-1||j==m||j==-1)return;
    if(a[i][j]=='.' || visitado[i][j])return;
    visitado[i][j] = 1;
    if(!destruiu[i][j]){
        f = 0;
    }
    dfs(i, j+1), dfs(i, j-1), dfs(i+1, j), dfs(i-1, j);
}

int main(){
    cin>>n>>m;
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    cin>>q;
    while(q--){
        cin>>x>>y;
        x--, y--;
        if(a[x][y]=='#')destruiu[x][y] = 1;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            f = 0;
            if(a[i][j]=='#' && destruiu[i][j] && !visitado[i][j]){
                visitado[i][j] = 1;
                f = 1;
                dfs(i, j+1), dfs(i, j-1), dfs(i+1, j), dfs(i-1, j);
            }
            if(f)cont++;
        }
    }
    cout << cont << '\n';
return 0;}
