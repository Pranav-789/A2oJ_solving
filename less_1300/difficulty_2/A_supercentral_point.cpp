#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<vector<int>> v(n, vector<int>(2, -1));

    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < 2; j++){
            cin >> v[i][j];
        }
    }

    int cnt= 0;

    for(int i = 0; i < n; i++){
        bool r = false, l = false, t = false, b = false;
        for (int j = 0; j < n; j++)
        {
            if(i == j) continue;
            if(v[i][0] == v[j][0] && v[i][1] < v[j][1]) t= true;
            if(v[i][0] == v[j][0] && v[i][1] > v[j][1]) b= true;
            if(v[i][0] > v[j][0] && v[i][1] == v[j][1]) r= true;
            if(v[i][0] < v[j][0] && v[i][1] == v[j][1]) l= true;
        }
        if(l && r && t && b) cnt++;
    }
    
    cout << cnt << endl;
}