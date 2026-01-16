#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> pos(n + 1);
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        pos[x] = i;
    }

    int m;
    cin >> m;
    vector<int> b(m, 0);

    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    long long ans1 = 0, ans2 = 0;
    for (int i = 0; i < m; i++)
    {
        ans1 += pos[b[i]];
        ans2 += n - pos[b[i]]+1;
    }

    cout << ans1 << " " << ans2 << endl;
}