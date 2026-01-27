#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    vector<int> v(n+1, -1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    
    for (int i = k; i <= n-1; i++)
    {
        if(v[i] != v[i+1]){
            cout << -1 << endl;
            return 0;
        }
    }

    int num = v[k];
    int j = k;
    while(j > 0 && num == v[j-1]){
        j--;
    }

    cout << (j-1) << endl;
    
}