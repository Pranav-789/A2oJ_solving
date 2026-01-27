#include<bits/stdc++.h>
using namespace std;

vector<long long> get_divisors(int n){
    vector<long long> ans;
    for(long long i = 1; i*i <= n; i++){
        if(n%i == 0) ans.push_back(i);
        if(i != n/i) ans.push_back(n/i);
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main(){
    long long a, b, c, n;
    cin >> a >> b >> c >> n;
    vector<long long> divi = get_divisors(n);

    for(auto x: divi){
        if(a%x != 0) continue;
        for(auto y: divi){
            if(b%y != 0) continue;

            long long prod = x*y;
            if(prod > n || n%prod != 0) continue;
            long long z = n/prod;

            if(c%z == 0){
                cout << (x-1) << " " << (y-1) << " " << (z-1) << endl;
                return 0;
            }
        }
    }
    cout << -1;
}