#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    unordered_map<char, int> mp;

    for(auto ch: s){
        mp[ch]++;
    }

    int count_Odds = 0;

    for(auto f: mp){
        if(f.second%2 == 1) count_Odds++;
    }
    // cout << count_Odds << endl;
    if(count_Odds <= 1){
        cout << "First" << endl;
    }
    else{
        if(count_Odds%2 == 1){
            cout << "First" << endl;
        }
        else{
            cout << "Second" << endl;
        }
    }
}