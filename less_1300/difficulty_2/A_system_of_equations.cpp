#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    // a(a-1) + b(b-1) = n-m
    // a(a+1) + b(b+1) = n+m
    // a^2 + b^2 = 2n
    // a + b = m
    int cnt = 0;
    for (int i = 0; i*i <= n; i++){
        int b = n - i*i;
        if(i + b*b == m) cnt++;
    }
    
    cout << cnt << endl;
}