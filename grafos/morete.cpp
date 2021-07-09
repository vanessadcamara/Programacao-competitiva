#include<bits/stdc++.h>
using namespace std;
int cont;
int a[100123];
vector<int> v;
int main(){
    int n;
    cin >> n;
    
    int g = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = n-1; i >= 0; i--){
        g+=a[i];
    }
    if(g >= 0){
        cout << "morete chapou: errou conta!\n";
        return 0;
    }
    cout << g << endl;  
    for(int i = n-1; i >= 0; i--){
        if(g < 0 && a[i] < 0){
            g-= a[i];
            cont++;
            v.push_back(i+1);
        }
        // if(g >= 0){
        //     break;
        // }
    }
    cout << cont << endl;
    for(int i = 0; i < v.size(); i++){
        cout << v[i] <<  ' ';
    }cout << endl;
    return 0;

}