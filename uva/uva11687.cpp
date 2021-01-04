#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    while (cin >> s && s != "END")
    {
        int curr = s.size(), ant = -1, aux = -1, digit = 0;
        int x = 1;
        if (s == "1")
        {
            cout << 1 << endl;
        }
        else
        {
            while (curr != ant)
            {
                ant = curr;
                aux = curr;
                digit = 0;
                while (aux != 0)
                {
                    aux /= 10;
                    digit++;
                }
                curr = digit;
                x++;
            }
            cout << x << endl;
        }
    }

    return 0;
}