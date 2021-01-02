#include<bits/stdc++.h>
using namespace std;

int main(){
    double h, u, d, f;
    while(cin >> h >> u >> d >> f && h != 0){
        double current_height = 0;
        int i = 1;
        double k = (u*f)/100.0;
        while(true){
            if(u > 0) current_height += u;
            if(current_height > h){
                cout << "success on day " << i << endl;
                break;
            }
            current_height -= d;
            if(current_height < 0){
                cout << "failure on day " << i << endl;
                break;
            }
            u = u-k;
            i++;
        }
    }

    return 0;
}