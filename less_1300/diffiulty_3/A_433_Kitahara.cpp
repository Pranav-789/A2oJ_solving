#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int cnt100 = 0, cnt200 = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 100)
            cnt100++;
        else
            cnt200++;
    }

    int total = 100 * cnt100 + 200 * cnt200;

    if (total % 200 != 0)
    {
        cout << "NO\n";
    }
    else{
        int half = total/2;
        bool ans = false;
        for (int i = 0; i <= cnt200; i++)
        {
            if(200*i <= half && half-200*i <= cnt100*100) ans = true;
        }
        if(ans) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}