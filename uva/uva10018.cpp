#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;
    while(t--){
        vector<long long>v;
        long long n;
        cin >> n;
        long long k = n;
        while(k != 0){
            v.push_back(k%10);
            k = k/10;
        }
        long long aux = 0;
        for(long long i = 0; i < v.size(); i++){
            aux+= v[i] * pow(10,((v.size()-1)-i));
        }
        long long it = 0;
        // cout << aux << " " << n << endl;
        while(aux != n){
            it++;
            n = aux + n;
            v.clear();
            k = n;
            while(k != 0){
                v.push_back(k%10);
                k = k/10;
            }
            aux = 0;
            for(long long i = 0; i < v.size(); i++){
                aux+= v[i]*pow(10, ((v.size()-1)-i));
            }
            // cout << aux << " " << n << endl;
            if(aux == n) break;
        }
        cout << it << " " << n << endl;
    }
    
    return 0;
}