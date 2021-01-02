#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();
    string s;
    while(n--){
        int contm = 0, contf = 0;
        getline(cin, s);
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'M') contm++;
            else if(s[i] == 'F') contf++;
        }
        if(contm == contf && contm > 1 && contf > 1) cout << "LOOP" << endl;
        else cout << "NO LOOP" << endl;
    }

    return 0;
}