#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    string ans = "YES";

    int cnt25 = 0, cnt50 = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if(x == 25){
            cnt25++;
        }else if(x == 50){
            if(cnt25 == 0) ans = "NO";
            cnt25--;
            cnt50++;
        }
        else{
            // 100
            if(cnt50 > 0 && cnt25 > 0){
                cnt25--;
                cnt50--;
            }else if(cnt25 >= 3){
                cnt25 -= 3;
            }
            else{
                ans = "NO";
            }
        }
    }
    cout << ans << endl;
}