#include<bits/stdc++.h>
using namespace std;

int a, b, c;
int x, y;

int main(){
    while(cin >> a && cin >> b && cin >> c && cin >> x && cin >> y){
        if(!a && !b && !c && !x && !y) break;
        set<int> st;
        int ans = 0;
        st.insert(a);
        st.insert(b);
        st.insert(c);
        int rei = 0;
        if(x < y) swap(x,y);
        auto it = st.upper_bound(x);
        if(it == st.end()){ // ele ganhou
           rei++;
           st.erase(st.begin()); // excluo o menor valor que a rainha tem
        }
        else st.erase(it); // ela ganhou
        
        auto it2 = st.upper_bound(y);
        if(it2 == st.end()){ // ele ganhou
           rei++;
           st.erase(st.begin()); // excluo o menor valor que a rainha tem
        }
        else st.erase(it2); // ela ganhou
        
        if(rei == 2){ // 2 vs 0
            ans = 1;
            while(ans == x || ans == y || ans == a || ans == b || ans == c){
                ans++;
            }
            cout << ans << endl;
        }
        if(rei == 1){ // 1 x 1
            ans = *st.begin()+1;
            while(ans == x || ans == y || ans == a || ans == b || ans == c){
                ans++;
            }
            if(ans > 52){
                cout << -1 << endl;
            }else{
                cout << ans << endl;
            }
        }if(rei == 0){ // 0 vs 2
            cout << -1 << endl;
        }
    }

    return 0;
}