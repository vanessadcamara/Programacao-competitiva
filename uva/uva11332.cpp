#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin >> n && n != 0){
        while(n / 10 != 0){
            int sum = 0;
            vector<int> v;
            int retira = 0;
            int k = n;
            while(k != 0){
                retira = k%10;
                v.push_back(retira);
                k = k/10;
                if(k == 0) break;
            }
            // for(int i = 0; i < v.size(); i++){
            //     cout << v[i] << " ";
            // }
            for(int i = 0; i < v.size(); i++){
                sum+= v[i];
            }
            n = sum;
            if(n / 10 == 0) break;
        }
        cout << n << endl;
    }
    return 0;
}