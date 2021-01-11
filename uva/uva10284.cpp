#include<bits/stdc++.h>
using namespace std;
char m[8][8];
bool onboard(int i, int j){
    if(i >= 0 && i < 8 && j >= 0 && j < 8) return 1;
    else return 0;
}
void bishop(int a, int b){
    int i = a, j = b;
    int ai[4] = {1,-1,-1,1};
    int aj[4] = {1,-1,1,-1};
    for(int k = 0; k < 4; k++){
        int i = a, j = b;
        while(onboard(i+ai[k], j+aj[k])){
            if(m[i+ai[k]][j+aj[k]] == '1' || m[i+ai[k]][j+aj[k]] == '0'){
                m[i+ai[k]][j+aj[k]] = '1';
                i+= ai[k];
                j+= aj[k];
            }else break;
        }
    }
}
void rook(int a, int b){
    int ai[4] = {-1,0,1,0};
    int aj[4] = {0,-1,0,1};
    for(int k = 0; k < 4; k++){
        int i = a, j = b;
        while(onboard(i+ai[k], j+aj[k])){
            if(m[i+ai[k]][j+aj[k]] == '1' || m[i+ai[k]][j+aj[k]] == '0'){
                m[i+ai[k]][j+aj[k]] = '1';
                i+= ai[k];
                j+= aj[k];
            }else break;
        }
    }
}

void queen(int a, int b){
    bishop(a,b);
    rook(a,b);
}
void knight(int a, int b){
    int ai[8] = {1,2,-1,-2,1,2,-1,-2};
    int aj[8] = {2,1,2,1,-2,-1,-2,-1};
    for(int k = 0; k < 8; k++){
        int i = a, j = b;
        while(onboard(i+ai[k], j+aj[k])){
            if(m[i+ai[k]][j+aj[k]] == '1' || m[i+ai[k]][j+aj[k]] == '0'){
                m[i+ai[k]][j+aj[k]] = '1';
                break;
            }else break;
        }
    }
}

void pawn(int a, int b){
    if(m[a][b] == 'P'){
        int ai[] = {-1,-1};
        int aj[] = {-1, 1};
        for(int k = 0; k < 2; k++){
            int i = a, j = b;
            if(onboard(i+ai[k], j+aj[k])){
                m[i+ai[k]][j+aj[k]] = (m[i+ai[k]][j+aj[k]]-'0'<=1 && m[i+ai[k]][j+aj[k]] >= 0)? '1' : m[i+ai[k]][j+aj[k]]; //ele pode ir para frente pelo menos uma vez
            }
        }
    }
    else if(m[a][b] == 'p'){
        int ai[] = {1, 1};
        int aj[] = {-1, 1};
        for(int k = 0; k < 2; k++){
            int i = a, j = b;
            if(onboard(i+ai[k], j+aj[k])){
                m[i+ai[k]][j+aj[k]] = (m[i+ai[k]][j+aj[k]]-'0'<=1 && m[i+ai[k]][j+aj[k]] >= 0)? '1' : m[i+ai[k]][j+aj[k]]; //ele pode ir para frente pelo menos uma vez
            }
        }
    }

}
void king(int a, int b){
    int ai[8] = {-1,-1,-1, 0, 0, 1, 1, 1};
    int aj[8] = {-1, 0, 1,-1, 1,-1, 0, 1};
    for(int k = 0; k < 8; k++){
        if(!onboard(a+ai[k],b+aj[k])) continue;
        else{
            if (m[a + ai[k]][b + aj[k]] - '0' <= 1 && m[a + ai[k]][b + aj[k]] - '0' >= 0)
                m[a + ai[k]][b + aj[k]] = '1';
        }

    }
}

int main(){
    string s;
    while(cin >> s){
        for(int i = 0; i < 8; i++){
            for(int j = 0; j < 8; j++){
                m[i][j] = '0';
            }
        }
        int coluna = 0;
        for(int i = 0; i < 8; i++){
            for(int j = 0; j < 8; j++){
                m[i][j] = '0';
            }
        }
        int j = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '/'){
                coluna++;
                j = 0;
            }
            else if(s[i] >= '0' && s[i] <= '8'){
                j+= s[i]-'0';
            }else{
                m[coluna][j] = s[i];
                j++;
            }
        }
        for(int l = 0; l < 8; l++){
            for(int r = 0; r < 8; r++){
                if(m[l][r] == '0') continue;
                if(m[l][r] == 'B'|| m[l][r] == 'b') bishop(l,r);
                if(m[l][r] == 'R'|| m[l][r] == 'r') rook(l,r);
                if(m[l][r] == 'Q'|| m[l][r] == 'q') queen(l,r);
                if(m[l][r] == 'N'|| m[l][r] == 'n') knight(l,r);
                if(m[l][r] == 'P'|| m[l][r] == 'p') pawn(l,r);
                if(m[l][r] == 'k'|| m[l][r] == 'K') king(l,r);
            }
        }

        int ans = 0;
        for(int i = 0; i < 8; i++){
            for(int j = 0; j < 8; j++){
                if(m[i][j] == '0') ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}