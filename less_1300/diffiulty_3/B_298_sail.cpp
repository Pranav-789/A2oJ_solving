#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, sx, sy, ex, ey;
    cin >> t >> sx >> sy >> ex >> ey;

    int horizontal_dist = ex-sx;
    int veritical_dist = ey-sy;
    string s;
    cin >> s;
    int ans = -1;
    for (int i = 0; i < t; i++)
    {
        if(horizontal_dist > 0 && s[i] == 'E') horizontal_dist-=1;
        if(horizontal_dist < 0 && s[i] == 'W') horizontal_dist += 1;
        if(veritical_dist > 0 && s[i] == 'N') veritical_dist -= 1;
        if(veritical_dist < 0 && s[i] == 'S') veritical_dist += 1;

        if(horizontal_dist == 0 && veritical_dist == 0){
            ans = i+1;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}