#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<long long> v(n+1, -1);
    v[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    vector<long long> u = v;

    sort(u.begin(), u.end());

    for (int i = 1; i <= n; i++)
    {
        v[i] += v[i-1];
    }
    
    for (int i = 1; i <= n; i++)
    {
        u[i] += u[i-1];
    }

    int m;
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        int type, l, r;
        cin >> type >> l >> r;

        if(type == 1){
            cout << (v[r] - v[l-1]) << endl;
        }
        else{
            cout << (u[r] - u[l-1]) << endl;
        }
    }
}