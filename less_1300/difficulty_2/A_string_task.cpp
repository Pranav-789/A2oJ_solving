#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;


    string t = ".";
    
    for(auto x: s){

        if(x >= 'A' && x <= 'Z'){
            x = x-'A'+97;
        }
        if (x != 'a' && x != 'e' && x != 'i' && x != 'o' && x != 'u' && x != 'y'
        )
        {
            t += x;
            t += '.';
        }
    }

    t.pop_back();
    cout << t << endl;
}