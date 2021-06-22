#include<bits/stdc++.h>
using namespace std;
#define pii pair<int, int>
#define MAX 1005
int N, M;
queue<pii> q;
int paths[MAX][MAX];
pii from[MAX][MAX];
int oo = INT_MAX;
pii A;
string ans;
bool possible = false;

void retrace(pii node){  // retrace from final node, adding direction from previous node to a string. This string will be backwards but will be reversed before output.
	pii origin = from[node.first][node.second];
	if(origin ==  pii(0,0)) return;
	if(origin.first == node.first+1) ans.push_back('U');
	if(origin.first == node.first-1) ans.push_back('D');
	if(origin.second == node.second+1) ans.push_back('L');
	if(origin.second==node.second-1) ans.push_back('R');
	retrace(origin);

}
// checa se o destino considerado deve ser percorrido
void check(pii origin, pii dest){
	int pl = paths[origin.first][origin.second];
	if(pl+1 < paths[dest.first][dest.second]){
		paths[dest.first][dest.second]  = pl+1;
        // armazeno na fila para eu manter aquele próximo nó e caminhar por ele e seus adjacentes
		q.push(dest);
        // armazena a origem dele
		from[dest.first][dest.second] = origin;
	}
}
bool mora = false; // false se for a bfs para o monstro, true se a bfs for para A

void bfs(){
	while(!q.empty()){
		pii atual = q.front(), proximo; q.pop();
        // vai para nós adjacentes
		proximo = atual; proximo.first++; check(atual, proximo);
		proximo = atual; proximo.first--; check(atual, proximo);
		proximo = atual; proximo.second++; check(atual, proximo);
		proximo = atual; proximo.second--; check(atual, proximo);
		if(mora && (atual.first == 1 || atual.second == 1 || atual.first == N || atual.second == M)){
			cout << "YES" << endl;
			cout << paths[atual.first][atual.second] << endl;
			retrace(atual);
			possible = true;
			return;
		}
	}
}
int main() {
	cin >> N >> M;
	for(int i = 1; i <= N; i++){
		string s;
		cin >> s;
		for(int j = 1; j <= M; j++){
			paths[i][j] = oo;
			if(s[j-1] == '#') paths[i][j] = 0;
			if(s[j-1] == 'M') {
                // marcando na fila que existe um monstro
                // o caminho para aquela fila é 0
                q.push(pii(i,j)); paths[i][j] = 0;
            }
			if(s[j-1] == 'A'){
                // armazeno o par inicial
                A.first = i; A.second = j;
            }
		}
	}

	// bfs para mapear onde o monstro pode ir (?)
    bfs(); 

    // marca como true para fazer a bfs do A
	mora = true; 
	

    from[A.first][A.second] = pii(0,0); // give the retrace a terminating location
	paths[A.first][A.second] = 0; q.push(A); // reseta para a próxima bfs
	
    bfs(); // bfs com A
    
    // possível encontrar um caminho
	if(possible){
		reverse(ans.begin(), ans.end());
		cout << ans << endl;
	}
	else cout << "NO" << endl;
}