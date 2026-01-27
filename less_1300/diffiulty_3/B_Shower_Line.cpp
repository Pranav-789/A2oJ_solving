#include<bits/stdc++.h>
using namespace std;

int g[6][6];

int main()
{
    int n = 5;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> g[i][j];
    vector<int> p = {0 ,1, 2, 3, 4};
    int ans = -1, tmp;

    do
    {
        // 01234
        tmp = g[p[0]][p[1]] + g[p[1]][p[0]];
        tmp += 2*(g[p[2]][p[3]] + g[p[3]][p[2]]);

        // 1234
        tmp += g[p[1]][p[2]] + g[p[2]][p[1]];
        tmp += 2*(g[p[3]][p[4]] + g[p[4]][p[3]]);

        if (tmp > ans)
        {
            ans = tmp;
        }
    } while (next_permutation(p.begin(), p.end()));

    cout << ans << "\n";
    return 0;
}