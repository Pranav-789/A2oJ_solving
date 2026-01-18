#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(2, 0));

    int lo = 0, ro = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2; j++){
            cin >> v[i][j];

            if(j == 0 && v[i][j] == 0){
                lo++;
            }
            if(j == 1 && v[i][j] == 0){
                ro++;
            }
        }
    }

    int ans = min(lo, n-lo) + min(ro, n- ro);

    cout << ans << endl;
}