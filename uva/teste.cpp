#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    string v[105];
    cin >> t;
    for (int t = 0; t < t; t++)
    {
        cin >> n;
        string s, r;
        int num, pos = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> s;
            if (s == "LEFT")
            {
                v[i] = s;
                pos--;
            }
            else if (s == "RIGHT")
            {
                v[i] = s;
                pos++;
            }
            else
            {
                cin >> r >> num;
                v[i] = v[num];
                if (v[num] == "LEFT")
                    pos--;
                else if (v[num] == "RIGHT")
                    pos++;
            }
        }
        cout << pos << endl;
    }
    return 0;
}