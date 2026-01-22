#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> v(m);
    for (int i = 0; i < m; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    int minDiff = INT_MAX;
    for (int i = n-1; i < m; i++)
    {
        minDiff = min(minDiff, v[i] - v[i-n+1]);
    }

    cout << minDiff << '\n';
    return 0;
}
