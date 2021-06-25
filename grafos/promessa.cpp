#include<bits/stdc++.h>
using namespace std;
int t;
int n, m;
int visitado[111];
vector<int> adj[111];
void dfs(int u){
    visitado[u] = 1;
    for(auto it : adj[u]){
        if(!visitado[it]) dfs(it);
    }
}
int main(){
    cin >> t;
    for(int l = 1; l <=t; l++){
        cin >> n >> m;
        for(int i = 1; i<= n; i++){
            adj[i].clear();
            for(int it : adj[i]){
                // adj[it].clear();
            }
        }
        memset(visitado, 0, sizeof(visitado));
        for(int i = 0; i < m; i++){
            int a, b;
            cin >> a >> b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        dfs(1);
        int cont = 0;
        for(int i = 2; i <= n; i++){
            if(!visitado[i]){
                cont++;
                dfs(i);
            }
        }
        if(!cont){
            cout << "Caso #" << l << ": a promessa foi cumprida\n"; 
        }else{
            cout << "Caso #" << l << ": ainda falta(m) " << cont << " estrada(s)\n";
        }
    }
    return 0;
}