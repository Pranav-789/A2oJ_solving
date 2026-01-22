#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    priority_queue<int, vector<int>, greater<int>> pq;
    priority_queue<int> mq;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        pq.push(x);
        mq.push(x);
    }
    int minCost = 0;
    int maxCost = 0;
    for (int i = 0; i < n; i++)
    {
        int currentPlane_emptySeats = pq.top();
        pq.pop();
        minCost += currentPlane_emptySeats;
        if(currentPlane_emptySeats-1 > 0)pq.push(currentPlane_emptySeats-1);
    }
    for (int i = 0; i < n; i++)
    {
        int currentPlane_emptySeats = mq.top();
        mq.pop();
        maxCost += currentPlane_emptySeats;
        if (currentPlane_emptySeats - 1 > 0)
            mq.push(currentPlane_emptySeats - 1);
    }
    cout << maxCost << " " << minCost << endl;
}