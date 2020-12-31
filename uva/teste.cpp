#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int main()
{

    int n, valor, qte;

    string s, t;

    vector<string> v;

    cin >> n;

    
    while(true){
        map<string, int> mapa;

        v.clear();

        for (int i = 0; i < n; i++)
        {
            cin >> s;
            v.push_back(s);
        }

        for (int i = 0; i < n; i++)
        {
            cin >> s >> valor >> qte;

            if (qte != 0)
                mapa[s] -= qte * (valor / qte);

            for (int j = 0; j < qte; j++)
            {
                cin >> t;
                mapa[t] += valor / qte;
            }
        }

        for (int i = 0; i < n; i++)
            cout << v[i] << " " << mapa[v[i]] << endl;

        if (cin >> n)
            cout << endl;
        else
            break;
    }
    
}