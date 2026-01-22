#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    // rows = 2*n + 1
    // columns = 2*n + 1;

    for (int i = 0; i <= n; i++)
    {
        for (int k = 0; k < 2*(n-i); k++)
        {
            cout << " ";
        }
        
        for (int j = 0; j < i; j++)
        {
            cout << j << " ";
        }
        cout << i << " ";
        for (int j = i-1; j >= 0; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    for (int i = n-1; i >= 0; i--)
    {
        for (int k = 0; k < 2*(n-i); k++)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << j << " ";
        }
        cout << i << " ";
        for (int j = i - 1; j >= 0; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}