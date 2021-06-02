#include<bits/stdc++.h>
using namespace std;

int main(){ 
    int n;
    vector<pair<int,int>> v;
    cin >> n;
    for(int i = 0; i < n; i++){
        int k;
        cin >> k;
        v.emplace_back(k, i);
    }
    sort(v.begin(), v.end());
    int ans = 1;
    for(int i = n-1; i > 0; i--){
        if(v[i].second < v[i-1].second) ans++;
    }cout << ans << endl;
    return 0;
}