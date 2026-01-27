#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e6 + 1;

int main(){
    
    vector<int> divs(MAXN, 0);
    for (int i = 1; i < MAXN; i++)
    {
        for (int j = i; j < MAXN; j += i)
        {
            divs[j]++;
        }
    }

    int a, b, c;
    cin >> a >> b >> c;

    long long sum = 0;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            for (int k = 1; k <= c; k++)
            {
                sum += divs[i * j * k];
            }
        }
    }

    cout << sum << '\n';
    return 0;
}
