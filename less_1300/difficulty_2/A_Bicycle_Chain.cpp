#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> a(n, -1);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int m;
    cin >> m;

    vector<int> b(m, -1);

    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    
    int max_Ratio = INT_MIN;
    int ans = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(b[j]%a[i] == 0){
                int ratio = b[j]/a[i];

                if(ratio > max_Ratio){
                    max_Ratio = ratio;
                    ans = 1;
                }
                else if(ratio == max_Ratio) ans++;
            }
        }
    }

    cout << ans << endl;
    
}