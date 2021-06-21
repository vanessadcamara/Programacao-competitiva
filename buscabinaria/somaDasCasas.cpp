#include<bits/stdc++.h>
using namespace std;
long long lista[100123];
int main(){
    long long n, soma, k;
    cin >> n;
    for(long long i = 1; i <= n; i++){
        cin >> lista[i];
    }
    cin >> k;
    int a = 1, b = n;
    for(int i = 1; i <= n; i++){
        if(lista[a] + lista[b] == k){
            cout << lista[a] << " " << lista[b] << endl;
            break;
        }
        else if(lista[a] + lista[b] < k){
            a++;
            continue;
        }else if(lista[a] + lista[b] > k){
            b--;
            continue;
        }
    }


    return 0;
}