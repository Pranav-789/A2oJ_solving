#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    map<int, pair<int, int>> mp; // element, cd, lastIndex
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;

        if(mp.find(x) == mp.end()){
            mp[x] = {0, i}; // cd, last_index
        }
        else{
            if(mp[x].first == 0){
                mp[x].first = i - mp[x].second;
                mp[x].second = i;
            }
            else{
                int currCD = i - mp[x].second;
                if(currCD != mp[x].first){
                    mp[x].first = INT_MAX;
                }
                else{
                    mp[x].second = i;
                }
            }
        }
    }

    int cnt = 0;

    for (auto f : mp)
    {
        if (f.second.first != INT_MAX)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    for(auto f: mp){
        if(f.second.first != INT_MAX){
            cout << f.first << " " << f.second.first << endl;
        }
    }

}