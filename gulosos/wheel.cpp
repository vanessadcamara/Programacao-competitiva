#include<bits/stdc++.h>
using namespace std;
int n, k, cont;
int a[200123];

int main(){
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    int i = 0, j = n-1;
    while(i <= j){
        if(i == j){
            cont++;
            i++;
            j--;
            break;
        }
        else if(a[i] + a[j] > k){
            cont++;
            j--;
            continue;
        }else if(a[i] + a[j] <= k){
            cont++;
            i++;
            j--;
            continue;
        }
    }cout << cont << endl;
    return 0;
}