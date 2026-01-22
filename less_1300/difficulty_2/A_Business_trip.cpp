#include<bits/stdc++.h>
using namespace std;

int main(){
    int k;
    cin >> k;

    vector<int> months(12, -1);
    for (int i = 0; i < 12; i++)
    {
        cin >> months[i];
    }
    
    sort(months.rbegin(), months.rend());

    int cnt = 0;
    while(k > 0 && cnt < 12){
        k -= months[cnt];
        cnt++;
    }

    if(k > 0){
        cout << -1 << endl;
        return 0;
    }

    cout << (cnt) << endl;
}