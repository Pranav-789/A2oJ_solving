#include<bits/stdc++.h>
using namespace std;

int mex(vector<int>& a){ // nlogn + n
    int counter = 0;
    sort(a.begin(), a.end());

    for(int i = 0; i < a.size(); i++){
        if(counter!= a[i]){
            return counter;
        }
        counter++;
    }

    return a.size();
}

int mex(vector<int>& a){
    // TC = O(N)
    vector<bool> seen(a.size()+1, false);

    for(auto x: a){
        if(0 <= x && x <= a.size()) seen[x] = true;
    }

    for(int i = 0; i <= a.size(); i++){
        if(!seen[i]) return i;
    }
    return a.size()+1;
}

int main(){
    vector<int> v = {0, 1, 2, 3, 4, 5, 6, 7, 8};

    cout << mex(v);
}