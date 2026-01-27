#include<bits/stdc++.h>
using namespace std;

int main(){
    int y, k, n;
    cin >> y >> k >> n;
    vector<int> res;

    int r = y%k;

    int x = (k-r)%k;

    if(x == 0) x = k;
    for(; x+y <= n; x+=k){
        if(x != 0) res.push_back(x);
    }

    if(res.size() == 0) cout << -1 << endl;
    else{
        for (int i = 0; i < res.size(); i++)
        {
            cout << res[i] << " ";
        }
    }
     
}