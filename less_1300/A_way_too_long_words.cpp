#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<string> v;
    vector<string> res;

    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        v.push_back(s);

        if(s.length() > 10){
            string t = "";
            t += s[0];
            t += to_string(s.length()-2);
            t += s[s.length()-1];
            res.push_back(t);
        }
        else{
            res.push_back(s);
        }
    }

    for(int i = 0; i < n; i++){
        cout << res[i] << endl;
    }
}