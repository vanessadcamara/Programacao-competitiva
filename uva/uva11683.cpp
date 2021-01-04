#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, c;
    while(cin >> a && cin >> c){
        if(a == 0 && c == 0) break;
        vector<int> v;
        for(int i = 0; i < c; i++){
            int n;
            cin >> n;
            v.push_back(n);
        }
        int cont = 0;
        int f = 0;
        for(int i = a; i >= 1; i--){
            f = 0;
            for(int j = 0; j < v.size(); j++){
                if(f == 0 && v[j] < i){
                    f = 1;
                    cont++;
                }if(v[j] >= i){
                    f = 0;
                }
            }
        }
        cout << cont << endl;

    }

    return 0;
}