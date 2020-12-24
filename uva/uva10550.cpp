#include<bits/stdc++.h>
using namespace std;

int main(){
    int s, a, b, c;
    int ans = 0;
    cin >> s >> a >> b >> c;
    while(s || a || b || c){
        // 0 30 0 30
        // s a  b c
        if(s < a){
            ans += (a-s);
        }else{
            ans += (40-(s-a));
        }
        if(a < b){
            ans+= (b-a);
        }else{
            ans+= (40-(a-b));
        }
        if(b < c){
            ans += (c-b);
            cout << ans << endl;
        }else{
            ans+= (40-(b-c));
        }
        cout << 1080+(ans*9) << endl;

        cin >> s >> a >> b >> c;
    }
}