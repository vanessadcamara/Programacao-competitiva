/*
vai invadir se:
for a posição 0,0
for <= F
estiver adjascente a uma área invadida
resolução:
mapear quem vai ser invadido
*/
#include<bits/stdc++.h>
using namespace std;
int n, F;
char m[555][555];

bool dentro(int i, int j){
    return i >= 0 && i < n && j >= 0 && j < n;
}
int a[] = {0, -1, 1, 0};
int b[] = {1, 0, 0, -1};
void dfs(int i, int j){
    for(int k = 0; k < 4; k++){
        //dentro da matriz, diferente de zero, menor que F  
        if(dentro(i+a[k], j+b[k]) && m[i+a[k]][j+b[k]] != '*' && ((m[i+a[k]][j+b[k]] - '0') <= F)){
            //se o pai dele for asterisco
            if(m[i][j] == '*'){
                m[i+a[k]][j+b[k]] = '*';
                dfs(i+a[k], j+b[k]);
            }
        }
    }

}
int main(){
    cin >> n >> F;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> m[i][j];
        }
    }
    if((m[0][0] - '0') <= F) m[0][0] = '*';
    dfs(0,0);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << m[i][j];
        }cout << endl;
    }
    return 0;
}