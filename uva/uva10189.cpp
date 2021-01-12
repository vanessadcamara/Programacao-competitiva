#include<bits/stdc++.h>
using namespace std;
int n, m;
int k = 1;
bool onboard(int i, int j){
    return (i >= 0 && i < n && j >= 0 && j < m);
}

int main(){
    while(cin >> n && cin >> m){
        if(n == 0 && m == 0) break;
        else{
            if(k > 1) printf("\n");
        }
        char mt[110][110];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> mt[i][j];
            }
        }
        printf("Field #%d:\n", k);
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                int cont = 0;
                if(mt[i][j] == '*'){
                    cout << '*';
                    continue;
                }
                if(onboard(i-1,j-1)) if(mt[i-1][j-1] == '*') cont++;
                if(onboard(i-1,j)) if(mt[i-1][j] == '*') cont++;
                if(onboard(i-1, j+1)) if(mt[i-1][j+1] == '*') cont++;
                if(onboard(i, j-1)) if(mt[i][j-1] == '*') cont++;
                if(onboard(i, j+1)) if(mt[i][j+1] == '*') cont++;
                if(onboard(i+1, j-1)) if(mt[i+1][j-1] == '*') cont++;
                if(onboard(i+1, j)) if(mt[i+1][j] == '*') cont++;
                if(onboard(i+1, j+1)) if(mt[i+1][j+1] == '*') cont++;
                cout << cont;
            }
            cout << endl;
        }k++;
    }
    return 0;
}