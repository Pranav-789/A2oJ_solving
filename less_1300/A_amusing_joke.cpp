#include<bits/stdc++.h>
using namespace std;

int main(){
    string s, t, tot;
    cin >> s >> t >> tot;

    if(tot.length() != s.length() + t.length()){
        cout << "NO" << endl;
        return 0;
    }
    string combined = s+t;

    sort(combined.begin(), combined.end());
    sort(tot.begin(), tot.end());

    if (combined == tot)
        cout << "YES\n";
    else
        cout << "NO\n";
}