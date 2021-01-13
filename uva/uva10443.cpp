#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    while(n--){
        int a, b, c;
        cin >> a >> b >> c;
        char m[a+1][b+1];
        char aux[a+1][b+1];
        for(int i = 0; i < a; i++){
            for(int j = 0; j < b; j++){
                cin >> m[i][j];
                aux[i][j] = m[i][j];
            }
        }
        // for(int i = 0; i < a; i++){
        //     for(int j = 0; j < b; j++){
        //         cout << m[i][j];
        //     }cout << endl;
        // }
        for(int k = 0; k < c; k++){
            for(int i = 0; i < a; i++){
                for(int j = 0; j < b; j++){
                    if(m[i][j] == 'R'){
                        if(j+1 < b){
                            if(m[i][j+1] == 'P') aux[i][j] = 'P';
                            if(m[i][j+1] == 'S') aux[i][j+1] = 'R';
                        }
                        if(i+1 < a){ // linha
                            if(m[i+1][j] == 'P') aux[i][j] = 'P';
                            if(m[i+1][j] == 'S') aux[i+1][j] = 'R';
                        }
                    } 
                    if(m[i][j] == 'P'){
                        if(j+1 < b){
                            if(m[i][j+1] == 'R') aux[i][j+1] = 'P';
                            if(m[i][j+1] == 'S') aux[i][j] = 'S';
                        }
                        if(i+1 < a){
                            if(m[i+1][j] == 'R') aux[i+1][j] = 'P';
                            if(m[i+1][j] == 'S') aux[i][j] = 'S';
                        }
                    }
                    if(m[i][j] == 'S'){
                        if(j+1 < b){
                            if(m[i][j+1] == 'P') aux[i][j+1] = 'S';
                            if(m[i][j+1] == 'R') aux[i][j] = 'R';
                        }
                        if(i+1 < a){
                            if(m[i+1][j] == 'P') aux[i+1][j] = 'S';
                            if(m[i+1][j] == 'R') aux[i][j] = 'R';
                        }
                    }
                }
            }
            for(int l = 0; l < a; l++){
                for(int r = 0; r < b; r++){
                    m[l][r] = aux[l][r];
                }
            }
        }
        for(int i = 0; i < a; i++){
            for(int j = 0; j < b; j++){
                cout << m[i][j];
            }cout << endl;
        }
        if(n != 0)
            cout << endl;
    }
    return 0;
}