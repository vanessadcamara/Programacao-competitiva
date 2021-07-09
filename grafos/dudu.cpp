#include<bits/stdc++.h>
using namespace std;

int n, m;
vector<int> adj[10123];
int grau[10123];

bool topSort(){
    queue<int> q;
	// colocamos na fila todos os vértices com grau
	// de entrada igual a zero
    for(int i=1;i<=n;i++)if(grau[i] == 0)q.push(i);
	// fazemos uma bfs e removemos todas as arestas dos nós.
	// Caso exista algum nó com aresta (grau[i] > 0), então existe o ciclo,
	// caso contrário, não existe.
    while(!q.empty()){
        int no = q.front();
        q.pop();
		// percorremos por todos os vizinhos daquele nó em níveis
        for(int viz : adj[no]){
			// retiramos uma aresta e o grau daquele nó diminui
            grau[viz]--;
			// se o grau daquele vizinho for zero, então ele entra na 
			// fila para verificarmos os nós para os quais ele aponta
            if(grau[viz] == 0)q.push(viz);
        }
    }
    for(int i=1;i<=n;i++)if(grau[i] != 0)return false;
    return true;
}


int main(){
    ios_base::sync_with_stdio(0);
    int t = 1;
	cin >> t;
    while(t--){
		cin >> n >> m;
		for(int i=0;i < m;i++){
			int a,b;
			cin >> a >> b;
			// a depende de b, então o b aponta para o vértice a
			adj[b].push_back(a);
			// grau de entrada de A aumenta
			grau[a]++;
		}

		/*
		se for possível fazer a ordenação topológica, então não existe 
		ciclos nessa DAG (grafo acíclico direcionado), se não é porque existem
		ciclos
		*/
		printf("%s\n", topSort()?"NAO":"SIM");

		// como são vários casos, limpo as estruturas que estou usando
		for(int i=1;i<=n;i++){
			adj[i].clear();
			grau[i] = 0;
		}
    }
}