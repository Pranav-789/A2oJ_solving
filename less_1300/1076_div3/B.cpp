#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> p(n, -1);
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
        }

        int pos = -1;
        for (int i = 0; i < n; i++)
        {
            if (p[i] != n - i)
            {
                pos = i;
                break;
            }
        }

        if (pos == -1)
        {
            for (int x : p)
                cout << x << " ";
            cout << endl;
            continue;
        }

        int mx = *max_element(p.begin() + pos, p.end());

        int r = pos;
        for (int i = pos; i < n; i++)
        {
            if (p[i] == mx)
            {
                r = i;
            }
        }

        reverse(p.begin() + pos, p.begin() + r + 1);

        for (int x : p)
            cout << x << " ";
        cout << '\n';
    }
}
