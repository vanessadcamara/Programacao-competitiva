#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<pair<int,int> >v;
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        v.push_back(make_pair(b, a));
    }
    sort(v.begin(),v.end());
    int ans = 1, menor = INT_MAX;

    pair<int,int>aux = v[0];
    for(int i = 1; i < n; i++){
        if(v[i].second >= aux.first && v[i].second < menor){
            ans++;
            aux = v[i];
        }
    }cout << ans << endl;
    return 0;
}