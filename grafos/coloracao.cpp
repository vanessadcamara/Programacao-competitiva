#include<bits/stdc++.h>
using namespace std;
char matriz[1222][1222];
int n, m, visitado[1222][1222];
int cont = 0;
int a[] = {0, -1, 1, 0};
int b[] = {1, 0, 0, -1};
int dentro(int i, int j){
    return(i >= 0 && i < n && j >= 0 && j < m);
}
queue<pair<int,int>>q;
void dfs(int i, int j){
    // cout << i << " " << j << endl;
    visitado[i][j] = 1;
    q.push(make_pair(i,j));
    while(!q.empty()){
        // vértice u
        pair<int,int> u = q.front();
        q.pop();
        // visito os vizinhos de u
        for(int k = 0; k < 4; k++){
            if(dentro(u.first+a[k],u.second+b[k]) && !visitado[u.first+a[k]][u.second+b[k]] && matriz[u.first+a[k]][u.second+b[k]] == '.'){
                visitado[u.first+a[k]][u.second+b[k]] = 1;
                q.push(make_pair(u.first+a[k], u.second +b[k]));
            }
        }
    }
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < m; j++){
    //         cout << visitado[i][j];
    //     }cout << endl;
    // }
    // cout << endl;
}
int main(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> matriz[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(visitado[i][j] || matriz[i][j] == 'o') continue;
            else{
                cont++;
                dfs(i,j);
            }
        }
    }
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < m; j++){
    //         cout << visitado[i][j] << " ";
    //     }cout << endl;
    // }
    cout << cont << endl;
    return 0;
}