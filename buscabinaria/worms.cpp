#include <iostream>
#include <cstdio>
#define forn(i, n) for(int i = 1; i <= (n); i++)
using namespace std;
 
int prato[1000300];
 
int main(){
    int sum = 1, n, a, p, q;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a;
        p = sum + a;
        for(int j = sum; j < p; j++){
            prato[j] = i;
        }
        sum += a;
    }
    cin >> q;
    for(int i = 1; i <= q; i++){
        cin >> a;
        cout << prato[a] << endl;
    }
 
    return 0;
}
 
 