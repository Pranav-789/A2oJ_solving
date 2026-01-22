#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    int i = 0;
    string ans = "";

    while(i < s.size()){
        if(i+2 < s.size() && s.substr(i, 3) == "WUB"){
            if(!ans.empty() && ans.back() != ' '){
                ans += ' ';
            }
            i+=3;
        }
        else{
            ans += s[i];
            i++;
        }
    }

    if(!ans.empty() && ans.back() == ' ') ans.pop_back();

    cout << ans << endl;
}