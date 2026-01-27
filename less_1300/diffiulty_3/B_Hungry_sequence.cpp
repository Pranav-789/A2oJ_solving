#include <bits/stdc++.h>
using namespace std;

// void primes(int n)
// {
//     int count = 0;
//     int num = 2; 

//     while (count < n)
//     {
//         bool isPrime = true;

//         for (int j = 2; j * j <= num; j++)
//         {
//             if (num % j == 0)
//             {
//                 isPrime = false;
//                 break;
//             }
//         }
//         if (isPrime)
//         {
//             cout << num << " ";
//             count++;
//         }

//         num++;
//     }

//     cout << endl;
// }

int main()
{
    int n;
    cin >> n;

    int limit = 1500000;
    vector<int> isPrime(limit+1, true);

    isPrime[0] = isPrime[1] = false;

    for(int i = 2; i *i <= limit; i++){
        if(isPrime[i]){
            for(int j = i*i; j <= limit; j+= i){
                isPrime[j] = false;
            }
        }
    }

    int count = 0;

    for(int i = 2; i <= limit && count < n; i++){
        if(isPrime[i]){
            cout << i<< " ";
            count++;
        }
    }

    cout << endl;
    return 0;
}
