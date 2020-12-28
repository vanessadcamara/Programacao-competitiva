#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, b, h, w;
    while(scanf("%d %d %d %d", &n, &b, &h, &w) != EOF){
        int f = 0;
        int p, a;
        int ans = INT_MAX;
        int oka = 0;
        int okp = 0;
        for(int i = 0; i < h; i++){
            cin >> p;
            for(int j = 0; j < w; j++){
                cin >> a;
                if(a >= n){ // aqui
                    oka = 1;
                }
            }
            p *= n;
            if(p <= b){
                okp = 1;
            }else{
                okp = 0;
            }
            // só entra aqui se respeitar todos os critérios
            if(oka * okp){
                f = 1;
                ans = min(ans, p);
            }
        }
        if(f == 0){
            cout << "stay home" << endl;
        }else{
            cout << ans << endl;
        }
    }

    return 0;
}