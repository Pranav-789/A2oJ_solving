#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n, -1);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }

        vector<long long> b(n, -1);
        for (int i = 0; i < n; i++){
            cin >> b[i];
        }

        sort(a.begin(), a.end());

        vector<long long> prefix(n);
        prefix[0] = b[0];
        for (int i = 1; i < n; i++) {
            prefix[i] = prefix[i - 1] + b[i];
        }

        long long ans = 0;

        for (int i = 0; i < n; i++) {
            long long x = a[i];

            int usable = n - i;

            int k = upper_bound(prefix.begin(), prefix.end(), usable) - prefix.begin();

            ans = max(ans, x * k);
        }

        cout << ans << endl;
    }

    return 0;
}
