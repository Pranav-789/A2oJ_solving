#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, l, c, d, p, nl, np;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int drink_toasts = k*l/nl;
    int lime_toasts = c*d;
    int salt_toats = p/np;

    cout << min(drink_toasts/n, min(lime_toasts/n, salt_toats/n)) << endl;
}