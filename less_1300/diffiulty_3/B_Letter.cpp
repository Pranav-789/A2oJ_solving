#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1;
    string s2;
    getline(cin, s1);
    
    getline(cin, s2);

    unordered_map<char, int> mp1;
    unordered_map<char, int> mp2;

    for (auto x : s1)
    {
        if (x == ' ')
            continue;
        mp1[x]++;
    }

    for (auto x : s2)
    {
        if (x == ' ')
            continue;
        mp2[x]++;
    }

    for (auto it : mp2)
    {
        if (mp1[it.first] < it.second)
        {
            cout << "NO\n";
            return 0;
        }
    }

    cout << "YES\n";
}