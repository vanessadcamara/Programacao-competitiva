#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    while (getline(cin, s))
    {
        getline(cin, t);
        int a = 0, b = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
                a += (tolower(s[i]) - 96);
        }
        for (int i = 0; i < t.size(); i++)
        {
            if ((t[i] >= 'a' && t[i] <= 'z') || (t[i] >= 'A' && t[i] <= 'Z'))
                b += (tolower(t[i]) - 96);
        }
        int suma = 0, sumb = 0;
        while (a > 0 || suma > 9)
        {
            if (a == 0)
            {
                a = suma;
                suma = 0;
            }
            suma += a % 10;
            a = a / 10;
        }
        while (b > 0 || sumb > 9)
        {
            if (b == 0)
            {
                b = sumb;
                sumb = 0;
            }
            sumb += b % 10;
            b = b / 10;
        }
        if (suma > sumb)
        {
            swap(suma, sumb);
        }
        //a
        double rat = (suma * 1.0) / (sumb * 1.0);
        printf("%.2f %\n", rat * 100.0);
    }

    return 0;
}