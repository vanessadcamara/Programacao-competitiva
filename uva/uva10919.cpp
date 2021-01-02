#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin >> n && n != 0){
        if(n == 0) break;
        int k;
        vector<int> v, ind;
        cin >> k;
        for(int i = 0; i < n; i++){
            int aux;
            cin >> aux;
            v.push_back(aux);
        }
        int ok = 1;
        for(int i = 0; i < k; i++){
            int c, mn, cont = 0;
            cin >> c >> mn;
            for(int j = 0; j < c; j++){
                int id;
                cin >> id;
                for(int loop = 0; loop < v.size(); loop++){
                    if(v[loop] == id){
                        cont++;
                    }
                }
            }
            if(cont >= mn) ok*= 1;
            else ok*= 0;
        }
        if(!ok) cout << "no" << endl;
        else cout << "yes" << endl;
    }
    return 0;
}