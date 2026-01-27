#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int n = s.length();
    int pos = -1;

    for (int i = 1; i < n; i++)
    {
        if (s[i] == '0' && s[i - 1] == '1')
        {
            pos = i;
            break;
        }
    }

    if (pos == -1)
    {
        cout << s.substr(0, n - 1) << endl;
    }
    else
    {
        cout << s.substr(0, pos) + s.substr(pos + 1) << endl;
    }

    return 0;
}
