#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<string> song, ppl;
    song = {"Happy", "birthday", "to", "you", "Happy", "birthday", "to", "you", "Happy", "birthday", "to", "Rujia", "Happy", "birthday", "to", "you"};
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        ppl.push_back(s);
    }
    if(n > 16){
        int i;
        for(i = 0; i < n; i++){
            cout << ppl[i] << ": " << (song[i%16]) << endl;
        }
        int cont_song = 16-n%16; 
        for(int j = 0; j < cont_song; j++, i++){
            cout << ppl[j] << ": " << song[i%16] << endl;  
        }
    }
    else{
        int i;
        for (i = 0; i < 16; i++){
            cout << ppl[i%n] << ": " << (song[i]) << endl;
        }
    }
    return 0;
}