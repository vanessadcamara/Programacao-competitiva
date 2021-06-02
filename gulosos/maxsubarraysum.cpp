#include<bits/stdc++.h>
using namespace std;
/*
kadane

8
-1 3 -2 5 3 -5 2 2

*/
long long aux, resp, num;

int main(){
    long long n;
    resp = LLONG_MIN;
    cin >> n;
    for(long long i = 0; i < n; i++){
        cin >> num;
        aux = max(num, aux+num);
        resp = max(resp, aux);
    }
    cout << aux << endl;
    return 0;
}