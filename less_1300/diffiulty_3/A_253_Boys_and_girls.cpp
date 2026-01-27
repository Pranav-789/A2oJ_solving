#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m; // n -> B, m -> G
    cin >> n >> m;

    if(m > n){
        while(n>0){
            cout << "GB";
            n--;m--;
        }
        while(m > 0){
            cout << "G";
            m--;
        }
    }
    else{
        while (m > 0)
        {
            cout << "BG";
            n--;
            m--;
        }
        while (n > 0)
        {
            cout << "B";
            n--;
        }
    }
}