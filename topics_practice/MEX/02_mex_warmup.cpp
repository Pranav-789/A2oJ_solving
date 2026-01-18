#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k, x;
        cin >> n >> k >> x;

        // n = 5, k = 3, x = 3

        // necessity 0 to k-1 should be present
        // if x < k-1 -> problem as mex would not be possible
        // if k > n that also leads to -1

        if ((x < k - 1) || k > n)
        {
            cout << -1 << endl;
        }
        else
        {
            int cnt = 0;
            for (int i = 0; i < k; i++)
            {
                cnt += i;
            }
            for (int i = k; i < n; i++)
            {
                cnt += (x == k ? k-1 : x);
            }
            cout << cnt << endl;
        }
    }
}