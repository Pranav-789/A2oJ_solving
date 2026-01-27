#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum_l = 0, sum_r = 0;
    bool has_mixed = false;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;

        sum_l += x;
        sum_r += y;

        if ((x % 2) != (y % 2))
            has_mixed = true;
    }

    if (sum_l % 2 == 0 && sum_r % 2 == 0)
    {
        cout << 0 << '\n';
    }
    else if (sum_l % 2 == 1 && sum_r % 2 == 1)
    {
        cout << (has_mixed ? 1 : -1) << '\n';
    }
    else
    {
        cout << -1 << '\n';
    }

    return 0;
}
