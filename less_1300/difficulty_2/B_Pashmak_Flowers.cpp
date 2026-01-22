#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<long long> v(n, -1);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int equalStart = 1;
    
    int i = 1;
    while (i < n && v[0] == v[i])
    {
        equalStart++;
        i++;
    }

    int equalEnds = 1;
    int j = n-2;
    while (j >= 0 && v [j] == v[n-1])
    {
        equalEnds++;
        j--;
    }

    if(v[0] == v[n-1]){
        // equalStart and equalEnds overlap
        cout << (v[n-1]-v[0]) << " " << ((n-1)*(n)/2) << endl;
    }
    else{
        cout << (v[n-1]-v[0]) << " " << (equalStart*equalEnds) << endl;
    }
}