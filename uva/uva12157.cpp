#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int loop = 0; loop < t; loop++){
        int mile, juice;
        mile = 0, juice = 0;
        int n;
        cin >> n;
        for(int i = 0; i < n; i++){
            double k;
            cin >> k;
            int aux = (k/30) + 1;
            mile += aux * 10;
            aux = (k/60) + 1;
            juice += aux * 15;
        }
        if(mile < juice){
            cout << "Case " << loop+1 << ": " << "Mile" << " " << mile << endl;
        }else if(juice <     mile){
            cout << "Case " << loop + 1 << ": " << "Juice" << " " << juice << endl;
        }
        else if(juice == mile){
            cout << "Case " << loop + 1 << ": " << "Mile Juice" << " " << mile << endl;
        }
    }

    return 0;
}