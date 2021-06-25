#include<bits/stdc++.h>
using namespace std;
int visitado[100123];
vector<int>adj[200123];
vector<pair<int,int> > vetor;

void dfs(int v){
    visitado[v] = 1;
    for(auto it : adj[v]){
        if(!visitado[it]){
            dfs(it);
        }
    }
}
int main(){
    int n, m; 
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int cont = 0;
    dfs(1);
    for(int i = 2; i <= n; i++){
        if(!visitado[i]){
            dfs(i);
            cont++;
            vetor.push_back(make_pair(i, 1));
        }
    }
    cout << cont << endl;
    for(int i = 0; i < vetor.size(); i++){
        cout << vetor[i].first << " " << vetor[i].second << endl;
    }
    return 0;
}