#include<bits/stdc++.h>
using namespace std;
int n, l, r, sum, resp, f[555], k, ans1, ans2;
int main(){
    int t;
    cin >> t;
    while(t--){
        n = 0, l = 0, r = 0, sum = 0;
        cin >> n >> l >> r >> sum;
        if(l != r && sum <= 2){
            cout << -1 << endl;
            continue;
        }
        
        k = r-l + 1, ans1 = 0, ans2 = 0;
        for(int i = k, j = n; i > 0; i--, j--){
            ans1+= j;
        }
        for(int i = k, j = 1; i > 0; i--, j++){
            ans2+= j;
        }
        // se a maior soma possivel do array for menor que a soma desejada, é impossível
        if(ans1 < sum || sum < ans2){
            cout << -1 << endl;
        }else{
            vector<int> v;
            resp = 0;
            for(int i = 0; i < 555; i++){
                f[i] = 0;
            }
            int tot = 0;
            for(int i = 1; i <= n; i++){
                // 1 2 3 4 5
                while(v.size() < k) v.push_back(i), tot+= i;
                if(tot >= sum){
                    int aux = tot-sum;
                    if(aux == 0) break;
                    for(int loop = 1; loop <= n; loop++){
                        aux = abs(aux-v[loop]);
                        int auxiliar = 0;
                        for(int it = 0; it < v.size(); it++){
                            if(aux == v[it]){
                                auxiliar = 1;
                            }
                        }
                        // se ele não está no vetor:
                        if(!auxiliar){
                            v.erase(v.begin()+loop-1);
                            v.push_back(aux);
                            break;
                        }
                    }
                }
                tot-= v[0];
                v.erase(v.begin());
            }cout << v.size();
            // for(int i = 0; i < v.size(); i++){
            //     cout << v[i] << " ";
            //     f[v[i]] = 1;
            // }
            // cout << f[2] << endl;
            // cout << endl;
            // for(int i = 1, a = 1; i <= n;){
            //     if(i == l){
            //         for(int j = 0; j < v.size(); j++){
            //             cout << v[j] << " ";
            //         }
            //         i+= k;
            //     }else{
            //         while(f[a] == 1) a++;
            //         cout << a << " ";
            //         f[a] = 1;
            //         i++;
            //     }
            // }
            cout << endl;
        }
    }
    return 0;
}