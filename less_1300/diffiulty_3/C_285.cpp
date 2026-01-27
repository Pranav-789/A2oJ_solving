#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<long long> v(n, -1);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    long long cnt = 0;

    for (int i = 0; i < n; i++)
    {
        cnt += (abs(i+1 - v[i]));
    }
    cout << cnt << endl;
}