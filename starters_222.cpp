#include <bits/stdc++.h>
using namespace std;

long long solve(int i, int w, vector<int> &a, vector<vector<long long>> &dp)
{
    int n = a.size();
    if (i == n)
        return 0;

    if (dp[i][w] != -1)
        return dp[i][w];

    long long ans = 0;

    // After getting 1 free watch
    int nw = w + 1;

    // Sell 0 watches
    ans = solve(i + 1, nw, a, dp);

    // Sell 1 watch
    if (nw >= 1)
    {
        ans = max(ans, a[i] + solve(i + 1, nw - 1, a, dp));
    }

    // Sell 2 watches
    if (nw >= 2)
    {
        ans = max(ans, 2LL * a[i] + solve(i + 1, nw - 2, a, dp));
    }

    return dp[i][w] = ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        // Max watches possible = n
        vector<vector<long long>> dp(n, vector<long long>(n + 1, -1));

        cout << solve(0, 0, a, dp) << "\n";
    }
}

// int t;
// cin >> t;

// while (t--)
// {
//     unordered_map<int, int> freq;

//     int n;
//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         freq[x]++;
//     }
//     int maxFreq = INT_MIN;
//     int minChar = INT_MAX;

//     for (auto f : freq)
//     {
//         if (f.second > maxFreq)
//         {
//             maxFreq = f.second;
//             minChar = f.first;
//         }
//         else if (f.second == maxFreq)
//         {
//             minChar = min(minChar, f.first);
//         }
//     }
//     cout << minChar << endl;
// }



// q2

// int n, m;
// cin >> n >> m;

// vector<int> a(n, -1);
// vector<int> b(m, -1);

// for (int i = 0; i < n; i++)
// {
//     cin >> a[i];
// }

// for (int i = 0; i < m; i++)
// {
//     cin >> b[i];
// }
// int cnt = 0;
// for (int i = 0; i < m; i++)
// {
//     for (int j = 0; j < n; j++)
//     {
//         if (a[j] > b[i])
//         {
//             cnt++;
//         }
//     }
// }
// cout << cnt << endl;


// q3
// int cost = 0;

// for (int i = n - 1; i >= 0; i--)
// {
//     if (v[i] < i + 1)
//     {
//         cost += v[i];
//         break;
//     }
// }

// cout << cost << endl;