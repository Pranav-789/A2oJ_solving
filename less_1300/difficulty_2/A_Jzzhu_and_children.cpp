#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int m;
    cin >> n >> m;

    int max_mod = 0;
    int ans = -1;

    for(int i = 1; i <= n; i++){
        int x;
        cin >> x;

        int turns = ceil(x + m-1)/m;
        if(turns >= max_mod){
            max_mod = turns;
            ans = i;
        }
    }
    cout << ans << endl;
    return 0;
}