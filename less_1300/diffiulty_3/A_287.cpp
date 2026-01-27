#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<char>> v(4, vector<char>(4, '.'));

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> v[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int hash = 0;
            int dot = 0;
            v[i][j] == '#'? hash++: dot++;
            v[i+1][j] == '#'? hash++: dot++;
            v[i][j+1] == '#'? hash++: dot++;
            v[i+1][j+1] == '#'? hash++: dot++;

            if(hash >= 3 || dot >= 3){
                cout << "YES" << endl;
                return 0;
            }
        }
        
    }
    cout << "NO" << endl;
    
}