#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    int ones = 0, fours = 0;
    int consec4 = 0;

    for(int i = 0; i < s.length(); i++){
        if(s[i] == '1'){
            ones++;
            consec4 = 0;
        }
        else if(s[i] == '4'){
            fours++;
            consec4++;
        }
        else{
            consec4 = 0;
        }

        if(consec4 > 2){
            cout << "NO" << endl;
            return 0;
        }
    }

    if(ones + fours < s.length() || s[0] != '1'){
        cout << "NO" << endl;
    }
    else if(ones + fours == s.length()){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}