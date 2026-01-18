#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long x, y, z;
    cin >> x >> y >> z;

    long long a = sqrt((x * z) / y);
    long long b = sqrt((x * y) / z);
    long long c = sqrt((y * z) / x);

    cout << 4 * (a + b + c) << endl;
}
