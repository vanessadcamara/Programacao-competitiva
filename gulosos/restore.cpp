#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int f[55];
        for(int i = 0; i < 55; i++){
            f[i] = 0;
        }
        vector<int> v;
        for(int i = 0; i < n*2; i++){
            int num;
            cin >> num;
            if(f[num]) continue;
            else{
                f[num] = 1;
                v.push_back(num);
            } 
            
        }
        for(int i = 0; i < v.size(); i++){
            cout << v[i] << " ";
        }cout << endl;
    }
    return 0;
}