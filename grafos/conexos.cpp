#include<bits/stdc++.h>
using namespace std;
int n, m;
int visitado[30];
vector<int> adj[33];
vector<char> pai[33];

void dfs(int u, int v){
    visitado[u] = 1;
    char aux = (u+49) +  '0';
    pai[v].push_back(aux);
    for(auto it : adj[u]){
        if(!visitado[it]){
            dfs(it, v);
        }
    }
}
int main(){
    int t;
    cin >> t;
    for(int l = 1; l <= t; l++){
        printf("Case #%d:\n", l);
        cin >> n >> m;
        for(int i = 0; i < n; i++){
            adj[i].clear();
            visitado[i] = 0;
        }
        while(m--){
            char a, b;
            cin >> a >> b;
            adj[a-'a'].push_back(b-'a');
            adj[b-'a'].push_back(a-'a');
        }
        int cont = 0;
        for(int i = 0; i < n; i++){
            if(!visitado[i]){
                cont++;
                dfs(i,i);
                sort(pai[i].begin(), pai[i].end());
            }
        }
        sort(pai, pai+n);
        for(int i = 0; i < n; i++){
            if(pai[i].size() == 0) continue;
            for(auto it : pai[i]){
                printf("%c,", it);
            }
            printf("\n");
        }
        cout << cont << " connected components\n\n";
        for(int i = 0; i < n; i++){
            pai[i].clear();
        }
    }       
    return 0;
}