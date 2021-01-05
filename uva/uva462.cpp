#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    while (getline(cin, str)){
        vector<vector<char>> v(4);
        int ans = 0;
        // cout << str << endl;
        for(int i = 0; i < str.size()-1; i++){
            if(str[i] == ' ') continue;
            if(str[i] == 'A') ans+= 4;
            if(str[i] == 'K') ans+= 3;
            if(str[i] == 'Q') ans+= 2;
            if(str[i] == 'J') ans+= 1;
            if(str[i+1] == 'S'){
                v[0].push_back(str[i]);
            }
            if(str[i+1] == 'D'){
                v[1].push_back(str[i]);
            }
            if(str[i+1] == 'H'){
                v[2].push_back(str[i]);
            }
            if(str[i+1] == 'C'){
                v[3].push_back(str[i]);
            }
        }
        
        map<int, int> parou;
        
        for(int i = 0; i < 4; i++){
            for(int j = 0; j < v[i].size(); j++){
                if(v[i][j] == 'A') parou[i]++;
                if(v[i][j] == 'K'){
                    if(v[i].size() == 1) ans-= 1;
                    else if(v[i].size() >= 2) parou[i]++;
                }
                if(v[i][j] == 'Q'){
                    if(v[i].size() >= 1 && v[i].size() <= 2){
                        ans--;
                    }
                    if(v[i].size() >= 3) parou[i]++;
                }
                if(v[i][j] == 'J'){
                    if(v[i].size() >= 1 && v[i].size() <= 3){
                        ans--;
                    }
                }
            }
        }
        string resp;
        if(ans >= 16 && parou[0] && parou[1] && parou[2] && parou[3]){
            resp = "BID NO-TRUMP";
            cout << resp << endl;
            continue;
        }
        for(int i = 0; i < 4; i++){
            if(v[i].size() == 2) ans+= 1;
            if(v[i].size() == 1) ans+= 2;
            if(v[i].size() == 0) ans+= 2;
        }
        if(ans < 14){
            resp = "PASS";
            cout << resp << endl;
            continue;
        }
        if(ans >= 14){
            cout << "BID ";
            int most = max(v[0].size(), max(v[1].size(), max(v[2].size(), v[3].size())));
            if(most == v[0].size()){ 
                cout << 'S' << endl;
                continue;
            }
            if(most == v[1].size()){ 
                cout << 'D' << endl;
                continue;
            }
            if(most == v[2].size()){ 
                cout << 'H' << endl;
                continue;
            }
            if(most == v[3].size()){ 
                cout << 'C' << endl;
                continue;
            }
        }
    }

    return 0;
}