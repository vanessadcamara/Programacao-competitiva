#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, p;
    int cont = 1;
    while(cin >> n >> p){
        if(n == 0 && p == 0) break;
        string s, name;
        for(int i = 0; i < n; i++){
            cin.ignore();
            getline(cin, s);
        }
        int maxreq = INT_MIN, req;
        double price, minprice = INT_MAX;

        while(p--){ // 4
            getline(cin, s);
            scanf("%lf %d\n", &price, &req);
            if(req > maxreq){
                maxreq = req;
                name = s;
                minprice = price;
            }if(req == maxreq && price < minprice){
                minprice = price;
                maxreq = req;
                name = s;
            }
            for(int i = 0; i < req; i++){
                string aux;
                getline(cin, aux);
            }
        }
        if(cont > 1) cout << endl;
        cout << "RFP #" << cont << endl;
        cout << name << endl;
    }


    return 0;
}