#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1;
    getline(cin, s1);
    string s2;
    getline(cin, s2);

    int diffs = 0;
    int d1 = -1, d2 = -1;
    
    if(s1.length() != s2.length()){
        cout << "NO" << endl;
        return 0;
    }

    for (int i = 0; i < s1.length(); i++)
    {
        if(s1[i] != s2[i]){
            diffs++;
            diffs == 1 ? d1 = i: d2 = i;
        }
    }

    if(diffs == 1 || diffs > 2){
        cout << "NO" << endl;
    }
    else{
        swap(s2[d1], s2[d2]);
        if(s1 == s2){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    
}