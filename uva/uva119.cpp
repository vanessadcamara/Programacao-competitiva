    #include<bits/stdc++.h>
    using namespace std;

    int main(){
        int n;
        while(scanf("%d", &n) != EOF){
            map<string, int>mapa;
            vector<string>v;
            for(int i = 0; i < n; i++){
                string s;
                cin >> s;
                mapa[s] = 0;
                v.push_back(s);
            }
            for(int i = 0; i < n; i++){
                string s;
                cin >> s;
                int valor, qte;
                cin >> valor >> qte;
                if(qte != 0) mapa[s] -= (valor/qte) * qte;
                for(int i = 0; i < qte; i++){
                    string s;
                    cin >> s;
                    mapa[s] += (valor/qte);
                }
            }
            for(int i = 0; i < v.size(); i++){
                cout << v[i] << " " << mapa[v[i]] << endl;
            }
            if(cin >> n){
                cout << endl;
            }else{
                break;
            }

        }

        return 0;
    }
