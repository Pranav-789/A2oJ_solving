#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(7);
    for (int i = 0; i < 7; i++)
    {
        cin >> v[i];
    }

    vector<int> pref(7);
    pref[0] = v[0];
    for (int i = 1; i < 7; i++)
    {
        pref[i] = pref[i - 1] + v[i];
    }

    n %= pref[6];
    if (n == 0)
        n = pref[6];

    for (int i = 0; i < 7; i++)
    {
        if (pref[i] >= n)
        {
            cout << i + 1 << endl;
            break;
        }
    }
}
