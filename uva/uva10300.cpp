#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        int f;
        cin >> f;
        int sum = 0;
        for(int i = 0; i < f; i++){
            double space, animal, equipment;
            cin >> space >> animal >> equipment;
            double space_per_animal = space/animal;
            // cout << space_per_animal << endl;
            int aux = equipment* animal;
            sum += space_per_animal * aux;
            // cout << sum << endl;
        }
        cout << sum << endl;
    }

    return 0;
}