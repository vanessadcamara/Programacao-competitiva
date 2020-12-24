#include<bits/stdc++.h>
using namespace std;
vector<pair<int, int>> v;
int main(){
    int k;
    while(cin >> k && k!= 0){
        int n, m;
        cin >> n >> m;
        for(int i = 0; i < k; i++){
            int x, y;
            cin >> x >> y;
            v.push_back(make_pair(x,y));
        }
        for(int i = 0; i < k; i++){
            if(n == v[i].first){
                cout << "divisa" << endl;
                continue;
            }
            if(m == v[i].second){
                cout << "divisa" << endl;
                continue;
            }
            if(v[i].first > n && v[i].second > m){
                cout << "NE" << endl;
                continue;
            }
            if(v[i].first < n && v[i].second > m){
                cout << "NO" << endl;
                continue;
            }
            if(v[i].first > n && v[i].second < m){
                cout << "SE" << endl;
                continue;
            }
            if(v[i].first < n && v[i].second < m){
                cout << "SO" << endl;
                continue;
            }
        }
        v.clear()
    }
    return 0;
}