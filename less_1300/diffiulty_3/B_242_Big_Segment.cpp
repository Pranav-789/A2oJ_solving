#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> l(n, -1);
    vector<int> r(n, -1);

    int max_r = INT_MIN, min_l = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        cin >> l[i];
        cin >> r[i];

        min_l = min(min_l, l[i]);
        max_r = max(max_r, r[i]);
    }
    
    int ans = -1;
    for(int i = 0; i < n; i++){
        if(l[i] == min_l && r[i] == max_r){
            ans = i+1;
            break;
        }
    }

    cout << ans << endl;
}