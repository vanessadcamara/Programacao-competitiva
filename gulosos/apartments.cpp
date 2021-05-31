#include<bits/stdc++.h>
using namespace std;
priority_queue<int, vector<int>, greater<int> > p;
priority_queue<int, vector<int>, greater<int> > c;

int main(){
    int pessoas, casas, dif;
    cin >> pessoas >> casas >> dif;
    for(int i = 0; i < pessoas; i++){
        int k;
        cin >> k;
        p.push(k);
    }
    for(int i = 0; i < casas; i++){
        int k;
        cin >> k;
        c.push(k);
    }
    // se pessoas > casas -> nem todas as pessoas terão casas
    int cont = 0;
 
    if(pessoas > casas){
        while(!c.empty() && !p.empty()){
            if(c.top() >= p.top()-dif && c.top() <= p.top()+dif){
                cont++;
                c.pop(), p.pop();
            }else {
                if(p.top() > c.top()) c.pop();
                else p.pop();
            }
        }
    }else{
        /*
        p  100
        c  
        */
        while(!c.empty() && !p.empty()){
            if(c.top() >= p.top()-dif && c.top() <= p.top()+dif){
                cont++;
                c.pop(), p.pop();
            }else{
                if(p.top() < c.top()) p.pop();
                else c.pop();
            } 
        }

    }
    cout << cont << endl;
    return 0;
}