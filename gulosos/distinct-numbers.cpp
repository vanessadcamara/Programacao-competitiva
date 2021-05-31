#include<bits/stdc++.h>
using namespace std;
set<int> st;
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int k;
        cin >> k;
        st.insert(k);
    }
    cout << st.size() << endl;
    return 0;
}