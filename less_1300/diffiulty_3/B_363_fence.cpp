#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    vector<int> v(n, -1);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    
    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += v[i];
    }
    int st = 0;
    int window_sum = sum;
    int j = 0;
    for (int i = k; i < n; i++)
    {
        window_sum -= v[st];
        st++;
        window_sum += v[i];
        if(window_sum < sum){
            sum = window_sum;
            j = st;
        }
    }
    cout << j+1 << endl;
}