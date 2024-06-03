// interactive problems 43:00
//  https://codeforces.com/contest/1480/problem/C

#include <bits/stdc++.h>
using namespace std;
#define int long long
const int INF = 1e18;

//----------Map----------
typedef map<int, int> mpi;

mpi prev_values;
int n;

int query(int index)
{
    if (prev_values.find(index) != prev_values.end()) // contains in c++20
        return prev_values[index];
    if (index == 0 || index == n + 1)
        return INF;
    cout << "? " << index << endl;
    int value;
    cin >> value;
    return prev_values[index] = value;
}

// Binary Search
bool predicateBinary(int mid)
{
    return (query(mid - 1) > query(mid)); // decreasing
}

// T(-1) || T(1) T ... F F || F(n)
int binarySearch()
{
    int left = 0, right = n + 1; // 0 to n -> exclusive
    while (right - left > 1)     // while not empty range
    {
        int mid = left + (right - left) / 2;
        predicateBinary(mid) ? left = mid : right = mid;
    }
    // ans : last true {left} or first false{right}
    return left;
}

int solve()
{
    return binarySearch();
}

void Vatsh()
{
    // Your logic goes here
    cin >> n;
    int result = solve();
    cout << "! " << result << endl;
}

int32_t main()
{
    Vatsh();

    return 0;
}