#include<bits/stdc++.h>
using namespace std;
int n, m, started_point, end_point;
int visitado[200123], pai[100123];
vector<int> adj[200123];

void dfs(int u){
    visitado[u] = 1;
    for(auto it : adj[u]){
        pai[it] = u;
        
        if(!visitado[it]){
            dfs(it);
        }
    }

}
int main(){
    cin >> n >> m;
    if(n > m){
        cout << "IMPOSSIBLE\n";
        return 0;
    }
    while(m--){
        int a, b;cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(1);
    int aux = started_point;
    cout << end_point << " ";
    cout << pai[end_point] << " ";
    started_point = pai[end_point];
    cout << pai[end_point] << " ";
    end_point = pai[end_point];
    cout << pai[end_point] << endl;
    return 0;
}