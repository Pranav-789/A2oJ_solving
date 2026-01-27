#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int p, t;
        cin >> p >> t;

        v.push_back({p, t});
    }

    sort(v.begin(), v.end(), [](const pair<int, int> &a, const pair<int, int> &b)
    {
        if (a.first != b.first)
            return a.first > b.first;
        return a.second < b.second;
    });

    int cnt = 0;
    int idx = k - 1;
    for (int i = 0; i < n; i++)
    {
        if(v[i] == v[idx]) cnt++;
    }
    

    cout << cnt << endl;
    
}