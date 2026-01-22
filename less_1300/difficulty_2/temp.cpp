#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, m, h;
        cin >> n >> m >> h;

        vector<long long> v(n+1, -1);
        vector<long long> ans(n+1, -1);
        vector<long long> last(n+1, 0);
        for (long long i = 1; i <= n; i++)
        {
            cin >> v[i];
            ans[i] = v[i];
        }

        long long ver = 1;
        for (long long i = 0; i < m; i++)
        {
            long long b, c;
            cin >> b >> c;

            if(last[b] < ver){
                ans[b] = v[b];
            }

            ans[b] += c;
            last[b] = ver;

            if(ans[b] > h) ver++;
        }
        
        for (long long i = 1; i <= n; i++)
        {
            if (last[i] < ver)
                cout << v[i] << " ";
            else
                cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
