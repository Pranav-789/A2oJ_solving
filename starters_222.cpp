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
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        long long profit = 0;
        int watches = 0;

        for (int i = 0; i < n; i++)
        {
            watches++;

            bool better_ahead = false;
            for (int j = i + 1; j < n; j++)
            {
                if (a[j] > a[i])
                {
                    better_ahead = true;
                    break;
                }
            }

            if (!better_ahead || i == n - 1)
            {
                int sell = min(2, watches);
                profit += sell * a[i];
                watches -= sell;
            }
            else if(watches >= 2){
                int sellable = min(watches-1, 2);
                profit += sellable * a[i];
                watches -= sellable;
            }
        }

        cout << profit << endl;
    }
    return 0;
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