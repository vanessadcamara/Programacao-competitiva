#include<bits/stdc++.h>
using namespace std;
/* QUESTÃO OBRIGATÓRIA*/

// declaração de variáveis
int n; 
char matriz[1010][1010];
int visitado[1010], cont = 0, id[1010];
vector<int> adj[1010];
vector<int> casas;

void dfs(int v, int idU){
    // passo pelo vértice e incremento a qte de pessoas
    // naquela casa
    cont++;
    // marco o vértice como visitado, para não haver ambiguidade
    visitado[v] = 1;
    // marco o pai daquele vértice
    id[v] = idU;
    // para cada vizinho dele, se ele não foi visitado, passo a dfs recursivamente
    for(auto it : adj[v]){
        if(!visitado[it]){
            dfs(it, idU);
        }
    }
}
int main(){
    int f = 0;
    // leio a matriz n x n
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> matriz[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            /* se naquela posição for "S"
            tanto para linha i coluna j
            quanto para linha j coluna i
            eu add isso à lista de adjascências
            */
            if(matriz[i][j] == 'S'){
                if(matriz[j][i] == 'S'){
                    // por enquanto eu só adiciono o vértice j
                    // ao i porque como é uma matriz, ao longo do
                    // percurso vamos passar por matriz[j][i] 
                    adj[i].push_back(j);
                }
            }
        }
    }

    for(int i = 0; i < n; i++){
        //vamos contar quantas pessoas pertencem aquela casa,
        // ou seja, quantos vértices estão ligados naquele
        // componente conexo
        cont = 0;
        // o id daquele vértice é ele mesmo inicialmente
        int idU = i;
        // se eu não passei por aquele vértice, visito ele
        if(!visitado[i]){
            // faço todos que pertencem ao mesmo componente conexo
            // receberem o mesmo id (que é o mesmo pai)
            dfs(i, idU);
            // no meu vetor de casas, digo quantos vértices pertencem
            // àquele componente (que é aquela casa)
            casas.push_back(cont);
        }
    }

    // passo por toda a matriz para verificar se existe inconsistência,
    // como fala a questão
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            /*
            Haverá inconsistência se o id de um vértice
            for igual ao id de outro mas estiver marcado como 'D'
            e não como 'S'. Isso é uma inconsistência, porque, se eles
            têm o mesmo id (pertencem a mesma casa), deveriam estar marcados
            como 'S' e não como 'D'
            */
            if(id[i] == id[j] && matriz[i][j] == 'D'){
                // caso entre no if, iprimimos -1 pois há inconsistência
                cout << -1 << endl;
                return 0;
            } 
        }
    }
    // caso contrário, imprimimos o número de componentes conexos (casas)
    cout << casas.size() << endl;
    // sort em ordem decrescente, como perde a questão
    sort(casas.rbegin(), casas.rend());
    for(int i = 0; i < casas.size(); i++){
        cout << casas[i];
        // tratamento da última linha do vetor, para não imprimir espaço no final
        cout << (i == casas.size()-1 ?  "\n" : " ");
    }
    return 0;   
}