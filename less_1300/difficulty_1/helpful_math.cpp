#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    int ones = 0, twos = 0, threes = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] == '1') ones++;
        else if(s[i] == '2') twos++;
        else if(s[i]=='3') threes++;
    }

    string t = "";

    while (ones!=0)
    {
        t += "1+";
        ones--;
    }
    while(twos != 0){
        t += "2+";
        twos--;
    }
    while(threes != 0){
        t += "3+";
        threes--;
    }
    t.pop_back(); // pop the addition + sign
    cout << t << endl;
    
}