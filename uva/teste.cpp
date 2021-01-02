#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int a = 0;
    for(int i = 0; i < s.size(); i++){
        a = s[i]-96;
        cout << "valor da letra: " << a << endl;
    }

    return 0;
}