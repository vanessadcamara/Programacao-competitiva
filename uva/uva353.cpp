#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    while(cin >> s){
        set<string> st;
        for(int i = 0; i < s.size(); i++){
            string str;
            for(int j = i; j < s.size(); j++){
                str+= s[j];
                if(str.size() == 1) continue;
                string aux = str;
                reverse(aux.begin(), aux.end());
                if(aux == str){
                    st.insert(str);
                }
            }
        }
        set<char>st1;
        for(int i = 0; i < s.size(); i++){
            st1.insert(s[i]);
        }
        int cont = 0;
        cont = st.size() + st1.size();
        // if(cont == 1){
        //     cout << "The string '" << s << "' contains " << cont << " palindrome.\n"; 

        // }    
        cout << "The string '" << s << "' contains " << cont << " palindromes.\n";
    }
    return 0;
}