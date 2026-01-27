// #include<bits/stdc++.h>
// using namespace std;

// vector<int> solve(map<int, int> &mp)
// {
//     vector<int> res;

//     for (auto it = mp.begin(); it != mp.end() && res.size() < 3;)
//     {
//         if (it->second == 0)
//         {
//             it = mp.erase(it);
//             continue;
//         }

//         if (res.empty())
//         {
//             res.push_back(it->first);
//             it->second--;
//         }
//         else if (it->first > res.back() && it->first % res.back() == 0)
//         {
//             res.push_back(it->first);
//             it->second--;
//         }

//         if (it->second == 0)
//             it = mp.erase(it);
//         else
//             ++it;
//     }

//     if (res.size() < 3)
//         return {};
//     return res;
// }

// int main(){
//     int n;
//     cin >> n;

//     map<int, int> mp;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         mp[x]++;
//     }

//     if(mp.size() < 3){
//         cout << -1 << endl;
//         return 0;
//     }
//     vector<vector<int>> ans;

//     for (int i = 0; i < n/3; i++)
//     {
//         vector<int> res = solve(mp);
//         if(res.size() == 3){
//             ans.push_back(res);
//         }
//     }
//     if(ans.size() < n/3){
//         cout << -1 << endl;
//     }
//     else{
//         for (int i = 0; i < n/3; i++)
//         {
//             for (int j = 0; j < 3; j++)
//             {
//                 cout << ans[i][j] << " ";
//             }
//             cout << endl;
//         }
        
//     }
// }

// generalized solution

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    // n is the number of elements in the array or input
    // note: the numbers will only consists of {1, 2, 3, 4, 5, 6, 7}

    // so to get the pair of three
    // we should atleast have one 1 and one 2
    // as 5 and 7 are prime they will not help
    // leaving us with only {1, 2, 3, 4, 6}
    // possible triplets are {1, 2, 4}, {1, 2, 6}, {1, 3, 6}

    // so our aim will be to get the frequencies of 1, 2, 3, 4, and 6

    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }

    int cnt1 = mp[1], cnt2 = mp[2], cnt4 = mp[4], cnt6 = mp[6], cnt3 = mp[3];

    int groups = n/3;

    int possible124pairs = min(cnt1, min(cnt2, cnt4));
    int possible126pairs = min(cnt1-possible124pairs, min(cnt2-possible124pairs, cnt6));
    int possible136pairs = min(cnt1-possible124pairs-possible126pairs, min(cnt3, cnt6-possible126pairs));

    if(possible124pairs + possible126pairs + possible136pairs < groups){
        cout << -1 << endl;
        return 0;
    }
    else{
        for (int i = 0; i < groups; i++)
        {
            if(cnt2 > 0){
                cout << "1 2 ";
                if(cnt4 > 0){
                    cout << "4" << endl;
                    cnt4--;
                }else{
                    cout << "6" << endl;
                    cnt6--;
                }
                cnt2--;
            }
            else{
                cout << "1 3 6" << endl;
            }
        }  
    }
}