#include<bits/stdc++.h>
using namespace std;
int n; 
char matriz[1010][1010];
int visitado[1010], cont = 0, id[1010];
vector<int> adj[1010];
vector<int> casas;

void dfs(int v, int idU){
    cont++;
    visitado[v] = 1;
    id[v] = idU;
    for(auto it : adj[v]){
        if(!visitado[it]){
            dfs(it, idU);
        }
    }
}
int main(){
    int f = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> matriz[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(matriz[i][j] == 'S'){
                if(matriz[j][i] == 'S'){
                    adj[i].push_back(j);
                }
            }
        }
    }

    for(int i = 0; i < n; i++){
        cont = 0;
        int idU = i;
        if(!visitado[i]){
            dfs(i, idU);
            casas.push_back(cont);
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(id[i] == id[j] && matriz[i][j] == 'D'){
                cout << -1 << endl;
                return 0;
            } 
        }
    }

    cout << casas.size() << endl;
    sort(casas.rbegin(), casas.rend());
    for(int i = 0; i < casas.size(); i++){
        cout << casas[i];
        cout << (i == casas.size()-1 ?  "\n" : " ");
    }
    return 0;   
}