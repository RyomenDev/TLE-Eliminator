// https://cses.fi/problemset/task/1081
// Common Divisors

#include <bits/stdc++.h>
using namespace std;
const int MAX_VAL = 1e6;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    // occ_num[i] contains the number of times i occurs in the array
    vector<int> occ_num(MAX_VAL + 1);

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        occ_num[x]++;
    }
    // go through all possible gcd's
    for (int gcd = MAX_VAL; gcd > 0; gcd--) // O(maxi)
    {
        // see how many numbers of the array have this number as a divisor
        int i = 0;
        for (int j = gcd; j <= MAX_VAL; j += gcd) // O(MAX_VAL / gcd)
        {
            i += occ_num[j];
        }
        if (i >= 2)
        {
            cout << gcd << endl;
            break;
        }
    }
    return 0;
}

// #include <cmath>
// #include <iostream>
// using namespace std;

// const int MAX_VAL = 1e6;

// // divisors[i] = stores the count of numbers that have i as a divisor
// int divisors[MAX_VAL + 1]; // default 0

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);

//     int n;
//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         int a;
//         cin >> a;

//         for (int i = 1; i * i <= a; i++)
//         {
//             if (a % i == 0)
//             {
//                 // the divisor and quotient are both divisors of a
//                 divisors[i]++;
//                 // make sure not to double count!
//                 if (i != a / i)
//                 {
//                     divisors[a / i]++;
//                 }
//             }
//         }
//     }

//     for (int i = MAX_VAL; i >= 1; i--)
//     {
//         if (divisors[i] >= 2)
//         {
//             cout << i << endl;
//             break;
//         }
//     }
// }