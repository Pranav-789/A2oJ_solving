#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    unordered_map<string, int> mp;

    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        mp[s]++;
    }

    int maxi = INT_MIN;
    string ans = "";

    for(auto f: mp){
        if(f.second > maxi){
            maxi = f.second;
            ans = f.first;
        }
    }

    cout << ans << endl;
}