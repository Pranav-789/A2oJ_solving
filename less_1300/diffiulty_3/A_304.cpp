#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int cnt = 0;

    for (int i = 1; i <= n; i++)
    {
        int low = 1, high = i;
        while(low <= high){
            if(low*low + high*high == i*i){
                cnt++;
                low++;
                high--;
            }
            else if (low * low + high * high < i * i)
            {
                low++;
            }
            else{
                high--;
            }
        }
    }

    cout << cnt << endl;
    
}