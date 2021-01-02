#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int k = 1;
    while(cin >> s && s != "\n"){
        cout << "Case " << k << ":\n";
        int n;
        cin >> n;
        for(int j = 0; j < n; j++){
            int a, b;
            bool vish = 0;
            cin >> a >> b;
            if(a > b){
                swap(a, b);
            }
            for(int i = a; i < b; i++){
                if(s[i] != s[i+1]) vish = 1;
            }
            if(vish) cout << "No" << endl;
            else cout << "Yes" << endl;
        }

        k++;
    }
    return 0;
}