#include<bits/stdc++.h>
using namespace std;

int main(){
    int k;
    string s;
    cin >> k;
    cin >> s;

    if(s.size()%k != 0){
        cout << "-1" << endl;
    }else{
        unordered_map<char, int> freq;
        for(auto c: s){
            freq[c]++;
        }
        string ans = "";
        string temp = "";
        for(auto f: freq){
            if(f.second%k != 0){
                cout << "-1" << endl;
                return 0;
            }
            else{
                temp += string(f.second/k, f.first);
            }
        }

        for (int i = 0; i < k; i++)
        {
            ans += temp;
        }
        
        
        cout << ans << endl;
    }
}