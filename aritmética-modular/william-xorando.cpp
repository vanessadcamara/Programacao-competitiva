#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, linha, coluna;
    while(cin >> n >> linha >> coluna){
        if(!n && !linha && !coluna) break;
        int a[1012];
        int matriz[1012][1012];
        for(int i = 1; i < n; i++){
            cin >> a[i];
        }
        cin >> a[0];
        for(int i = 0, k = n; i < n; i++, k--){
            for(int j = i, aux = 0; j < n; j++, aux++){
                matriz[i][j] = a[aux];
            }
            for(int j = 0, aux = k; j < i; j++, aux++){
                matriz[i][j] = a[aux];
            }
        }  
        
        if(linha % n == 0){ 
            linha = n-1;
            cout << matriz[linha][coluna-1] << endl;
        }
        else{
            cout << matriz[(linha%n)-1][coluna-1] << endl;
        }
    }
    return 0;
}
