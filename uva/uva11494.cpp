#include<bits/stdc++.h>
using namespace std;

int main(){
    int x1, y1, x2, y2;
    while(cin >> x1 && cin >> y1 && cin >> x2 && cin >> y2){
        if(!x1 && !x2 && !y1 && !y2) break;
        if(x1 == x2 && y1 == y2){
            cout << 0 << endl;
            continue;
        }
        if(x1 == x2 || y1 == y2){
            cout << 1 << endl;
            continue;
        }
        if(abs(x1-x2) == abs(y1-y2)){
            cout << 1 << endl;
            continue;
        }
        if(abs(x1-x2) != abs(y1-y2)){
            cout << 2 << endl;
            continue;
        }
    }

    return 0;
}