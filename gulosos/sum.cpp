#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int i = 0, j = n-1;
    int a[200123];
    int b[200123];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        b[i] = a[i];
    }
    sort(a, a+n);
    int f = 0;
    while(i < j){
        if(a[i] + a[j] > k){
            j--;
            continue;
        }
        if(a[i] + a[j] < k){
            i++;
            continue;
        }
        else if(a[i] + a[j] == k && i != j){
            f = 1;
            break;
        }
    }
    if(f == 0){
        cout << "IMPOSSIBLE" << endl;
        return 0;
    }
    int aux1 = 0, aux2 = 0;
    for(int l = 0; l < n; l++){
        if(b[l] == a[i]){
            aux1 = l;
            break;
        }
    }
    for(int l = 0; l < n; l++){
        if(b[l] == a[j] && j != i){
            aux2 = l;
        }
    }
    cout << aux1+1 << " " << aux2+1 << endl;
    
}