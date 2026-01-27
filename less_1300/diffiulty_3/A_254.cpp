#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    map<int, vector<int>> mp;

    for (int i = 1; i <= 2 * n; i++)
    {
        int x;
        cin >> x;
        mp[x].push_back(i);
    }

    for (auto &x : mp)
    {
        if (x.second.size() != 2)
        {
            cout << -1 << '\n';
            return 0;
        }
    }

    for (auto &x : mp)
    {
        cout << x.second[0] << " " << x.second[1] << '\n';
    }

    return 0;
}
