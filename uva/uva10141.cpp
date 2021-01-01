#include<bits/stdc++.h>
using namespace std;

int main(){
    int r, n;
    string x;
    int cont = 0;

    while (cin >> r >> n, r || n){
        cont++;
        double price = INT_MAX, p;
        int reqMet = -1, rm;
        string name, nam;

        for (int i = 0; i < r; i++)
        {
            cin.ignore();
            getline(cin, x);
        }

        while (n--){
            getline(cin, nam);
            scanf("%lf %d\n", &p, &rm);
            if (rm > reqMet){
                reqMet = rm;
                name = nam;
                price = p;
            }
            else if (rm == reqMet && p < price){
                reqMet = rm;
                name = nam;
                price = p;
            }

            for (int i = 0; i < rm; i++)
            {
                getline(cin, x);
            }
        }

        if (cont > 1)
            cout << endl;
        cout << "RFP #" << cont << endl;
        cout << name << endl;
    }

    return 0;
}