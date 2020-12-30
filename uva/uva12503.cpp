#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int v[100123];
        string s, AS;
        int num, pos = 0;
        for(int i = 0; i < n; i++){
            cin >> s;
            if(s == "LEFT"){
                v[i] = 0;
            }
            else if(s == "RIGHT"){
                v[i] = 1;
            }
            else if(s == "SAME"){
                cin >> AS >> num;
                v[i] = v[num-1]; 
            }
        }
        for(int i = 0; i < n; i++){
            if(v[i]) pos++;
            else pos--;
        }
        cout << pos << endl;
    }

    return 0;
}