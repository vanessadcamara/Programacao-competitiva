#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int contando = 1;
    while(n--){
        string s = "";
        string t = "";
        string ha = "";
        int y = 0;
        cin.ignore();
        
        getline(cin, s);
        for(int i = s.size()-1; i >= 0; i--){
            if(i%3 == 0){
                t+= s[i];
                t += s[i+1];
                t+= s[i-1];
            }
        }
        t.erase(t.begin()+t.size()-1, t.begin()+t.size());
        for(int i = 0; i < 75; i++){
            ha += t[i];
        }
        t.erase(t.begin()+0, t.begin()+75); // excluiu 25 cartas
        for(int i = 0; i < 3; i++){
            int value = 0;
            if(t[0] == 'A' || t[0] == 'J' || t[0] == 'Q' || t[0] == 'K' || t[0] == 'T'){
                value = 10;
            }else{
                value = t[0] - '0';
            }
            y+= value;
            int k = (10-value)*3;
            t.erase(t.begin(), t.begin()+3);
            t.erase(t.begin(), t.begin()+ k);
        }
        t = ha + t;
        int ind = 0;
        for(int i = t.size()-1; i >= (t.size()-1)-(y*3); i--){
            if(i % 3 == 0){
                ind = i;
            }
        }
        cout << "Case " << contando << ": ";
        cout << t[ind] << t[ind+1] << endl;
        contando++; 
    }

    return 0;
}