#include<bits/stdc++.h>
#ifdef ONLINE_JUDGE
#define endl '\n'
#endif
using namespace std;
long long  n;
long long  v[100123];
long long  inv_mod(long long  a, long long  b){
    return (a > 1 ? b-inv_mod(b%a, a)*b/a : 1);
}
int  main(){
    cin >> n;
    for(long long  i = 0; i < n; i++){
        cin >> v[i];
    }
    long long  t, a, b, sub, d;
    cin >> t >> a >> b;
    if(__gcd(a,t) != 1){
        cout << "DECIFRAGEM AMBIGUA\n";
    }
    else{
        for(long long  i = 0; i < n; i++){
            sub = ((v[i]%t) - (b%t)+t) % t;
            d = (sub * inv_mod(a, t)) % t;
            cout << d;
            cout << (i == n-1 ? '\n' : ' ');
        }
    }
    return 0;
}
