#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a, b;
    cin >> n >> a >> b;

    int cnt = 0;
    for (int i = b; i >= 0; i--)
    {
        int ap = n-1-i;
        if(ap >= a) cnt++;
    }
    cout << cnt << endl;
}