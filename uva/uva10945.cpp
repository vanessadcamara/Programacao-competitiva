#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    while(getline(cin, s)){
        if(s == "DONE") break;
        string t = "";
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '?' || s[i] == '!' || s[i] == '.' || s[i] == ',' || s[i] == ' ') continue;
            t+= tolower(s[i]);
        }
        s = t;
        reverse(s.begin(),s.end());
        // cout << s << " " << t << endl;
        if(s == t) cout << "You won't be eaten!" << endl;
        else cout << "Uh oh.." << endl;
    }
    return 0;
}