#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    while(getline(cin,s)){
        int cont = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '"'){
                if(cont == 0){
                    cont = 1;
                    cout << "``";
                }else{
                    cont = 0;
                    cout << "''";
                }
            }
            else 
                cout << s[i];
        }cout << "\n";
    }
    return 0;
}
