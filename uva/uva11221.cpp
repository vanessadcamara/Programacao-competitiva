#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int it = 1;
    cin.ignore();
    while(n--){
        string s = "";
        getline(cin, s);
        string t = "";
        int k = 0;

        for(int i = 0; i < s.size(); i++){ 
            if(s[i] == '.' || s[i] == ' ' || s[i] == ',' || s[i] == '!' || s[i] == '?' || s[i] == ')' || s[i] == '(') continue;
            t+= s[i];
        }
        s = t;
        // cout << s << " " << t << endl;
        reverse(t.begin(), t.end());
        if(s==t){
            k = sqrt(s.size());
            if(k * k != s.size()){
                printf("Case #%d:\n", it);
                printf("No magic :(\n");        
            }
            else {
                printf("Case #%d:\n", it);
                cout << k << endl;
            }
        }else{
            // cout << s << " " << t << endl;
            printf("Case #%d:\n", it);
            printf("No magic :(\n");
        }
        it++;
    }
    
    return 0;
}