#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<vector<int>> v(n, vector<int>(2, 0)); // 0-> exit, 1-> enter

    int pass = 0;
    int maxPass = pass;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> v[i][j];
        }

        pass -= v[i][0];
        pass += v[i][1];

        maxPass = max(maxPass, pass);
    }

    cout << maxPass << endl;
    
}