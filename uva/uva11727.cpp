#include<bits/stdc++.h>
using namespace std;

int main(){
    int v[3];
    int t;
    cin >> t;
    int k = 1;
    while(t--){
        cin >> v[0];
        cin >> v[1];
        cin >> v[2];
        sort(v, v+3);
        // for(int i = 0; i < 4; i++){
        //     cout << v[i] << " ";
        // }cout << endl;
        cout << "Case " << k << ": " << v[1] << endl;
        k++;
    }

    return 0;
}