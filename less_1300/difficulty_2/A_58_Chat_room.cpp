#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    string t = "hello";

    for(int i = s.length()-1; i >= 0; i--){
        char ch = t.back();
        if(ch == s[i]) t.pop_back();

        if(t == ""){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    
}