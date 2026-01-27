#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s; // string length is 2n
    cin >> s;
    string s1 = s.substr(0, n);
    string s2 = s.substr(n, n);

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    int i =0, j = 0;

    // first half strictly greater
    bool ans = true;
    for (int i = 0; i < n; i++)
    {
        if(s1[i] <= s2[i]){
            ans = false;
        }
    }

    bool ans2 = true;
    for (int i = 0; i < n; i++)
    {
        if(s[i] >= s2[i]) ans2 = false;
    }
    
    if(ans || ans2){
        cout << "YES" << endl;
    }else cout << "NO" << endl;
}