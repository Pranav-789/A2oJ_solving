#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    
    vector<int> v(n, -1);
    
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    
    sort(v.begin(), v.end());
    
    int ans = 0;
    for(int i = 0; i < n; i++){
        if(v[i] <= 0){
            ans += abs(v[i]);
            m--;
        }
        
        if(m == 0 || v[i] > 0) break;
    }
    
    cout << ans << endl;
}