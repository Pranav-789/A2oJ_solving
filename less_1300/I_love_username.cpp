#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n, 0);
    int preMax, preMin;
    
    int cnt = 0;
    
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    preMin = v[0];
    preMax = v[0];

    for (int i = 1; i < n; i++)
    {
        if(preMin > v[i]){
            preMin = v[i];
            cnt++;
        }
        else if(preMax < v[i])
        {
            preMax = v[i];
            cnt++;
        }
    }

    cout << cnt << endl;

}