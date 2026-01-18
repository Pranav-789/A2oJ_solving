#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    int mini = INT_MAX;
    int x, y;
    for(int i = 0; i < n; i++){
        if(abs(v[i%n]-v[(i+1)%n]) < mini){
            x = i%n;
            y = (i+1)%n;
            mini = abs(v[i % n] - v[(i + 1) % n]);
        }
    }

    cout << x+1 << " " << y+1 << endl;
}

