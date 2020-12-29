#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int loop = 1; loop <= n; loop++){
        vector<pair<string, int>> s;
        int ans = INT_MIN;
        for(int i = 0; i < 10; i++){
            string t;
            int v;
            cin >> t >> v;
            s.push_back(make_pair(t, v));
            ans = max(ans, v);
        }
        cout << "Case #" << loop << ":\n";
        for(int i = 0; i < 10; i++){
            if(s[i].second == ans) cout << s[i].first << endl;
        }
    }
    return 0;
}