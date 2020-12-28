#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        int low = 0, high = 0, j;
        cin >> j;
        int aux = 0;
        cin >> aux;
        for(int k = 0; k < j-1; k++){
            int num;
            cin >> num;
            if(num < aux){
                low++;
            }else if(num > aux){
                high++;
            }
            aux = num;
        }
        cout << "Case " << i << ": " << high << " " << low << endl;
    }

    return 0;
}