#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    vector<long long> v(m, -1);

    for (long long i = 0; i < m; i++)
    {
        long long x;
        cin >> x;
        v[i] += x;
    }
    long long curr = 0;
    long long cnt = 0;

    for (int i = 0; i < m; i++)
    {
        if(v[i] >= curr){
            cnt += (v[i] - curr);
        }
        else{
            cnt += n-curr + v[i];
        }
        curr = v[i];
    }
    cout << cnt << endl;
}